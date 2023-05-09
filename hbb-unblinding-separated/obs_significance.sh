#!/bin/bash                                                                                                                                      
echo "Starting job on " `date` #Date/time of start of job                                                                                         
echo "Running on: `uname -a`" #Condor job is running on this node                                                                                
echo "System software: `cat /etc/redhat-release`" #Operating System on that node                                                          
# bring in the tarball you created before with caches and large files excluded:                                                            
xrdcp -s root://cmseos.fnal.gov//store/user/jennetd/CMSSW_10_2_13.tar.gz .
source /cvmfs/cms.cern.ch/cmsset_default.sh
tar -xf CMSSW_10_2_13.tar.gz
rm CMSSW_10_2_13.tar.gz
cd CMSSW_10_2_13/src/
scramv1 b ProjectRename # this handles linking the already compiled code - do NOT recompile                                               
eval `scramv1 runtime -sh` # cmsenv is an alias not on the workers                                                                                   
echo $CMSSW_BASE "is the CMSSW we have on the local worker node"
cd ${_CONDOR_SCRATCH_DIR}
pwd

# Arguments
year=$1

echo "VBF SIGNIFICANCE"
combine -M Significance -m 125 --signif output/testModel${year}/model_combined.root --redefineSignalPOI rVBF  --verbose 9 --setParameters rVBF=1,rggF=1

echo "GGF SIGNIFICANCE"
combine -M Significance -m 125 --signif output/testModel${year}/model_combined.root --redefineSignalPOI rggF --verbose 9 --setParameters rVBF=1,rggF=1

