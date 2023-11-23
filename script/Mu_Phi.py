
# rg_script_test.py
# coded by soyaviper Mar 29, 2007
# Modified by Pruarin July 14, 2010

##########################################################
# Mu Philippines Version
# 뮤 필리핀 버젼
##########################################################

#=================================== import

import sys
#import shutil
import ResourceGuard


#=================================== Set Path

sys.path.append("script")


#=================================== Set Working Folder

ResourceGuard.SetWorkingDirectory("//wz-ss-02/MStudio/Public/My Installations/해외뮤데이타/ResourceGuard/Phi")


#=================================== Check Resource Integrity

# 실행 데이타
ResourceGuard.AddResource("main.exe")
        
# 로컬 데이타
ResourceGuard.AddResource("Data/Local/text.bmd")
ResourceGuard.AddResource("Data/Local/item.bmd")
ResourceGuard.AddResource("Data/gate.bmd")
ResourceGuard.AddResource("Data/Local/Skill.bmd")
ResourceGuard.AddResource("Data/Local/buffeffect.bmd")
ResourceGuard.AddResource("Data/Local/mix.bmd")
ResourceGuard.AddResource("Data/Local/filter.bmd")

# 모델 데이타
ResourceGuard.AddResource("Data/Player/Player.bmd")

# 맵 데이타
ResourceGuard.AddResource("Data/World1/EncTerrain1.att")
ResourceGuard.AddResource("Data/World1/EncTerrain1.map")
ResourceGuard.AddResource("Data/World1/EncTerrain1.obj")

ResourceGuard.AddResource("Data/World2/EncTerrain2.att")
ResourceGuard.AddResource("Data/World2/EncTerrain2.map")
ResourceGuard.AddResource("Data/World2/EncTerrain2.obj")

ResourceGuard.AddResource("Data/World3/EncTerrain3.att")
ResourceGuard.AddResource("Data/World3/EncTerrain3.map")
ResourceGuard.AddResource("Data/World3/EncTerrain3.obj")

ResourceGuard.AddResource("Data/World4/EncTerrain4.att")
ResourceGuard.AddResource("Data/World4/EncTerrain4.map")
ResourceGuard.AddResource("Data/World4/EncTerrain4.obj")

ResourceGuard.AddResource("Data/World5/EncTerrain5.att")
ResourceGuard.AddResource("Data/World5/EncTerrain5.map")
ResourceGuard.AddResource("Data/World5/EncTerrain5.obj")

ResourceGuard.AddResource("Data/World7/EncTerrain7.att")
ResourceGuard.AddResource("Data/World7/EncTerrain7.map")
ResourceGuard.AddResource("Data/World7/EncTerrain7.obj")

ResourceGuard.AddResource("Data/World8/EncTerrain8.att")
ResourceGuard.AddResource("Data/World8/EncTerrain8.map")
ResourceGuard.AddResource("Data/World8/EncTerrain8.obj")

ResourceGuard.AddResource("Data/World9/EncTerrain9.att")
ResourceGuard.AddResource("Data/World9/EncTerrain9.map")
ResourceGuard.AddResource("Data/World9/EncTerrain9.obj")

ResourceGuard.AddResource("Data/World10/EncTerrain10.att")
ResourceGuard.AddResource("Data/World10/EncTerrain10.map")
ResourceGuard.AddResource("Data/World10/EncTerrain10.obj")

ResourceGuard.AddResource("Data/World11/EncTerrain11.att")
ResourceGuard.AddResource("Data/World11/EncTerrain11.map")
ResourceGuard.AddResource("Data/World11/EncTerrain11.obj")

ResourceGuard.AddResource("Data/World12/EncTerrain12.att")
ResourceGuard.AddResource("Data/World12/EncTerrain12.map")
ResourceGuard.AddResource("Data/World12/EncTerrain12.obj")

ResourceGuard.AddResource("Data/World19/EncTerrain19.att")
ResourceGuard.AddResource("Data/World19/EncTerrain19.map")
ResourceGuard.AddResource("Data/World19/EncTerrain19.obj")

ResourceGuard.AddResource("Data/World25/EncTerrain25.att")
ResourceGuard.AddResource("Data/World25/EncTerrain25.map")
ResourceGuard.AddResource("Data/World25/EncTerrain25.obj")

