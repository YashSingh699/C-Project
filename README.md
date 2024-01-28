Command Line Tool :

Step 1: Clone th repo into you local machine. <br />
step 2: Compile wc.cpp program using g++ -o  wc wc.cpp (here in place of "wc" you can enter any name that suite you that will set up name for your .exe file) 
        or you can used in-built run script to run program available in editor tool. <br />
step 3: This will generate .exe file and then copy the path of .exe file and add it in environment variable. Then, you will be ready to run program through command prompt.
        (I would recommended above set-up as it will allow to experaince better of using command line tool). <br />
step 4: Once all the above step is done. Open windows powershell and paste this command "wc [option] filename.txt"  (option = "-l" and "-c" and "wc" command is your .exe file so accordingly enter name 
        of the file which you enter during compilation). Make sure you are in the directory where "filename.txt" are present else you will not get output. <br />

        command line meaning - 
          -l => Number of line present in the text file
          -c => Total number of bytes or size of the file
For reference you can look at the below image:
          ![image](https://github.com/YashSingh699/C-Project/assets/155647901/a8b5144c-a3e3-463b-bd1b-a9a73c9b1684)
