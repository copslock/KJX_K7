@echo off
set prj=
set customer=TOUR
if %customer%==MTK set customer=PLUTO
path ..\..\tools;..\..\..\tools;..\..\..\Tools\MSYS\bin;..\..\..\..\Tools\MSYS\bin;..\..\Tools\MinGW\bin;..\..\..\Tools\MinGW\bin;..\debug;.\debug;..\..\..\Tools;%path%;
if  not .%1==.  goto a:
goto menu:


:a

echo MediaTek Inc. Skin Update Script.
echo Update skin for %customer%...


rem ************************************************************
rem *************** Copy PLUTO Project BASE Files FIRST ********
rem ************************************************************
echo ***********************************************************
echo ***************** Copy PLUTO Base Skin ********************
echo ***********************************************************
echo Copy [PLUTO_MMI] Audio Player Skin
copy .\custresource\PLUTO_MMI\resource_audply_skins.c .\custresource\
echo Copy [PLUTO_MMI] Audio Player Skin SubLCD
copy .\custresource\PLUTO_MMI\resource_audply_sub_skins.c .\custresource\
echo Copy [PLUTO_MMI] FM Radio Skin
copy .\custresource\PLUTO_MMI\resource_fmradio_skins.c .\custresource\
echo Copy [PLUTO_MMI] FM Radio Skin SubLCD
copy .\custresource\PLUTO_MMI\resource_fmradio_sub_skins.c .\custresource\
echo Copy [PLUTO_MMI] FM Schedule Record Skin
copy .\custresource\PLUTO_MMI\resource_fmschedulerec_skins.c .\custresource\
echo Copy [PLUTO_MMI] Camera Features and Skin
copy .\custresource\PLUTO_MMI\resource_camera_skins.c .\custresource\
copy .\custresource\PLUTO_MMI\resource_camera_skins.h .\custresource\
copy .\custresource\PLUTO_MMI\MMI_features_camera.h .\custresource\
echo Copy [PLUTO_MMI] Video Features and Skin
copy .\custresource\PLUTO_MMI\resource_video_skins.c .\custresource\
copy .\custresource\PLUTO_MMI\resource_video_skins.h .\custresource\
copy .\custresource\PLUTO_MMI\MMI_features_video.h .\custresource\
copy .\custresource\PLUTO_MMI\resource_vdoedt_skins.c .\custresource\
copy .\custresource\PLUTO_MMI\resource_vdoedt_skins.h .\custresource\
echo Copy [PLUTO_MMI] Video Telephony Skin
copy .\custresource\PLUTO_MMI\resource_vt_skins.c .\custresource\
copy .\custresource\PLUTO_MMI\resource_vt_skins.h .\custresource\
copecho Copy [PLUTO_MMI] AB Repeater Skin
echo Copy [PLUTO_MMI] AB Repeater Skin
copy .\custresource\PLUTO_MMI\resource_abrepeat_skins.c .\custresource\
echo Copy [PLUTO_MMI] BarcodeReader Features and Skin
copy .\custresource\PLUTO_MMI\resource_barcodereader_skins.c .\custresource\
copy .\custresource\PLUTO_MMI\resource_barcodereader_skins.h .\custresource\
copy .\custresource\PLUTO_MMI\MMI_features_barcodereader.h .\custresource\
echo Copy [PLUTO_MMI] Mobile TV Features
copy .\custresource\PLUTO_MMI\MMI_features_mtv_player.h .\custresource\
echo Copy [PLUTO_MMI] Camcorder Features and Skin
copy .\custresource\PLUTO_MMI\MMI_features_camcorder.h .\custresource\
copy .\custresource\PLUTO_MMI\resource_camcorder_skins.c .\custresource\
copy .\custresource\PLUTO_MMI\resource_camcorder_skins.h .\custresource\
echo Copy [PLUTO_MMI] BCR Features and Skin
copy .\custresource\PLUTO_MMI\MMI_features_bcr.h .\custresource\
copy .\custresource\PLUTO_MMI\resource_bcr_skins.c .\custresource\
copy .\custresource\PLUTO_MMI\resource_bcr_skins.h .\custresource\
echo Copy [PLUTO_MMI] Media Player Features and Skin
copy .\custresource\PLUTO_MMI\mmi_features_mediaplayer.h .\custresource\
copy .\custresource\PLUTO_MMI\resource_mediaplayer_skins.c .\custresource\
copy .\custresource\PLUTO_MMI\resource_mediaplayer_skins.h .\custresource\