ResourceGuard.AddResource("Data/World31/EncTerrain31.att")
ResourceGuard.AddResource("Data/World31/EncTerrain31.map")
ResourceGuard.AddResource("Data/World31/EncTerrain31.obj")

ResourceGuard.AddResource("Data/World32/EncTerrain32.att")
ResourceGuard.AddResource("Data/World32/EncTerrain32.map")
ResourceGuard.AddResource("Data/World32/EncTerrain32.obj")

ResourceGuard.AddResource("Data/World34/EncTerrain34.att")
ResourceGuard.AddResource("Data/World34/EncTerrain34.map")
ResourceGuard.AddResource("Data/World34/EncTerrain34.obj")

ResourceGuard.AddResource("Data/World35/EncTerrain35.att")
ResourceGuard.AddResource("Data/World35/EncTerrain35.map")
ResourceGuard.AddResource("Data/World35/EncTerrain35.obj")

ResourceGuard.AddResource("Data/World38/EncTerrain38.att")
ResourceGuard.AddResource("Data/World38/EncTerrain38.map")
ResourceGuard.AddResource("Data/World38/EncTerrain38.obj")

ResourceGuard.AddResource("Data/World39/EncTerrain39.att")
ResourceGuard.AddResource("Data/World39/EncTerrain39.map")
ResourceGuard.AddResource("Data/World39/EncTerrain39.obj")

ResourceGuard.AddResource("Data/World40/EncTerrain40.att")
ResourceGuard.AddResource("Data/World40/EncTerrain40.map")
ResourceGuard.AddResource("Data/World40/EncTerrain40.obj")

ResourceGuard.AddResource("Data/World41/EncTerrain41.att")
ResourceGuard.AddResource("Data/World41/EncTerrain41.map")
ResourceGuard.AddResource("Data/World41/EncTerrain41.obj")

ResourceGuard.AddResource("Data/World42/EncTerrain42.att")
ResourceGuard.AddResource("Data/World42/EncTerrain42.map")
ResourceGuard.AddResource("Data/World42/EncTerrain42.obj")

ResourceGuard.AddResource("Data/World43/EncTerrain43.att")
ResourceGuard.AddResource("Data/World43/EncTerrain43.map")
ResourceGuard.AddResource("Data/World43/EncTerrain43.obj")

ResourceGuard.AddResource("Data/World47/EncTerrain47.att")
ResourceGuard.AddResource("Data/World47/EncTerrain47.map")
ResourceGuard.AddResource("Data/World47/EncTerrain47.obj")

ResourceGuard.AddResource("Data/World52/EncTerrain52.att")
ResourceGuard.AddResource("Data/World52/EncTerrain52.map")
ResourceGuard.AddResource("Data/World52/EncTerrain52.obj")

ResourceGuard.AddResource("Data/World57/EncTerrain57.att")
ResourceGuard.AddResource("Data/World57/EncTerrain57.map")
ResourceGuard.AddResource("Data/World57/EncTerrain57.obj")

ResourceGuard.AddResource("Data/World58/EncTerrain58.att")
ResourceGuard.AddResource("Data/World58/EncTerrain58.map")
ResourceGuard.AddResource("Data/World58/EncTerrain58.obj")

ResourceGuard.AddResource("Data/World59/EncTerrain59.att")
ResourceGuard.AddResource("Data/World59/EncTerrain59.map")
ResourceGuard.AddResource("Data/World59/EncTerrain59.obj")

ResourceGuard.AddResource("Data/World63/EncTerrain63.att")
ResourceGuard.AddResource("Data/World63/EncTerrain63.map")
ResourceGuard.AddResource("Data/World63/EncTerrain63.obj")

ResourceGuard.AddResource("Data/World78/EncTerrain78.att")
ResourceGuard.AddResource("Data/World78/EncTerrain78.map")
ResourceGuard.AddResource("Data/World78/EncTerrain78.obj")

ResourceGuard.AddResource("Data/World79/EncTerrain79.att")
ResourceGuard.AddResource("Data/World79/EncTerrain79.map")
ResourceGuard.AddResource("Data/World79/EncTerrain79.obj")


#=================================== back-up, build, and check integrity

ResourceGuard.SetWorkingDirectory("")

ResourceGuard.CreateResourceIntegityChecksumFile("GameGuard.csr")		# csr파일 생성
ResourceGuard.CheckIntegrityResourceChecksumFile("GameGuard.csr")		# csr파일 검사

		


