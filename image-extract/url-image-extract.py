from imutils import paths
import argparse
import requests
import cv2
import os

ap = argparse.ArgumentParser()
ap.add_argument("-u", "--urls", required=True, help="urls of images you want")
ap.add_argument("-o", "--output", required=True, help="directory where these downloaded images will be held")
args = vars(ap.parse_args())

#grab the list of URLs from the input file
rows = open(args["urls"]).read().strip().split("\n")
total = 0

for url in rows:
    try:
        #try to download the imiage
        r = requests.get(url, timeout=60)

        #save the image
        p = os.path.sep.join([args["output"], "{}.jpg".format(str(total).zfill(8))])
        f = open(p, "wb")
        f.write(r.content)
        f.close()

        print("[INFO] downloaded: {}".format(p))
        total += 1

    except:
        print("[INFO] error downloading {}...skipping".format(p))

    #loop over the image paths we just downloaded
for imagePath in paths.list_images(args["output"]):

    delete = False

    # try to load the image
    try:
        image = cv2.imread(imagePath)

        # if the image is `None` then we could not properly load it
        # from disk, so delete it
        if image is None:
            delete = True

    # if OpenCV cannot load the image then the image is likely
    # corrupt so we should delete it
    except:
        print("Except")
        delete = True

    if delete:
        print("[INFO] deleting {}".format(imagePath))
        os.remove(imagePath)