rem ************************************************************
rem *************** Copy Project Related Files *****************
rem ************************************************************
echo ***********************************************************
echo *************** Update %customer% Skin *******************
echo ***********************************************************
echo Copy [%customer%_MMI] Audio Player Skin
copy .\custresource\%customer%_MMI\resource_audply_skins.c .\custresource\
echo Copy [%customer%_MMI] Audio Player Skin SubLCD
copy .\custresource\%customer%_MMI\resource_audply_sub_skins.c .\custresource\
echo Copy [%customer%_MMI] FM Radio Skin
copy .\custresource\%customer%_MMI\resource_fmradio_skins.c .\custresource\
echo Copy [%customer%_MMI] FM Radio Skin SubLCD
copy .\custresource\%customer%_MMI\resource_fmradio_sub_skins.c .\custresource\
echo Copy [%customer%_MMI] FM Schedule Record Skin
copy .\custresource\%customer%_MMI\resource_fmschedulerec_skins.c .\custresource\
echo Copy [%customer%_MMI] Camera Features and Skin
copy .\custresource\%customer%_MMI\resource_camera_skins.c .\custresource\
copy .\custresource\%customer%_MMI\resource_camera_skins.h .\custresource\
copy .\custresource\%customer%_MMI\MMI_features_camera.h .\custresource\
echo Copy [%customer%_MMI] Video Features and Skin
copy .\custresource\%customer%_MMI\resource_video_skins.c .\custresource\
copy .\custresource\%customer%_MMI\resource_video_skins.h .\custresource\
copy .\custresource\%customer%_MMI\MMI_features_video.h .\custresource\
copy .\custresource\%customer%_MMI\resource_vdoedt_skins.c .\custresource\
copy .\custresource\%customer%_MMI\resource_vdoedt_skins.h .\custresource\
echo Copy [%customer%_MMI] AB Repeater Skin
copy .\custresource\%customer%_MMI\resource_abrepeat_skins.c .\custresource\
echo Copy [%customer%_MMI] Barcode Reader Features and Skin
copy .\custresource\%customer%_MMI\resource_barcodereader_skins.c .\custresource\
copy .\custresource\%customer%_MMI\resource_barcodereader_skins.h .\custresource\
copy .\custresource\%customer%_MMI\MMI_features_barcodereader.h .\custresource\
echo Copy [%customer%_MMI] Mobile TV Features
copy .\custresource\%customer%_MMI\MMI_features_mtv_player.h .\custresource\
echo Copy [%customer%_MMI] Camcorder Features and Skin
copy .\custresource\%customer%_MMI\MMI_features_camcorder.h .\custresource\
copy .\custresource\%customer%_MMI\resource_camcorder_skins.c .\custresource\
copy .\custresource\%customer%_MMI\resource_camcorder_skins.h .\custresource\
echo Copy [%customer%_MMI] BCR Features and Skin
copy .\custresource\%customer%_MMI\MMI_features_bcr.h .\custresource\
copy .\custresource\%customer%_MMI\resource_bcr_skins.c .\custresource\
copy .\custresource\%customer%_MMI\resource_bcr_skins.h .\custresource\
echo Copy [%customer%_MMI] Media Player Features and Skin
copy .\custresource\%customer%_MMI\mmi_features_mediaplayer.h .\custresource\
copy .\custresource\%customer%_MMI\resource_mediaplayer_skins.c .\custresource\
copy .\custresource\%customer%_MMI\resource_mediaplayer_skins.h .\custresource\

rem ************************************************************
rem *************** Move Project Related Files *****************
rem ************************************************************
echo ***********************************************************
echo ************* Update to \plutommi\mmi\inc\ ****************
echo ***********************************************************
copy .\custresource\MMI_features_camera.h ..\MMI\Inc\MMI_features_camera.h
copy .\custresource\MMI_features_video.h ..\MMI\Inc\MMI_features_video.h
copy .\custresource\MMI_features_barcodereader.h ..\MMI\Inc\MMI_features_barcodereader.h
copy .\custresource\MMI_features_camcorder.h ..\MMI\Inc\MMI_features_camcorder.h
copy .\custresource\mmi_features_mediaplayer.h ..\MMI\Inc\mmi_features_mediaplayer.h
copy .\custresource\resource_camera_skins.h ..\MMI\Inc\resource_camera_skins.h
copy .\custresource\resource_video_skins.h ..\MMI\Inc\resource_video_skins.h
copy .\custresource\resource_vt_skins.h ..\MMI\Inc\resource_vt_skins.h
copy .\custresource\resource_barcodereader_skins.h ..\MMI\Inc\resource_barcodereader_skins.h
copy .\custresource\resource_vdoedt_skins.h ..\MMI\Inc\resource_vdoedt_skins.h
copy .\custresource\resource_camcorder_skins.h ..\MMI\Inc\resource_camcorder_skins.h
copy .\custresource\resource_bcr_skins.h ..\MMI\Inc\resource_bcr_skins.h
copy .\custresource\resource_mediaplayer_skins.h ..\MMI\Inc\resource_mediaplayer_skins.h
goto done


rem ************************************************************
rem **************** Menu To Select Project ********************
rem ************************************************************
:menu
@echo off
rem cls
rem echo MediaTek Resource Generator
rem echo. 
rem echo Please select one project to generate resource...
rem echo.
rem echo    SELECT MENU
rem echo    ==========
rem echo.
rem echo    1 - TOUR
rem echo.
rem echo    Q - Quit
rem choice /C:1Q>nul

rem if errorlevel 23 goto done
rem if errorlevel 1 goto TOUR:
goto TOUR:

goto done


:TOUR
set prj=TOUR
goto a:

:done
