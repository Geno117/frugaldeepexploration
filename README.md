Requires openCV

Code utilizes frugally deep to load model and run predictions.

I wanted to quickly run the code in order to show you the steps required to manipulate the output.

However, I was running into compilations errors and had to stop.

However, steps required afterwards include
setting anchors
finding overlapping regions and supressing those above threshold overlap.

model used yolo using coco labels and weights.
Code for model creation was based on (this link)[https://machinelearningmastery.com/how-to-perform-object-detection-with-yolov3-in-keras/]