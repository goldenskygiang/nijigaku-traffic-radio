#ifndef F8API_H
#define F8API_H

#define DLL_API __declspec(dllexport)
#include<memory>
#include<functional>

enum F8MouseButton{_MouseButtonLeft,_MouseButtonRight,_MouseButtonMiddle};
enum F8ApplicationErrorTypeEnum{_Information,_Warning,_Error,_UnexpectedError};
enum F8ModelSelectionEnum{_ModelSelectionNone,_ModelSelectionSelect,_ModelSelectionSelectAndEdit};
enum F8LaneDistanceEnum{_ldLane,_ldRoad};
enum F8RoadDistanceFeatureTypeEnum{_dfUnknown,_dfSectionChange,_dfSectionTransition,_dfBridge,_dfTunnel,_dfUnmodifiedTerrain};
enum F8TrafficControlTypeEnum{_ctNoSignal,_ctWithSignal};
enum F8FlightPathDistanceEnum{_fpd2D,_fpd3D};
enum F8RoadObjectPlacementEnum{_LeftOfRoad,_RightOfRoad,_CenterOfRoad};
enum F8ModelTypeEnum{_UnknownModel,_GeneralModel,_VehicleModel,_RailroadModel,_CabModel,_TrailerModel,_TrafficLightModel,_BuildingModel,_AircraftModel,_BoatModel,_StructureModel,_PlantModel,_AnimalModel,_RoadStructureModel,_VehicleInteriorModel,_CharacterModel,_TreeModel,_FlagModel,_ParticleGeneratorModel,_TerrainTextureModel,_Text3dModel,_VideoWallModel,_ReplaceModel};
enum F8HcsConvertCoordinateEnum{_hcOpenGL_XZ,_hcLocal_XY,_hcGlobal_EN,_hcProjectCS_XY,_hcProjectGCS_LonLat,_hcSpecifiedCS,_hcWGS84_LonLat};
enum F8SpeedUnitEnum{_MeterPerSecond,_KiloMeterPerHour};
enum F8TransientTypeEnum{_TransientUnknown,_TransientCar,_TransientCharacter,_TransientMoving};
enum F8TrafficStateEnum{_tsReset,_tsPlay,_tsPause};
enum F8VisualOptionDisplayTypeEnum{_WireFrame,_Clipping,_TransparentGround,_StreetMap,_Roads,_OffRoadStartPoint,_RoadSigns,_RoadModels,_RoadTrees,_Powerlines,_Polylines,_Models,_Trees,_Trees3D,_VideoWalls,_3DTexts,_Backdrops,_Flags,_Characters,_ParticleGenerators,_FlightPath,_PedestrianNwk,_Zones,_SmokeTunnels,_Shoreline,_Shadows,_Fog,_Weather,_RainOnRoad,_WaterFromPrecedingVehicle,_RainOnWindshield,_Thunder,_WindParticle,_Temperature,_Clouds,_Sky,_Moon,_Stars,_Sun,_SunFlare,_SunLight,_EyeLight,_SpotLight,_Compass,_CarMirrors,_CarMonitorView,_Dashboard,_PositionMap,_RotatePositionMap,_ShowCurrentDateTime,_Bloom,_CarCockpit,_InfoMessages,_DashboardItems,_Headlight,_StreetLights,_StreetLightsPosition,_HeadLightsPosition,_TurnHeadlightsAutomaticallyAtNight,_ModelsLights,_ShowTrafficTime,_VirtualDisplays,_ShowScenarioTime,_ShowReplayInfo,_ShowNumberOfMovingObjects,_LaneDebugInfo,_TrafficVehicles,_FlyingModels,_WayPoints,_EventConsoleScenarioInfo,_TinSurfaces,_DisplayNightVehicleAlways,_DrivingVehicle};
enum F8EnvironmentStateEnum{_esReset,_esPlay,_esPause};
enum F8ScriptStatusEnum{_scReset,_scPlay,_scPause};
enum F8MainRibbonCategoryEnum{_mmtcHome,_mmtcEdition,_mmtcViews,_mmtcServer,_mmtcDebug,_mmtcTrafficLink,_mmtcRecording,_mmtcCluster,_mmtcAnalysis,_mmtcPointCloud,_mmtcDrivingSim,_mmtcMicroSim,_mmtcDevice};
enum F8MainRibbonControlTypeEnum{_rcUnknown,_rcButton,_rcEdit,_rcCheckBox,_rcLabel,_rcPanel};
enum F8MainCameraTiltModeEnum{_useTiltAng,_useUpVect,_useModelViewMatrix,_useCameraMatrix};
enum F8SimulationScreenWindowEnum{_WindowSize,_PhysicalScreen,_DirectFov};
enum F8NavigationModeEnum{_nmFree,_nmWalk,_nmDrive,_nmTravel,_nmFly,_nmFollow,_nmInCharacter,_nmBicycle};
enum F8DrivingModeEnum{_dmForceAutomatic,_dmSemiautomatic,_dmPassenger,_dmManual};
enum F8MainFormCameraMoveModeEnum{_cmmNone,_cmmLookAbout,_cmmInOut,_cmmPanning,_cmmFlyAbout,_cmmSpinAbout,_cmmSatellite,_cmmDrive,_cmmTravelOnRoad,_cmmTravelOnFlightpath,_cmmTravelPaused,_cmmScript,_cmmScriptPause,_cmmWalk};

class F8ApplicationServices;
class F8ProxyBase_Class;
class F8ObjectProxy_Class;
class F8ModelProxy_Class;
class F8ThreeDModelProxy_Class;
class F8MD3ModelProxy_Class;
class F8ObjectInstanceProxy_Class;
class F8ModelInstanceProxy_Class;
class F8ModelInstanceWithBasePositionProxy_Class;
class F8ModelInstanceWithoutBasePositionProxy_Class;
class F8ThreeDModelInstanceProxy_Class;
class F8SectionProxy_Class;
class F8RoadLaneProxy_Class;
class F8RoadDistanceFeatureProxy_Class;
class F8RoadSectionChangeProxy_Class;
class F8RoadSectionTransitionProxy_Class;
class F8RoadDistanceFeatureWithLengthProxy_Class;
class F8RoadBridgeZoneProxy_Class;
class F8RoadTunnelZoneProxy_Class;
class F8RoadUnmodifiedTerrainZoneProxy_Class;
class F8RoadObstructionProxy_Class;
class F8RoadIntersectionInfoType_Class;
class F8RoadRampConnectionInfoType_Class;
class F8RoadSectionInfoType_Class;
class F8RoadProxy_Class;
class F8OffroadStartPointProxy_Class;
class F8IntersectionTerminalProxy_Class;
class F8IntersectionEntryPointProxy_Class;
class F8IntersectionExitPointProxy_Class;
class F8IntersectionLaneCurveProxy_Class;
class F8IntersectionDrivePathProxy_Class;
class F8TrafficSignalControllerProxy_Class;
class F8IntersectionProxy_Class;
class F8FlightPathProxy_Class;
class F8RoadSideObjectInstanceProxy_Class;
class F8RoadThreeDModelInstanceProxy_Class;
class F8ContextProxy_Class;
class F8ScriptProxy_Class;
class F8ScriptAnimationProxy_Class;
class F8EventProxy_Class;
class F8ScenarioProxy_Class;
class F8CoordinateConverterProxy_Class;
class F8HorizontalCoordinateConverterProxy_Class;
class F8ProjectProxy_Class;
class F8TransientInstanceProxy_Class;
class F8TransientInstanceProxyList_Class;
class F8TransientMovingInstanceProxy_Class;
class F8TransientCharacterInstanceProxy_Class;
class F8TransientCarInstanceProxy_Class;
class F8MainDriverProxy_Class;
class F8DriverDataType_Class;
class F8TrafficSimulationProxy_Class;
class F8VisualOptionsRootProxy_Class;
class F8CurrentScriptInfoType_Class;
class F8SimulationCoreProxy_Class;
class F8OpenGLProxy_Class;
class F8MainOpenGLProxy_Class;
class F8MainRibbonControlProxy_Class;
class F8MainRibbonButtonProxy_Class;
class F8MainRibbonEditProxy_Class;
class F8MainRibbonLabelProxy_Class;
class F8MainRibbonCheckBoxProxy_Class;
class F8MainRibbonGroupProxy_Class;
class F8MainRibbonPanelProxy_Class;
class F8MainRibbonTabProxy_Class;
class F8MainRibbonProxy_Class;
class F8MainCameraProxy_Class;
class F8SimulationScreenProxy_Class;
class F8NavigationStateType_Class;
class F8MainFormProxy_Class;
class F8GazeTrackingPluginProxy_Class;

typedef std::shared_ptr<F8ProxyBase_Class> F8ProxyBase;
typedef std::shared_ptr<F8ObjectProxy_Class> F8ObjectProxy;
typedef std::shared_ptr<F8ModelProxy_Class> F8ModelProxy;
typedef std::shared_ptr<F8ThreeDModelProxy_Class> F8ThreeDModelProxy;
typedef std::shared_ptr<F8MD3ModelProxy_Class> F8MD3ModelProxy;
typedef std::shared_ptr<F8ObjectInstanceProxy_Class> F8ObjectInstanceProxy;
typedef std::shared_ptr<F8ModelInstanceProxy_Class> F8ModelInstanceProxy;
typedef std::shared_ptr<F8ModelInstanceWithBasePositionProxy_Class> F8ModelInstanceWithBasePositionProxy;
typedef std::shared_ptr<F8ModelInstanceWithoutBasePositionProxy_Class> F8ModelInstanceWithoutBasePositionProxy;
typedef std::shared_ptr<F8ThreeDModelInstanceProxy_Class> F8ThreeDModelInstanceProxy;
typedef std::shared_ptr<F8SectionProxy_Class> F8SectionProxy;
typedef std::shared_ptr<F8RoadLaneProxy_Class> F8RoadLaneProxy;
typedef std::shared_ptr<F8RoadDistanceFeatureProxy_Class> F8RoadDistanceFeatureProxy;
typedef std::shared_ptr<F8RoadSectionChangeProxy_Class> F8RoadSectionChangeProxy;
typedef std::shared_ptr<F8RoadSectionTransitionProxy_Class> F8RoadSectionTransitionProxy;
typedef std::shared_ptr<F8RoadDistanceFeatureWithLengthProxy_Class> F8RoadDistanceFeatureWithLengthProxy;
typedef std::shared_ptr<F8RoadBridgeZoneProxy_Class> F8RoadBridgeZoneProxy;
typedef std::shared_ptr<F8RoadTunnelZoneProxy_Class> F8RoadTunnelZoneProxy;
typedef std::shared_ptr<F8RoadUnmodifiedTerrainZoneProxy_Class> F8RoadUnmodifiedTerrainZoneProxy;
typedef std::shared_ptr<F8RoadObstructionProxy_Class> F8RoadObstructionProxy;
typedef std::shared_ptr<F8RoadIntersectionInfoType_Class> F8RoadIntersectionInfoType;
typedef std::shared_ptr<F8RoadRampConnectionInfoType_Class> F8RoadRampConnectionInfoType;
typedef std::shared_ptr<F8RoadSectionInfoType_Class> F8RoadSectionInfoType;
typedef std::shared_ptr<F8RoadProxy_Class> F8RoadProxy;
typedef std::shared_ptr<F8OffroadStartPointProxy_Class> F8OffroadStartPointProxy;
typedef std::shared_ptr<F8IntersectionTerminalProxy_Class> F8IntersectionTerminalProxy;
typedef std::shared_ptr<F8IntersectionEntryPointProxy_Class> F8IntersectionEntryPointProxy;
typedef std::shared_ptr<F8IntersectionExitPointProxy_Class> F8IntersectionExitPointProxy;
typedef std::shared_ptr<F8IntersectionLaneCurveProxy_Class> F8IntersectionLaneCurveProxy;
typedef std::shared_ptr<F8IntersectionDrivePathProxy_Class> F8IntersectionDrivePathProxy;
typedef std::shared_ptr<F8TrafficSignalControllerProxy_Class> F8TrafficSignalControllerProxy;
typedef std::shared_ptr<F8IntersectionProxy_Class> F8IntersectionProxy;
typedef std::shared_ptr<F8FlightPathProxy_Class> F8FlightPathProxy;
typedef std::shared_ptr<F8RoadSideObjectInstanceProxy_Class> F8RoadSideObjectInstanceProxy;
typedef std::shared_ptr<F8RoadThreeDModelInstanceProxy_Class> F8RoadThreeDModelInstanceProxy;
typedef std::shared_ptr<F8ContextProxy_Class> F8ContextProxy;
typedef std::shared_ptr<F8ScriptProxy_Class> F8ScriptProxy;
typedef std::shared_ptr<F8ScriptAnimationProxy_Class> F8ScriptAnimationProxy;
typedef std::shared_ptr<F8EventProxy_Class> F8EventProxy;
typedef std::shared_ptr<F8ScenarioProxy_Class> F8ScenarioProxy;
typedef std::shared_ptr<F8CoordinateConverterProxy_Class> F8CoordinateConverterProxy;
typedef std::shared_ptr<F8HorizontalCoordinateConverterProxy_Class> F8HorizontalCoordinateConverterProxy;
typedef std::shared_ptr<F8ProjectProxy_Class> F8ProjectProxy;
typedef std::shared_ptr<F8TransientInstanceProxy_Class> F8TransientInstanceProxy;
typedef std::shared_ptr<F8TransientInstanceProxyList_Class> F8TransientInstanceProxyList;
typedef std::shared_ptr<F8TransientMovingInstanceProxy_Class> F8TransientMovingInstanceProxy;
typedef std::shared_ptr<F8TransientCharacterInstanceProxy_Class> F8TransientCharacterInstanceProxy;
typedef std::shared_ptr<F8TransientCarInstanceProxy_Class> F8TransientCarInstanceProxy;
typedef std::shared_ptr<F8MainDriverProxy_Class> F8MainDriverProxy;
typedef std::shared_ptr<F8DriverDataType_Class> F8DriverDataType;
typedef std::shared_ptr<F8TrafficSimulationProxy_Class> F8TrafficSimulationProxy;
typedef std::shared_ptr<F8VisualOptionsRootProxy_Class> F8VisualOptionsRootProxy;
typedef std::shared_ptr<F8CurrentScriptInfoType_Class> F8CurrentScriptInfoType;
typedef std::shared_ptr<F8SimulationCoreProxy_Class> F8SimulationCoreProxy;
typedef std::shared_ptr<F8OpenGLProxy_Class> F8OpenGLProxy;
typedef std::shared_ptr<F8MainOpenGLProxy_Class> F8MainOpenGLProxy;
typedef std::shared_ptr<F8MainRibbonControlProxy_Class> F8MainRibbonControlProxy;
typedef std::shared_ptr<F8MainRibbonButtonProxy_Class> F8MainRibbonButtonProxy;
typedef std::shared_ptr<F8MainRibbonEditProxy_Class> F8MainRibbonEditProxy;
typedef std::shared_ptr<F8MainRibbonLabelProxy_Class> F8MainRibbonLabelProxy;
typedef std::shared_ptr<F8MainRibbonCheckBoxProxy_Class> F8MainRibbonCheckBoxProxy;
typedef std::shared_ptr<F8MainRibbonGroupProxy_Class> F8MainRibbonGroupProxy;
typedef std::shared_ptr<F8MainRibbonPanelProxy_Class> F8MainRibbonPanelProxy;
typedef std::shared_ptr<F8MainRibbonTabProxy_Class> F8MainRibbonTabProxy;
typedef std::shared_ptr<F8MainRibbonProxy_Class> F8MainRibbonProxy;
typedef std::shared_ptr<F8MainCameraProxy_Class> F8MainCameraProxy;
typedef std::shared_ptr<F8SimulationScreenProxy_Class> F8SimulationScreenProxy;
typedef std::shared_ptr<F8NavigationStateType_Class> F8NavigationStateType;
typedef std::shared_ptr<F8MainFormProxy_Class> F8MainFormProxy;
typedef std::shared_ptr<F8GazeTrackingPluginProxy_Class> F8GazeTrackingPluginProxy;

extern "C"
{

	struct F8dVec2{
		double X;
		double Y;
	};
	struct F8dVec3{
		double X;
		double Y;
		double Z;
	};
	struct F8dVec4{
		double X;
		double Y;
		double Z;
		double W;
	};
	struct F8iVec2{
		int X;
		int Y;
	};
	struct F8iVec4{
		int X;
		int Y;
		int Z;
		int W;
	};
	struct F8dMat4{
		F8dVec4 X;
		F8dVec4 Y;
		F8dVec4 Z;
		F8dVec4 W;
	};
	struct F8BoundingBoxType{
		F8dVec3 center;
		F8dVec3 xAxis;
		F8dVec3 yAxis;
		F8dVec3 zAxis;
	};
	struct F8GUID{
		unsigned D1;
		unsigned short D2;
		unsigned short D3;
		unsigned char D4[8];
	};
	struct F8DoubleArrayType{
		int num;
		void* values;
	};
	struct F8ShiftState{
		bool isShiftDown;
		bool isAltDown;
		bool isCtrlDown;
		bool isLeftDown;
		bool isRightDown;
		bool isMiddleDown;
		bool isDouble;
		bool isTouch;
		bool isPen;
		bool isCommand;
		bool isHorizontal;
	};
	struct F8TrafficLightsStateType{
		bool isMainGreenOn;
		bool isMainYellowOn;
		bool isMainRedOn;
		bool isStraightGreenOn;
		bool isLeftGreenOn;
		bool isRightGreenOn;
	};
	struct F8CarLightsStateType{
		bool isLeftIndicatorOn;
		bool isRightIndicatorOn;
		bool isBrakeLightOn;
		bool isHighBeamOn;
		bool isLowBeamOn;
	};
	struct F8RoadLaneInfoOptionsType{
		bool outputPosition;
		bool outputDirection;
		bool outputDirection2D;
		bool outputDesignSpeed;
		bool outputCurvature;
		bool outputRollAngle;
		bool outputLimits;
		bool outputForDriving;
		bool outputGlobalPosition;
	};
	struct F8RoadLaneInfoType{
		F8dVec3 position;
		F8dVec3 unitDirection;
		F8dVec3 direction;
		F8dVec3 topologicalDir;
		double designSpeed;
		double curvature;
		double rollAngle;
		double leftLimit;
		double rightLimit;
	};
	struct F8HeightSearchConditionsType{
		bool checkTerrain;
		bool checkRoad;
		bool checkIntersection;
		bool onlyDrivableSurface;
		bool onlyCarriageway;
		bool excludeTransparentRoadSurfaces;
	};
	struct F8dVec2ArrayType{
		int num;
		void* values;
	};
	struct F8HcsConvertResultType{
		bool isSuccess;
		bool isOutOfCS;
		bool isBadArray;
	};
	struct F8VehiclePlacementType{
		bool isForward;
		int lane;
		double distance;
	};
	struct F8UserVariables{
		double values[512];
	};
	struct F8OpenGLViewPortType{
		int x;
		int y;
		int width;
		int height;
	};
	struct F8MainCameraStateType{
		F8MainCameraTiltModeEnum cameraMode;
		bool allowUnderTerrain;
		F8dVec3 eye;
		F8dVec3 viewPoint;
		double tiltAngle;
		F8dVec3 upVector;
		F8dMat4 matrix;
	};
	struct F8SimulationScreenWindowSizeSettingType{
		double screenDistance;
		double fovVertical;
		double fovHorizontal;
		double frustumShiftX;
		double frustumShiftY;
	};
	struct F8SimulationScreenPhysicalScreenSettingType{
		F8dVec3 position;
		double width;
		double height;
	};
	struct F8SimulationScreenDirectFovSettingType{
		double fovTop;
		double fovBottom;
		double fovLeft;
		double fovRight;
	};
	struct F8SimulationScreenSettingType{
		F8SimulationScreenWindowEnum settingType;
		double yaw;
		double pitch;
		double roll;
		F8SimulationScreenWindowSizeSettingType settingWindowSize;
		F8SimulationScreenPhysicalScreenSettingType settingPhysicalScreen;
		F8SimulationScreenDirectFovSettingType settingDirectFov;
	};
	struct F8NavigationCommonParameterType{
		bool onRoad;
		void* road;
		int lane;
		int initialSpeed;
		int SpeedLimitEngine;
		bool engineStopped;
		bool parkingBrakeOn;
		double position;
		double height;
		bool goForwards;
		bool doLooping;
		bool ignoreWaypoints;
		void* vehicle;
		void* trailer;
		void* offRoadStartPoint;
	};
	struct F8NavigationWalkParameterType{
		void* character;
	};
	struct F8ACCSettingType{
		bool allowPedalOverride;
		bool releaseOnBrake;
		double brakeReleaseThreshold;
		bool releaseOnAccel;
		double accelReleaseThreshold;
		bool releaseOnButtonPress;
		int releaseButtonNumber;
		bool releaseOnVehicleStop;
		double releaseSpeedInMps;
	};
	struct F8NavigationDriveParameterType{
		void* newCar;
		bool driveWithCarParam;
		F8DrivingModeEnum drivingMode;
		double TTC;
		double steeringSmoothingFactor;
		F8ACCSettingType ACCSetting;
	};
	struct F8NavigationFlyParameterType{
		void* flightpath;
		int speed;
		double altitude;
		double startPosition;
		bool roll;
		bool forwards;
		bool flyWithParam;
	};
	struct F8NavigationBicycleParameterType{
		void* bikeCharacter;
		void* bikeFlightpath;
		double position;
		int initialSpeed;
		bool goForwards;
		bool isLoop;
	};
	struct F8ApiGazeTrackingDataType{
		F8dVec3 rawEyePosition;
		F8dVec3 rawEyeDirection;
		F8dVec3 rawHeadPosition;
		F8dVec3 rawHeadDirection;
		double rawMeasurementReliability;
	};
	struct F8ApiGazeDataType{
		F8dVec3 absEyePosition;
		F8dVec3 absHeadPosition;
		F8dVec3 absEyeDirection;
		F8dVec3 absHeadDirection;
		double measurementReliability;
		F8dVec3 rawEyePosition;
		F8dVec3 rawEyeDirection;
		F8dVec3 rawHeadPosition;
		F8dVec3 rawHeadDirection;
		double rawMeasurementReliability;
		double time;
	};

}

typedef std::function<void (F8ObjectProxy)> Cb_ObjectOnBeforeDestruction;
typedef std::function<void (double,F8TransientInstanceProxy)> Cb_TransientOnBeforeCalculateMovement;
typedef std::function<void (double,F8TransientInstanceProxy)> Cb_TransientOnAfterCalculateMovement;
typedef std::function<void (double,F8TransientInstanceProxy)> Cb_TransientOnBeforeDoMovement;
typedef std::function<void (double,F8TransientInstanceProxy)> Cb_TransientOnAfterDoMovement;
typedef std::function<void (double,F8TransientInstanceProxy)> Cb_TransientOnCalculateMovement;
typedef std::function<void (double,F8TransientInstanceProxy)> Cb_TransientOnDoMovement;
typedef std::function<void (void)> Cb_TrafficSimulationStatusChanged;
typedef std::function<void (F8DriverDataType)> Cb_TrafficBeforeInitializeDriving;
typedef std::function<void (F8TransientCarInstanceProxy)> Cb_TrafficStartDrivingCar;
typedef std::function<void (F8TransientCarInstanceProxy)> Cb_TrafficStopDrivingCar;
typedef std::function<void (double)> Cb_TrafficTransientWorldBeforeMove;
typedef std::function<void (double)> Cb_TrafficTransientWorldAfterMove;
typedef std::function<void (double)> Cb_TrafficTransientWorldMove;
typedef std::function<void (F8TransientInstanceProxy)> Cb_TrafficNewTransientObject;
typedef std::function<void (F8TransientInstanceProxy)> Cb_TrafficTransientObjectDeleted;
typedef std::function<void (double)> Cb_TrafficCacheSimulationData;
typedef std::function<void (F8ContextProxy)> Cb_SimulationApplyContext;
typedef std::function<void (void)> Cb_SimulationStartEnvironment;
typedef std::function<void (void)> Cb_SimulationStopEnvironment;
typedef std::function<void (F8ScenarioProxy)> Cb_SimulationStartScenario;
typedef std::function<void (F8ScenarioProxy,int)> Cb_SimulationStopScenario;
typedef std::function<void (F8EventProxy)> Cb_SimulationStartEvent;
typedef std::function<void (F8EventProxy)> Cb_SimulationStopEvent;
typedef std::function<void (void)> Cb_SimulationStartScript;
typedef std::function<void (void)> Cb_SimulationStopScript;
typedef std::function<void (int)> Cb_MainFormOpenGLBeforePaint;
typedef std::function<void (void)> Cb_MainFormOpenGLAfterDrawScene;
typedef std::function<void (void)> Cb_MainFormOpenGLAfterPaint;
typedef std::function<void (void)> Cb_MainFormOpenGLMouseEnter;
typedef std::function<void (void)> Cb_MainFormOpenGLMouseLeave;
typedef std::function<void (F8MouseButton,F8ShiftState,int,int)> Cb_MainFormOpenGLMouseUp;
typedef std::function<void (F8MouseButton,F8ShiftState,int,int)> Cb_MainFormOpenGLMouseDown;
typedef std::function<void (F8ShiftState,int,int)> Cb_MainFormOpenGLMouseMove;
typedef std::function<void (F8ShiftState,int,F8iVec2,bool&)> Cb_MainFormOpenGLMouseWheel;
typedef std::function<void (void)> Cb_RibbonMenuItemOnClick;
typedef std::function<void (void)> Cb_RibbonMenuItemOnChange;
typedef std::function<void (void)> Cb_MainFormNavigationModeChange;
typedef std::function<void (void)> Cb_MainFormMoveModeChange;
typedef std::function<void (F8ObjectInstanceProxy,F8ModelSelectionEnum&)> Cb_MainFormModelClick;
typedef std::function<void (int,int,int,int,int,int,int,int)> Cb_MainFormJoystickMove;
typedef std::function<void (int)> Cb_MainFormJoystickButtonDown;
typedef std::function<void (int)> Cb_MainFormJoystickButtonUp;
typedef std::function<void (unsigned)> Cb_MainFormJoystickHat;
typedef std::function<void (unsigned short&,F8ShiftState)> Cb_MainFormKeyUp;
typedef std::function<void (unsigned short&,F8ShiftState)> Cb_MainFormKeyDown;
typedef std::function<void (void)> Cb_GazeTrackingPluginGazeDataUpdated;
typedef std::function<void (bool)> Cb_ApplicationPluginAbleMenus;
typedef std::function<void (F8ApplicationErrorTypeEnum,unsigned short,const wchar_t*)> Cb_ApplicationOnErrorOrWarning;
typedef std::function<void (void)> Cb_ApplicationNewProject;
typedef std::function<void (const wchar_t*)> Cb_ApplicationBeforeSaveProject;
typedef std::function<void (void)> Cb_ApplicationAfterSaveProject;
typedef std::function<void (bool&)> Cb_ApplicationCloseProjectQuery;
typedef std::function<void (void)> Cb_ApplicationBeforeDestroyProject;
typedef std::function<void (void)> Cb_ApplicationAfterLoadProject;


typedef void* (*TGetAPI)(void*);
extern TGetAPI GetApplicationServices;
typedef void* (*TF8ProxyBaseDestroy)(void*);
extern TF8ProxyBaseDestroy Generated_F8ProxyBaseDestroy;
typedef const wchar_t*(*TF8ObjectProxyGetProxyName)(void*);
extern TF8ObjectProxyGetProxyName Generated_F8ObjectProxyGetProxyName;
typedef F8GUID(*TF8ObjectProxyGetGUID)(void*);
extern TF8ObjectProxyGetGUID Generated_F8ObjectProxyGetGUID;
typedef bool(*TF8ObjectProxyIsSameAs)(void*,void*);
extern TF8ObjectProxyIsSameAs Generated_F8ObjectProxyIsSameAs;
typedef const wchar_t*(*TF8ObjectProxyGetPluginData)(void*,int,const wchar_t*);
extern TF8ObjectProxyGetPluginData Generated_F8ObjectProxyGetPluginData;
typedef void*(*TF8ObjectProxySetPluginData)(void*,int,const wchar_t*,const wchar_t*);
extern TF8ObjectProxySetPluginData Generated_F8ObjectProxySetPluginData;
typedef int(*TF8ObjectProxyGetPluginBinaryDataSize)(void*,int,const wchar_t*);
extern TF8ObjectProxyGetPluginBinaryDataSize Generated_F8ObjectProxyGetPluginBinaryDataSize;
typedef void*(*TF8ObjectProxyGetPluginBinaryData)(void*,int,const wchar_t*,int,void*);
extern TF8ObjectProxyGetPluginBinaryData Generated_F8ObjectProxyGetPluginBinaryData;
typedef void*(*TF8ObjectProxySetPluginBinaryData)(void*,int,const wchar_t*,int,void*);
extern TF8ObjectProxySetPluginBinaryData Generated_F8ObjectProxySetPluginBinaryData;
typedef void*(*TF8ObjectProxyRegisterCallbackOnBeforeDestruction)(void*,void*);
extern TF8ObjectProxyRegisterCallbackOnBeforeDestruction Generated_F8ObjectProxyRegisterCallbackOnBeforeDestruction;
typedef void*(*TF8ObjectProxyUnregisterCallbackOnBeforeDestruction)(void*,void*);
extern TF8ObjectProxyUnregisterCallbackOnBeforeDestruction Generated_F8ObjectProxyUnregisterCallbackOnBeforeDestruction;
typedef void*(*TF8ObjectProxyDestroy)(void*);
extern TF8ObjectProxyDestroy Generated_F8ObjectProxyDestroy;
typedef const wchar_t*(*TF8ModelProxyGetName)(void*);
extern TF8ModelProxyGetName Generated_F8ModelProxyGetName;
typedef F8ModelTypeEnum(*TF8ModelProxyGetModelType)(void*);
extern TF8ModelProxyGetModelType Generated_F8ModelProxyGetModelType;
typedef void*(*TF8ModelProxyDestroy)(void*);
extern TF8ModelProxyDestroy Generated_F8ModelProxyDestroy;
typedef void*(*TF8ThreeDModelProxyDestroy)(void*);
extern TF8ThreeDModelProxyDestroy Generated_F8ThreeDModelProxyDestroy;
typedef void*(*TF8MD3ModelProxyDestroy)(void*);
extern TF8MD3ModelProxyDestroy Generated_F8MD3ModelProxyDestroy;
typedef const wchar_t*(*TF8ObjectInstanceProxyGetName)(void*);
extern TF8ObjectInstanceProxyGetName Generated_F8ObjectInstanceProxyGetName;
typedef const wchar_t*(*TF8ObjectInstanceProxyGetDescription)(void*);
extern TF8ObjectInstanceProxyGetDescription Generated_F8ObjectInstanceProxyGetDescription;
typedef int(*TF8ObjectInstanceProxyGetID)(void*);
extern TF8ObjectInstanceProxyGetID Generated_F8ObjectInstanceProxyGetID;
typedef bool(*TF8ObjectInstanceProxyGetDisplayedIn)(void*,int);
extern TF8ObjectInstanceProxyGetDisplayedIn Generated_F8ObjectInstanceProxyGetDisplayedIn;
typedef void*(*TF8ObjectInstanceProxySetDisplayedIn)(void*,int,bool);
extern TF8ObjectInstanceProxySetDisplayedIn Generated_F8ObjectInstanceProxySetDisplayedIn;
typedef void*(*TF8ObjectInstanceProxyDestroy)(void*);
extern TF8ObjectInstanceProxyDestroy Generated_F8ObjectInstanceProxyDestroy;
typedef F8dVec3(*TF8ModelInstanceProxyGetPosition)(void*);
extern TF8ModelInstanceProxyGetPosition Generated_F8ModelInstanceProxyGetPosition;
typedef void*(*TF8ModelInstanceProxySetPosition)(void*,F8dVec3);
extern TF8ModelInstanceProxySetPosition Generated_F8ModelInstanceProxySetPosition;
typedef double(*TF8ModelInstanceProxyGetScale)(void*);
extern TF8ModelInstanceProxyGetScale Generated_F8ModelInstanceProxyGetScale;
typedef F8dVec3(*TF8ModelInstanceProxyGetScaleFactor)(void*);
extern TF8ModelInstanceProxyGetScaleFactor Generated_F8ModelInstanceProxyGetScaleFactor;
typedef double(*TF8ModelInstanceProxyGetYawAngle)(void*);
extern TF8ModelInstanceProxyGetYawAngle Generated_F8ModelInstanceProxyGetYawAngle;
typedef void*(*TF8ModelInstanceProxySetYawAngle)(void*,double);
extern TF8ModelInstanceProxySetYawAngle Generated_F8ModelInstanceProxySetYawAngle;
typedef double(*TF8ModelInstanceProxyGetPitchAngle)(void*);
extern TF8ModelInstanceProxyGetPitchAngle Generated_F8ModelInstanceProxyGetPitchAngle;
typedef void*(*TF8ModelInstanceProxySetPitchAngle)(void*,double);
extern TF8ModelInstanceProxySetPitchAngle Generated_F8ModelInstanceProxySetPitchAngle;
typedef double(*TF8ModelInstanceProxyGetRollAngle)(void*);
extern TF8ModelInstanceProxyGetRollAngle Generated_F8ModelInstanceProxyGetRollAngle;
typedef void*(*TF8ModelInstanceProxySetRollAngle)(void*,double);
extern TF8ModelInstanceProxySetRollAngle Generated_F8ModelInstanceProxySetRollAngle;
typedef F8dVec3(*TF8ModelInstanceProxyGetCenterPosition)(void*);
extern TF8ModelInstanceProxyGetCenterPosition Generated_F8ModelInstanceProxyGetCenterPosition;
typedef double(*TF8ModelInstanceProxyGetRadius)(void*);
extern TF8ModelInstanceProxyGetRadius Generated_F8ModelInstanceProxyGetRadius;
typedef int(*TF8ModelInstanceProxyGetBoundingBoxesCount)(void*);
extern TF8ModelInstanceProxyGetBoundingBoxesCount Generated_F8ModelInstanceProxyGetBoundingBoxesCount;
typedef F8BoundingBoxType(*TF8ModelInstanceProxyGetBoundingBox)(void*,int);
extern TF8ModelInstanceProxyGetBoundingBox Generated_F8ModelInstanceProxyGetBoundingBox;
typedef void*(*TF8ModelInstanceProxyDestroy)(void*);
extern TF8ModelInstanceProxyDestroy Generated_F8ModelInstanceProxyDestroy;
typedef F8dVec3(*TF8ModelInstanceWithBasePositionProxyGetBasePosition3D)(void*);
extern TF8ModelInstanceWithBasePositionProxyGetBasePosition3D Generated_F8ModelInstanceWithBasePositionProxyGetBasePosition3D;
typedef F8dVec2(*TF8ModelInstanceWithBasePositionProxyGetBasePosition2D)(void*);
extern TF8ModelInstanceWithBasePositionProxyGetBasePosition2D Generated_F8ModelInstanceWithBasePositionProxyGetBasePosition2D;
typedef void*(*TF8ModelInstanceWithBasePositionProxySetBasePosition2D)(void*,F8dVec2);
extern TF8ModelInstanceWithBasePositionProxySetBasePosition2D Generated_F8ModelInstanceWithBasePositionProxySetBasePosition2D;
typedef double(*TF8ModelInstanceWithBasePositionProxyGetDeltaH)(void*);
extern TF8ModelInstanceWithBasePositionProxyGetDeltaH Generated_F8ModelInstanceWithBasePositionProxyGetDeltaH;
typedef void*(*TF8ModelInstanceWithBasePositionProxySetDeltaH)(void*,double);
extern TF8ModelInstanceWithBasePositionProxySetDeltaH Generated_F8ModelInstanceWithBasePositionProxySetDeltaH;
typedef void*(*TF8ModelInstanceWithBasePositionProxyDestroy)(void*);
extern TF8ModelInstanceWithBasePositionProxyDestroy Generated_F8ModelInstanceWithBasePositionProxyDestroy;
typedef void*(*TF8ModelInstanceWithoutBasePositionProxyDestroy)(void*);
extern TF8ModelInstanceWithoutBasePositionProxyDestroy Generated_F8ModelInstanceWithoutBasePositionProxyDestroy;
typedef void*(*TF8ThreeDModelInstanceProxyActivateCommand)(void*,const wchar_t*,F8DoubleArrayType);
extern TF8ThreeDModelInstanceProxyActivateCommand Generated_F8ThreeDModelInstanceProxyActivateCommand;
typedef void*(*TF8ThreeDModelInstanceProxyDeactivateCommand)(void*,const wchar_t*);
extern TF8ThreeDModelInstanceProxyDeactivateCommand Generated_F8ThreeDModelInstanceProxyDeactivateCommand;
typedef F8TrafficLightsStateType(*TF8ThreeDModelInstanceProxyGetTrafficLights)(void*);
extern TF8ThreeDModelInstanceProxyGetTrafficLights Generated_F8ThreeDModelInstanceProxyGetTrafficLights;
typedef F8CarLightsStateType(*TF8ThreeDModelInstanceProxyGetCarLights)(void*);
extern TF8ThreeDModelInstanceProxyGetCarLights Generated_F8ThreeDModelInstanceProxyGetCarLights;
typedef void*(*TF8ThreeDModelInstanceProxyDestroy)(void*);
extern TF8ThreeDModelInstanceProxyDestroy Generated_F8ThreeDModelInstanceProxyDestroy;
typedef const wchar_t*(*TF8SectionProxyGetName)(void*);
extern TF8SectionProxyGetName Generated_F8SectionProxyGetName;
typedef void*(*TF8SectionProxyDestroy)(void*);
extern TF8SectionProxyDestroy Generated_F8SectionProxyDestroy;
typedef double(*TF8RoadLaneProxyGetLength)(void*);
extern TF8RoadLaneProxyGetLength Generated_F8RoadLaneProxyGetLength;
typedef void*(*TF8RoadLaneProxyGetParentRoad)(void*);
extern TF8RoadLaneProxyGetParentRoad Generated_F8RoadLaneProxyGetParentRoad;
typedef bool(*TF8RoadLaneProxyGetIsForward)(void*);
extern TF8RoadLaneProxyGetIsForward Generated_F8RoadLaneProxyGetIsForward;
typedef F8dVec3(*TF8RoadLaneProxyGetPosition)(void*,double,F8LaneDistanceEnum);
extern TF8RoadLaneProxyGetPosition Generated_F8RoadLaneProxyGetPosition;
typedef F8dVec3(*TF8RoadLaneProxyGetDirection)(void*,double,F8LaneDistanceEnum);
extern TF8RoadLaneProxyGetDirection Generated_F8RoadLaneProxyGetDirection;
typedef int(*TF8RoadLaneProxyGetLaneID)(void*,double,F8LaneDistanceEnum);
extern TF8RoadLaneProxyGetLaneID Generated_F8RoadLaneProxyGetLaneID;
typedef double(*TF8RoadLaneProxyGetLaneWidth)(void*,double,F8LaneDistanceEnum);
extern TF8RoadLaneProxyGetLaneWidth Generated_F8RoadLaneProxyGetLaneWidth;
typedef F8RoadLaneInfoType(*TF8RoadLaneProxyGetCurveInformation)(void*,double,F8RoadLaneInfoOptionsType);
extern TF8RoadLaneProxyGetCurveInformation Generated_F8RoadLaneProxyGetCurveInformation;
typedef double(*TF8RoadLaneProxyConvertDistance)(void*,double,F8LaneDistanceEnum,F8LaneDistanceEnum);
extern TF8RoadLaneProxyConvertDistance Generated_F8RoadLaneProxyConvertDistance;
typedef bool(*TF8RoadLaneProxyCalculateDistanceFrom)(void*,F8dVec3,double&,double&);
extern TF8RoadLaneProxyCalculateDistanceFrom Generated_F8RoadLaneProxyCalculateDistanceFrom;
typedef void*(*TF8RoadLaneProxyDestroy)(void*);
extern TF8RoadLaneProxyDestroy Generated_F8RoadLaneProxyDestroy;
typedef F8RoadDistanceFeatureTypeEnum(*TF8RoadDistanceFeatureProxyGetFeatureType)(void*);
extern TF8RoadDistanceFeatureProxyGetFeatureType Generated_F8RoadDistanceFeatureProxyGetFeatureType;
typedef double(*TF8RoadDistanceFeatureProxyGetDistance)(void*);
extern TF8RoadDistanceFeatureProxyGetDistance Generated_F8RoadDistanceFeatureProxyGetDistance;
typedef void*(*TF8RoadDistanceFeatureProxyDestroy)(void*);
extern TF8RoadDistanceFeatureProxyDestroy Generated_F8RoadDistanceFeatureProxyDestroy;
typedef void*(*TF8RoadSectionChangeProxyGetSection)(void*);
extern TF8RoadSectionChangeProxyGetSection Generated_F8RoadSectionChangeProxyGetSection;
typedef void*(*TF8RoadSectionChangeProxyDestroy)(void*);
extern TF8RoadSectionChangeProxyDestroy Generated_F8RoadSectionChangeProxyDestroy;
typedef void*(*TF8RoadSectionTransitionProxyDestroy)(void*);
extern TF8RoadSectionTransitionProxyDestroy Generated_F8RoadSectionTransitionProxyDestroy;
typedef double(*TF8RoadDistanceFeatureWithLengthProxyGetLength)(void*);
extern TF8RoadDistanceFeatureWithLengthProxyGetLength Generated_F8RoadDistanceFeatureWithLengthProxyGetLength;
typedef void*(*TF8RoadDistanceFeatureWithLengthProxyDestroy)(void*);
extern TF8RoadDistanceFeatureWithLengthProxyDestroy Generated_F8RoadDistanceFeatureWithLengthProxyDestroy;
typedef void*(*TF8RoadBridgeZoneProxyDestroy)(void*);
extern TF8RoadBridgeZoneProxyDestroy Generated_F8RoadBridgeZoneProxyDestroy;
typedef void*(*TF8RoadTunnelZoneProxyDestroy)(void*);
extern TF8RoadTunnelZoneProxyDestroy Generated_F8RoadTunnelZoneProxyDestroy;
typedef void*(*TF8RoadUnmodifiedTerrainZoneProxyDestroy)(void*);
extern TF8RoadUnmodifiedTerrainZoneProxyDestroy Generated_F8RoadUnmodifiedTerrainZoneProxyDestroy;
typedef const wchar_t*(*TF8RoadObstructionProxyGetDescription)(void*);
extern TF8RoadObstructionProxyGetDescription Generated_F8RoadObstructionProxyGetDescription;
typedef double(*TF8RoadObstructionProxyGetDistance)(void*);
extern TF8RoadObstructionProxyGetDistance Generated_F8RoadObstructionProxyGetDistance;
typedef double(*TF8RoadObstructionProxyGetLength)(void*);
extern TF8RoadObstructionProxyGetLength Generated_F8RoadObstructionProxyGetLength;
typedef void*(*TF8RoadObstructionProxyDestroy)(void*);
extern TF8RoadObstructionProxyDestroy Generated_F8RoadObstructionProxyDestroy;
typedef int(*TF8RoadIntersectionInfoTypeGetIntersectionIdx)(void*);
extern TF8RoadIntersectionInfoTypeGetIntersectionIdx Generated_F8RoadIntersectionInfoTypeGetIntersectionIdx;
typedef double(*TF8RoadIntersectionInfoTypeGetStartDistance)(void*);
extern TF8RoadIntersectionInfoTypeGetStartDistance Generated_F8RoadIntersectionInfoTypeGetStartDistance;
typedef double(*TF8RoadIntersectionInfoTypeGetEndDistance)(void*);
extern TF8RoadIntersectionInfoTypeGetEndDistance Generated_F8RoadIntersectionInfoTypeGetEndDistance;
typedef void*(*TF8RoadIntersectionInfoTypeDestroy)(void*);
extern TF8RoadIntersectionInfoTypeDestroy Generated_F8RoadIntersectionInfoTypeDestroy;
typedef double(*TF8RoadRampConnectionInfoTypeGetPosition)(void*);
extern TF8RoadRampConnectionInfoTypeGetPosition Generated_F8RoadRampConnectionInfoTypeGetPosition;
typedef bool(*TF8RoadRampConnectionInfoTypeGetIsConnected)(void*);
extern TF8RoadRampConnectionInfoTypeGetIsConnected Generated_F8RoadRampConnectionInfoTypeGetIsConnected;
typedef const wchar_t*(*TF8RoadRampConnectionInfoTypeGetConnectedRoadName)(void*);
extern TF8RoadRampConnectionInfoTypeGetConnectedRoadName Generated_F8RoadRampConnectionInfoTypeGetConnectedRoadName;
typedef void*(*TF8RoadRampConnectionInfoTypeDestroy)(void*);
extern TF8RoadRampConnectionInfoTypeDestroy Generated_F8RoadRampConnectionInfoTypeDestroy;
typedef void*(*TF8RoadSectionInfoTypeDestroy)(void*);
extern TF8RoadSectionInfoTypeDestroy Generated_F8RoadSectionInfoTypeDestroy;
typedef void*(*TF8RoadSectionInfoTypeGetSection1)(void*);
extern TF8RoadSectionInfoTypeGetSection1 Generated_F8RoadSectionInfoTypeGetSection1;
typedef void*(*TF8RoadSectionInfoTypeGetSection2)(void*);
extern TF8RoadSectionInfoTypeGetSection2 Generated_F8RoadSectionInfoTypeGetSection2;
typedef double(*TF8RoadSectionInfoTypeGetMergeRatio)(void*);
extern TF8RoadSectionInfoTypeGetMergeRatio Generated_F8RoadSectionInfoTypeGetMergeRatio;
typedef bool(*TF8RoadSectionInfoTypeGetInTunnel)(void*);
extern TF8RoadSectionInfoTypeGetInTunnel Generated_F8RoadSectionInfoTypeGetInTunnel;
typedef bool(*TF8RoadSectionInfoTypeGetOnBridge)(void*);
extern TF8RoadSectionInfoTypeGetOnBridge Generated_F8RoadSectionInfoTypeGetOnBridge;
typedef int(*TF8RoadProxyGetDistanceFeaturesCount)(void*);
extern TF8RoadProxyGetDistanceFeaturesCount Generated_F8RoadProxyGetDistanceFeaturesCount;
typedef void*(*TF8RoadProxyGetDistanceFeature)(void*,int);
extern TF8RoadProxyGetDistanceFeature Generated_F8RoadProxyGetDistanceFeature;
typedef int(*TF8RoadProxyGetObstructionsCount)(void*);
extern TF8RoadProxyGetObstructionsCount Generated_F8RoadProxyGetObstructionsCount;
typedef void*(*TF8RoadProxyGetObstruction)(void*,int);
extern TF8RoadProxyGetObstruction Generated_F8RoadProxyGetObstruction;
typedef const wchar_t*(*TF8RoadProxyGetName)(void*);
extern TF8RoadProxyGetName Generated_F8RoadProxyGetName;
typedef double(*TF8RoadProxyGetLength)(void*);
extern TF8RoadProxyGetLength Generated_F8RoadProxyGetLength;
typedef F8dVec3(*TF8RoadProxyGetPositionAt)(void*,double);
extern TF8RoadProxyGetPositionAt Generated_F8RoadProxyGetPositionAt;
typedef F8dVec3(*TF8RoadProxyGetDirectionAt)(void*,double);
extern TF8RoadProxyGetDirectionAt Generated_F8RoadProxyGetDirectionAt;
typedef double(*TF8RoadProxyGetCurvatureAt)(void*,double);
extern TF8RoadProxyGetCurvatureAt Generated_F8RoadProxyGetCurvatureAt;
typedef double(*TF8RoadProxyGetSlopeAt)(void*,double);
extern TF8RoadProxyGetSlopeAt Generated_F8RoadProxyGetSlopeAt;
typedef double(*TF8RoadProxyGetEdgeOffsetAt)(void*,double,bool);
extern TF8RoadProxyGetEdgeOffsetAt Generated_F8RoadProxyGetEdgeOffsetAt;
typedef void*(*TF8RoadProxyGetSectionInfoAt)(void*,double);
extern TF8RoadProxyGetSectionInfoAt Generated_F8RoadProxyGetSectionInfoAt;
typedef int(*TF8RoadProxyGetRoadLanesCount)(void*);
extern TF8RoadProxyGetRoadLanesCount Generated_F8RoadProxyGetRoadLanesCount;
typedef void*(*TF8RoadProxyGetRoadLane)(void*,int);
extern TF8RoadProxyGetRoadLane Generated_F8RoadProxyGetRoadLane;
typedef void*(*TF8RoadProxySearchRoadLane)(void*,double,bool,int);
extern TF8RoadProxySearchRoadLane Generated_F8RoadProxySearchRoadLane;
typedef int(*TF8RoadProxyGetIntersectionInfosCount)(void*);
extern TF8RoadProxyGetIntersectionInfosCount Generated_F8RoadProxyGetIntersectionInfosCount;
typedef void*(*TF8RoadProxyGetIntersectionInfo)(void*,int);
extern TF8RoadProxyGetIntersectionInfo Generated_F8RoadProxyGetIntersectionInfo;
typedef int(*TF8RoadProxyGetRampConnectionInfosCount)(void*);
extern TF8RoadProxyGetRampConnectionInfosCount Generated_F8RoadProxyGetRampConnectionInfosCount;
typedef void*(*TF8RoadProxyGetRampConnectionInfo)(void*,int);
extern TF8RoadProxyGetRampConnectionInfo Generated_F8RoadProxyGetRampConnectionInfo;
typedef bool(*TF8RoadProxyCalculateDistanceFrom)(void*,F8dVec3,double&,double&);
extern TF8RoadProxyCalculateDistanceFrom Generated_F8RoadProxyCalculateDistanceFrom;
typedef void*(*TF8RoadProxyDestroy)(void*);
extern TF8RoadProxyDestroy Generated_F8RoadProxyDestroy;
typedef void*(*TF8OffroadStartPointProxyDestroy)(void*);
extern TF8OffroadStartPointProxyDestroy Generated_F8OffroadStartPointProxyDestroy;
typedef const wchar_t*(*TF8IntersectionTerminalProxyGetDescription)(void*);
extern TF8IntersectionTerminalProxyGetDescription Generated_F8IntersectionTerminalProxyGetDescription;
typedef int(*TF8IntersectionTerminalProxyGetDrivePathsCount)(void*);
extern TF8IntersectionTerminalProxyGetDrivePathsCount Generated_F8IntersectionTerminalProxyGetDrivePathsCount;
typedef void*(*TF8IntersectionTerminalProxyGetDrivePath)(void*,int);
extern TF8IntersectionTerminalProxyGetDrivePath Generated_F8IntersectionTerminalProxyGetDrivePath;
typedef F8dVec3(*TF8IntersectionTerminalProxyGetRoadLanePosition)(void*);
extern TF8IntersectionTerminalProxyGetRoadLanePosition Generated_F8IntersectionTerminalProxyGetRoadLanePosition;
typedef F8dVec3(*TF8IntersectionTerminalProxyGetRoadLaneDirection)(void*);
extern TF8IntersectionTerminalProxyGetRoadLaneDirection Generated_F8IntersectionTerminalProxyGetRoadLaneDirection;
typedef void*(*TF8IntersectionTerminalProxyDestroy)(void*);
extern TF8IntersectionTerminalProxyDestroy Generated_F8IntersectionTerminalProxyDestroy;
typedef void*(*TF8IntersectionEntryPointProxyDestroy)(void*);
extern TF8IntersectionEntryPointProxyDestroy Generated_F8IntersectionEntryPointProxyDestroy;
typedef void*(*TF8IntersectionExitPointProxyDestroy)(void*);
extern TF8IntersectionExitPointProxyDestroy Generated_F8IntersectionExitPointProxyDestroy;
typedef double(*TF8IntersectionLaneCurveProxyGetLength)(void*);
extern TF8IntersectionLaneCurveProxyGetLength Generated_F8IntersectionLaneCurveProxyGetLength;
typedef F8dVec3(*TF8IntersectionLaneCurveProxyGetPosition)(void*,double);
extern TF8IntersectionLaneCurveProxyGetPosition Generated_F8IntersectionLaneCurveProxyGetPosition;
typedef F8dVec3(*TF8IntersectionLaneCurveProxyGetDirection)(void*,double);
extern TF8IntersectionLaneCurveProxyGetDirection Generated_F8IntersectionLaneCurveProxyGetDirection;
typedef void*(*TF8IntersectionLaneCurveProxyDestroy)(void*);
extern TF8IntersectionLaneCurveProxyDestroy Generated_F8IntersectionLaneCurveProxyDestroy;
typedef void*(*TF8IntersectionDrivePathProxyGetEntryPoint)(void*);
extern TF8IntersectionDrivePathProxyGetEntryPoint Generated_F8IntersectionDrivePathProxyGetEntryPoint;
typedef void*(*TF8IntersectionDrivePathProxyGetExitPoint)(void*);
extern TF8IntersectionDrivePathProxyGetExitPoint Generated_F8IntersectionDrivePathProxyGetExitPoint;
typedef void*(*TF8IntersectionDrivePathProxyGetLaneCurve)(void*);
extern TF8IntersectionDrivePathProxyGetLaneCurve Generated_F8IntersectionDrivePathProxyGetLaneCurve;
typedef void*(*TF8IntersectionDrivePathProxyDestroy)(void*);
extern TF8IntersectionDrivePathProxyDestroy Generated_F8IntersectionDrivePathProxyDestroy;
typedef void*(*TF8TrafficSignalControllerProxyDestroy)(void*);
extern TF8TrafficSignalControllerProxyDestroy Generated_F8TrafficSignalControllerProxyDestroy;
typedef const wchar_t*(*TF8IntersectionProxyGetName)(void*);
extern TF8IntersectionProxyGetName Generated_F8IntersectionProxyGetName;
typedef int(*TF8IntersectionProxyGetDrivePathsCount)(void*);
extern TF8IntersectionProxyGetDrivePathsCount Generated_F8IntersectionProxyGetDrivePathsCount;
typedef void*(*TF8IntersectionProxyGetDrivePath)(void*,int);
extern TF8IntersectionProxyGetDrivePath Generated_F8IntersectionProxyGetDrivePath;
typedef int(*TF8IntersectionProxyGetEntryPointsCount)(void*);
extern TF8IntersectionProxyGetEntryPointsCount Generated_F8IntersectionProxyGetEntryPointsCount;
typedef void*(*TF8IntersectionProxyGetEntryPoint)(void*,int);
extern TF8IntersectionProxyGetEntryPoint Generated_F8IntersectionProxyGetEntryPoint;
typedef int(*TF8IntersectionProxyGetExitPointsCount)(void*);
extern TF8IntersectionProxyGetExitPointsCount Generated_F8IntersectionProxyGetExitPointsCount;
typedef void*(*TF8IntersectionProxyGetExitPoint)(void*,int);
extern TF8IntersectionProxyGetExitPoint Generated_F8IntersectionProxyGetExitPoint;
typedef void*(*TF8IntersectionProxyGetTrafficSignalController)(void*);
extern TF8IntersectionProxyGetTrafficSignalController Generated_F8IntersectionProxyGetTrafficSignalController;
typedef F8TrafficControlTypeEnum(*TF8IntersectionProxyGetTrafficControlType)(void*);
extern TF8IntersectionProxyGetTrafficControlType Generated_F8IntersectionProxyGetTrafficControlType;
typedef void*(*TF8IntersectionProxyDestroy)(void*);
extern TF8IntersectionProxyDestroy Generated_F8IntersectionProxyDestroy;
typedef const wchar_t*(*TF8FlightPathProxyGetName)(void*);
extern TF8FlightPathProxyGetName Generated_F8FlightPathProxyGetName;
typedef double(*TF8FlightPathProxyGetLength)(void*,F8FlightPathDistanceEnum);
extern TF8FlightPathProxyGetLength Generated_F8FlightPathProxyGetLength;
typedef F8dVec3(*TF8FlightPathProxyGetPosition)(void*,double,F8FlightPathDistanceEnum);
extern TF8FlightPathProxyGetPosition Generated_F8FlightPathProxyGetPosition;
typedef F8dVec3(*TF8FlightPathProxyGetDirection)(void*,double,F8FlightPathDistanceEnum);
extern TF8FlightPathProxyGetDirection Generated_F8FlightPathProxyGetDirection;
typedef void*(*TF8FlightPathProxyDestroy)(void*);
extern TF8FlightPathProxyDestroy Generated_F8FlightPathProxyDestroy;
typedef void*(*TF8RoadSideObjectInstanceProxyGetRoad)(void*);
extern TF8RoadSideObjectInstanceProxyGetRoad Generated_F8RoadSideObjectInstanceProxyGetRoad;
typedef double(*TF8RoadSideObjectInstanceProxyGetRoadDistance)(void*);
extern TF8RoadSideObjectInstanceProxyGetRoadDistance Generated_F8RoadSideObjectInstanceProxyGetRoadDistance;
typedef F8RoadObjectPlacementEnum(*TF8RoadSideObjectInstanceProxyGetSideOfRoad)(void*);
extern TF8RoadSideObjectInstanceProxyGetSideOfRoad Generated_F8RoadSideObjectInstanceProxyGetSideOfRoad;
typedef double(*TF8RoadSideObjectInstanceProxyGetOffset)(void*);
extern TF8RoadSideObjectInstanceProxyGetOffset Generated_F8RoadSideObjectInstanceProxyGetOffset;
typedef double(*TF8RoadSideObjectInstanceProxyGetDeltaH)(void*);
extern TF8RoadSideObjectInstanceProxyGetDeltaH Generated_F8RoadSideObjectInstanceProxyGetDeltaH;
typedef void*(*TF8RoadSideObjectInstanceProxyDestroy)(void*);
extern TF8RoadSideObjectInstanceProxyDestroy Generated_F8RoadSideObjectInstanceProxyDestroy;
typedef void*(*TF8RoadThreeDModelInstanceProxyGetThreeDModel)(void*);
extern TF8RoadThreeDModelInstanceProxyGetThreeDModel Generated_F8RoadThreeDModelInstanceProxyGetThreeDModel;
typedef void*(*TF8RoadThreeDModelInstanceProxyDestroy)(void*);
extern TF8RoadThreeDModelInstanceProxyDestroy Generated_F8RoadThreeDModelInstanceProxyDestroy;
typedef const wchar_t*(*TF8ContextProxyGetName)(void*);
extern TF8ContextProxyGetName Generated_F8ContextProxyGetName;
typedef void*(*TF8ContextProxyDestroy)(void*);
extern TF8ContextProxyDestroy Generated_F8ContextProxyDestroy;
typedef const wchar_t*(*TF8ScriptProxyGetName)(void*);
extern TF8ScriptProxyGetName Generated_F8ScriptProxyGetName;
typedef void*(*TF8ScriptProxyDestroy)(void*);
extern TF8ScriptProxyDestroy Generated_F8ScriptProxyDestroy;
typedef const wchar_t*(*TF8ScriptAnimationProxyGetName)(void*);
extern TF8ScriptAnimationProxyGetName Generated_F8ScriptAnimationProxyGetName;
typedef void*(*TF8ScriptAnimationProxyDestroy)(void*);
extern TF8ScriptAnimationProxyDestroy Generated_F8ScriptAnimationProxyDestroy;
typedef const wchar_t*(*TF8EventProxyGetName)(void*);
extern TF8EventProxyGetName Generated_F8EventProxyGetName;
typedef void*(*TF8EventProxyDestroy)(void*);
extern TF8EventProxyDestroy Generated_F8EventProxyDestroy;
typedef const wchar_t*(*TF8ScenarioProxyGetName)(void*);
extern TF8ScenarioProxyGetName Generated_F8ScenarioProxyGetName;
typedef int(*TF8ScenarioProxyGetEventsCount)(void*);
extern TF8ScenarioProxyGetEventsCount Generated_F8ScenarioProxyGetEventsCount;
typedef void*(*TF8ScenarioProxyGetEvent)(void*,int);
extern TF8ScenarioProxyGetEvent Generated_F8ScenarioProxyGetEvent;
typedef void*(*TF8ScenarioProxyDestroy)(void*);
extern TF8ScenarioProxyDestroy Generated_F8ScenarioProxyDestroy;
typedef void*(*TF8CoordinateConverterProxyGetHorizontalCoordinateConvertor)(void*);
extern TF8CoordinateConverterProxyGetHorizontalCoordinateConvertor Generated_F8CoordinateConverterProxyGetHorizontalCoordinateConvertor;
typedef void*(*TF8CoordinateConverterProxyDestroy)(void*);
extern TF8CoordinateConverterProxyDestroy Generated_F8CoordinateConverterProxyDestroy;
typedef bool(*TF8HorizontalCoordinateConverterProxyConvert)(void*,F8HcsConvertCoordinateEnum,F8HcsConvertCoordinateEnum,F8dVec2,F8dVec2&,F8HcsConvertResultType&);
extern TF8HorizontalCoordinateConverterProxyConvert Generated_F8HorizontalCoordinateConverterProxyConvert;
typedef bool(*TF8HorizontalCoordinateConverterProxyConvertArray)(void*,F8HcsConvertCoordinateEnum,F8HcsConvertCoordinateEnum,F8dVec2ArrayType,F8dVec2ArrayType,F8HcsConvertResultType&);
extern TF8HorizontalCoordinateConverterProxyConvertArray Generated_F8HorizontalCoordinateConverterProxyConvertArray;
typedef void*(*TF8HorizontalCoordinateConverterProxyDestroy)(void*);
extern TF8HorizontalCoordinateConverterProxyDestroy Generated_F8HorizontalCoordinateConverterProxyDestroy;
typedef int(*TF8ProjectProxyGetSectionsCount)(void*);
extern TF8ProjectProxyGetSectionsCount Generated_F8ProjectProxyGetSectionsCount;
typedef void*(*TF8ProjectProxyGetSection)(void*,int);
extern TF8ProjectProxyGetSection Generated_F8ProjectProxyGetSection;
typedef int(*TF8ProjectProxyGetRoadsCount)(void*);
extern TF8ProjectProxyGetRoadsCount Generated_F8ProjectProxyGetRoadsCount;
typedef void*(*TF8ProjectProxyGetRoad)(void*,int);
extern TF8ProjectProxyGetRoad Generated_F8ProjectProxyGetRoad;
typedef int(*TF8ProjectProxyGetOffroadPointsCount)(void*);
extern TF8ProjectProxyGetOffroadPointsCount Generated_F8ProjectProxyGetOffroadPointsCount;
typedef void*(*TF8ProjectProxyGetOffroadPoint)(void*,int);
extern TF8ProjectProxyGetOffroadPoint Generated_F8ProjectProxyGetOffroadPoint;
typedef int(*TF8ProjectProxyGetIntersectionsCount)(void*);
extern TF8ProjectProxyGetIntersectionsCount Generated_F8ProjectProxyGetIntersectionsCount;
typedef void*(*TF8ProjectProxyGetIntersection)(void*,int);
extern TF8ProjectProxyGetIntersection Generated_F8ProjectProxyGetIntersection;
typedef int(*TF8ProjectProxyGet3DModelsCount)(void*);
extern TF8ProjectProxyGet3DModelsCount Generated_F8ProjectProxyGet3DModelsCount;
typedef void*(*TF8ProjectProxyGet3DModel)(void*,int);
extern TF8ProjectProxyGet3DModel Generated_F8ProjectProxyGet3DModel;
typedef int(*TF8ProjectProxyGet3DModelInstancesCount)(void*);
extern TF8ProjectProxyGet3DModelInstancesCount Generated_F8ProjectProxyGet3DModelInstancesCount;
typedef void*(*TF8ProjectProxyGet3DModelInstance)(void*,int);
extern TF8ProjectProxyGet3DModelInstance Generated_F8ProjectProxyGet3DModelInstance;
typedef int(*TF8ProjectProxyGetRoadModelInstancesCount)(void*);
extern TF8ProjectProxyGetRoadModelInstancesCount Generated_F8ProjectProxyGetRoadModelInstancesCount;
typedef void*(*TF8ProjectProxyGetRoadModelInstance)(void*,int);
extern TF8ProjectProxyGetRoadModelInstance Generated_F8ProjectProxyGetRoadModelInstance;
typedef int(*TF8ProjectProxyGetMD3ModelsCount)(void*);
extern TF8ProjectProxyGetMD3ModelsCount Generated_F8ProjectProxyGetMD3ModelsCount;
typedef void*(*TF8ProjectProxyGetMD3Model)(void*,int);
extern TF8ProjectProxyGetMD3Model Generated_F8ProjectProxyGetMD3Model;
typedef int(*TF8ProjectProxyGetFlightPathsCount)(void*);
extern TF8ProjectProxyGetFlightPathsCount Generated_F8ProjectProxyGetFlightPathsCount;
typedef void*(*TF8ProjectProxyGetFlightPath)(void*,int);
extern TF8ProjectProxyGetFlightPath Generated_F8ProjectProxyGetFlightPath;
typedef int(*TF8ProjectProxyGetScriptsCount)(void*);
extern TF8ProjectProxyGetScriptsCount Generated_F8ProjectProxyGetScriptsCount;
typedef void*(*TF8ProjectProxyGetScript)(void*,int);
extern TF8ProjectProxyGetScript Generated_F8ProjectProxyGetScript;
typedef int(*TF8ProjectProxyGetScriptAnimationsCount)(void*);
extern TF8ProjectProxyGetScriptAnimationsCount Generated_F8ProjectProxyGetScriptAnimationsCount;
typedef void*(*TF8ProjectProxyGetScriptAnimation)(void*,int);
extern TF8ProjectProxyGetScriptAnimation Generated_F8ProjectProxyGetScriptAnimation;
typedef int(*TF8ProjectProxyGetScenariosCount)(void*);
extern TF8ProjectProxyGetScenariosCount Generated_F8ProjectProxyGetScenariosCount;
typedef void*(*TF8ProjectProxyGetScenario)(void*,int);
extern TF8ProjectProxyGetScenario Generated_F8ProjectProxyGetScenario;
typedef int(*TF8ProjectProxyGetContextsCount)(void*);
extern TF8ProjectProxyGetContextsCount Generated_F8ProjectProxyGetContextsCount;
typedef void*(*TF8ProjectProxyGetContext)(void*,int);
extern TF8ProjectProxyGetContext Generated_F8ProjectProxyGetContext;
typedef bool(*TF8ProjectProxyGetActualHeightAt)(void*,double,double,F8HeightSearchConditionsType,double&);
extern TF8ProjectProxyGetActualHeightAt Generated_F8ProjectProxyGetActualHeightAt;
typedef void*(*TF8ProjectProxyDestroy)(void*);
extern TF8ProjectProxyDestroy Generated_F8ProjectProxyDestroy;
typedef F8TransientTypeEnum(*TF8TransientInstanceProxyGetTransientType)(void*);
extern TF8TransientInstanceProxyGetTransientType Generated_F8TransientInstanceProxyGetTransientType;
typedef double(*TF8TransientInstanceProxyGetBodyPitchAngle)(void*);
extern TF8TransientInstanceProxyGetBodyPitchAngle Generated_F8TransientInstanceProxyGetBodyPitchAngle;
typedef void*(*TF8TransientInstanceProxySetBodyPitchAngle)(void*,double);
extern TF8TransientInstanceProxySetBodyPitchAngle Generated_F8TransientInstanceProxySetBodyPitchAngle;
typedef double(*TF8TransientInstanceProxyGetBodyRollAngle)(void*);
extern TF8TransientInstanceProxyGetBodyRollAngle Generated_F8TransientInstanceProxyGetBodyRollAngle;
typedef void*(*TF8TransientInstanceProxySetBodyRollAngle)(void*,double);
extern TF8TransientInstanceProxySetBodyRollAngle Generated_F8TransientInstanceProxySetBodyRollAngle;
typedef F8CarLightsStateType(*TF8TransientInstanceProxyGetCarLights)(void*);
extern TF8TransientInstanceProxyGetCarLights Generated_F8TransientInstanceProxyGetCarLights;
typedef void*(*TF8TransientInstanceProxySetCarLights)(void*,F8CarLightsStateType);
extern TF8TransientInstanceProxySetCarLights Generated_F8TransientInstanceProxySetCarLights;
typedef void*(*TF8TransientInstanceProxyRegisterCallbackOnBeforeCalculateMovement)(void*,void*);
extern TF8TransientInstanceProxyRegisterCallbackOnBeforeCalculateMovement Generated_F8TransientInstanceProxyRegisterCallbackOnBeforeCalculateMovement;
typedef void*(*TF8TransientInstanceProxyUnregisterCallbackOnBeforeCalculateMovement)(void*,void*);
extern TF8TransientInstanceProxyUnregisterCallbackOnBeforeCalculateMovement Generated_F8TransientInstanceProxyUnregisterCallbackOnBeforeCalculateMovement;
typedef void*(*TF8TransientInstanceProxyRegisterCallbackOnAfterCalculateMovement)(void*,void*);
extern TF8TransientInstanceProxyRegisterCallbackOnAfterCalculateMovement Generated_F8TransientInstanceProxyRegisterCallbackOnAfterCalculateMovement;
typedef void*(*TF8TransientInstanceProxyUnregisterCallbackOnAfterCalculateMovement)(void*,void*);
extern TF8TransientInstanceProxyUnregisterCallbackOnAfterCalculateMovement Generated_F8TransientInstanceProxyUnregisterCallbackOnAfterCalculateMovement;
typedef void*(*TF8TransientInstanceProxyRegisterCallbackOnBeforeDoMovement)(void*,void*);
extern TF8TransientInstanceProxyRegisterCallbackOnBeforeDoMovement Generated_F8TransientInstanceProxyRegisterCallbackOnBeforeDoMovement;
typedef void*(*TF8TransientInstanceProxyUnregisterCallbackOnBeforeDoMovement)(void*,void*);
extern TF8TransientInstanceProxyUnregisterCallbackOnBeforeDoMovement Generated_F8TransientInstanceProxyUnregisterCallbackOnBeforeDoMovement;
typedef void*(*TF8TransientInstanceProxyRegisterCallbackOnAfterDoMovement)(void*,void*);
extern TF8TransientInstanceProxyRegisterCallbackOnAfterDoMovement Generated_F8TransientInstanceProxyRegisterCallbackOnAfterDoMovement;
typedef void*(*TF8TransientInstanceProxyUnregisterCallbackOnAfterDoMovement)(void*,void*);
extern TF8TransientInstanceProxyUnregisterCallbackOnAfterDoMovement Generated_F8TransientInstanceProxyUnregisterCallbackOnAfterDoMovement;
typedef bool(*TF8TransientInstanceProxyIsSetCallbackOnCalculateMovement)(void*);
extern TF8TransientInstanceProxyIsSetCallbackOnCalculateMovement Generated_F8TransientInstanceProxyIsSetCallbackOnCalculateMovement;
typedef void*(*TF8TransientInstanceProxySetCallbackOnCalculateMovement)(void*,void*);
extern TF8TransientInstanceProxySetCallbackOnCalculateMovement Generated_F8TransientInstanceProxySetCallbackOnCalculateMovement;
typedef void*(*TF8TransientInstanceProxyUnsetCallbackOnCalculateMovement)(void*,void*);
extern TF8TransientInstanceProxyUnsetCallbackOnCalculateMovement Generated_F8TransientInstanceProxyUnsetCallbackOnCalculateMovement;
typedef bool(*TF8TransientInstanceProxyIsSetCallbackOnDoMovement)(void*);
extern TF8TransientInstanceProxyIsSetCallbackOnDoMovement Generated_F8TransientInstanceProxyIsSetCallbackOnDoMovement;
typedef void*(*TF8TransientInstanceProxySetCallbackOnDoMovement)(void*,void*);
extern TF8TransientInstanceProxySetCallbackOnDoMovement Generated_F8TransientInstanceProxySetCallbackOnDoMovement;
typedef void*(*TF8TransientInstanceProxyUnsetCallbackOnDoMovement)(void*,void*);
extern TF8TransientInstanceProxyUnsetCallbackOnDoMovement Generated_F8TransientInstanceProxyUnsetCallbackOnDoMovement;
typedef void*(*TF8TransientInstanceProxyDestroy)(void*);
extern TF8TransientInstanceProxyDestroy Generated_F8TransientInstanceProxyDestroy;
typedef void*(*TF8TransientInstanceProxyListDestroy)(void*);
extern TF8TransientInstanceProxyListDestroy Generated_F8TransientInstanceProxyListDestroy;
typedef int(*TF8TransientInstanceProxyListGetCount)(void*);
extern TF8TransientInstanceProxyListGetCount Generated_F8TransientInstanceProxyListGetCount;
typedef void*(*TF8TransientInstanceProxyListGetItem)(void*,int);
extern TF8TransientInstanceProxyListGetItem Generated_F8TransientInstanceProxyListGetItem;
typedef void*(*TF8TransientMovingInstanceProxyDestroy)(void*);
extern TF8TransientMovingInstanceProxyDestroy Generated_F8TransientMovingInstanceProxyDestroy;
typedef void*(*TF8TransientCharacterInstanceProxyDestroy)(void*);
extern TF8TransientCharacterInstanceProxyDestroy Generated_F8TransientCharacterInstanceProxyDestroy;
typedef bool(*TF8TransientCarInstanceProxyGetAutomaticControl)(void*);
extern TF8TransientCarInstanceProxyGetAutomaticControl Generated_F8TransientCarInstanceProxyGetAutomaticControl;
typedef double(*TF8TransientCarInstanceProxyGetDistanceTravelled)(void*);
extern TF8TransientCarInstanceProxyGetDistanceTravelled Generated_F8TransientCarInstanceProxyGetDistanceTravelled;
typedef double(*TF8TransientCarInstanceProxyGetDistanceAlongDrivePath)(void*);
extern TF8TransientCarInstanceProxyGetDistanceAlongDrivePath Generated_F8TransientCarInstanceProxyGetDistanceAlongDrivePath;
typedef double(*TF8TransientCarInstanceProxyGetMass)(void*);
extern TF8TransientCarInstanceProxyGetMass Generated_F8TransientCarInstanceProxyGetMass;
typedef bool(*TF8TransientCarInstanceProxyGetEngineOn)(void*);
extern TF8TransientCarInstanceProxyGetEngineOn Generated_F8TransientCarInstanceProxyGetEngineOn;
typedef void*(*TF8TransientCarInstanceProxySetEngineOn)(void*,bool);
extern TF8TransientCarInstanceProxySetEngineOn Generated_F8TransientCarInstanceProxySetEngineOn;
typedef double(*TF8TransientCarInstanceProxyGetSteering)(void*);
extern TF8TransientCarInstanceProxyGetSteering Generated_F8TransientCarInstanceProxyGetSteering;
typedef void*(*TF8TransientCarInstanceProxySetSteering)(void*,double);
extern TF8TransientCarInstanceProxySetSteering Generated_F8TransientCarInstanceProxySetSteering;
typedef double(*TF8TransientCarInstanceProxyGetThrottle)(void*);
extern TF8TransientCarInstanceProxyGetThrottle Generated_F8TransientCarInstanceProxyGetThrottle;
typedef void*(*TF8TransientCarInstanceProxySetThrottle)(void*,double);
extern TF8TransientCarInstanceProxySetThrottle Generated_F8TransientCarInstanceProxySetThrottle;
typedef double(*TF8TransientCarInstanceProxyGetBrake)(void*);
extern TF8TransientCarInstanceProxyGetBrake Generated_F8TransientCarInstanceProxyGetBrake;
typedef void*(*TF8TransientCarInstanceProxySetBrake)(void*,double);
extern TF8TransientCarInstanceProxySetBrake Generated_F8TransientCarInstanceProxySetBrake;
typedef double(*TF8TransientCarInstanceProxyGetClutch)(void*);
extern TF8TransientCarInstanceProxyGetClutch Generated_F8TransientCarInstanceProxyGetClutch;
typedef void*(*TF8TransientCarInstanceProxySetClutch)(void*,double);
extern TF8TransientCarInstanceProxySetClutch Generated_F8TransientCarInstanceProxySetClutch;
typedef void*(*TF8TransientCarInstanceProxySetPositionInTraffic)(void*,F8dVec3);
extern TF8TransientCarInstanceProxySetPositionInTraffic Generated_F8TransientCarInstanceProxySetPositionInTraffic;
typedef F8dVec3(*TF8TransientCarInstanceProxyGetDirection)(void*);
extern TF8TransientCarInstanceProxyGetDirection Generated_F8TransientCarInstanceProxyGetDirection;
typedef void*(*TF8TransientCarInstanceProxySetDirection)(void*,F8dVec3);
extern TF8TransientCarInstanceProxySetDirection Generated_F8TransientCarInstanceProxySetDirection;
typedef F8dVec3(*TF8TransientCarInstanceProxyGetBodyDirection)(void*);
extern TF8TransientCarInstanceProxyGetBodyDirection Generated_F8TransientCarInstanceProxyGetBodyDirection;
typedef void*(*TF8TransientCarInstanceProxySetBodyDirection)(void*,F8dVec3);
extern TF8TransientCarInstanceProxySetBodyDirection Generated_F8TransientCarInstanceProxySetBodyDirection;
typedef double(*TF8TransientCarInstanceProxyGetRPM)(void*);
extern TF8TransientCarInstanceProxyGetRPM Generated_F8TransientCarInstanceProxyGetRPM;
typedef void*(*TF8TransientCarInstanceProxySetRPM)(void*,double);
extern TF8TransientCarInstanceProxySetRPM Generated_F8TransientCarInstanceProxySetRPM;
typedef F8dVec3(*TF8TransientCarInstanceProxyGetSpeedVector)(void*,F8SpeedUnitEnum);
extern TF8TransientCarInstanceProxyGetSpeedVector Generated_F8TransientCarInstanceProxyGetSpeedVector;
typedef double(*TF8TransientCarInstanceProxyGetSpeed)(void*,F8SpeedUnitEnum);
extern TF8TransientCarInstanceProxyGetSpeed Generated_F8TransientCarInstanceProxyGetSpeed;
typedef void*(*TF8TransientCarInstanceProxySetSpeed)(void*,double,F8SpeedUnitEnum);
extern TF8TransientCarInstanceProxySetSpeed Generated_F8TransientCarInstanceProxySetSpeed;
typedef double(*TF8TransientCarInstanceProxyGetAppliedSteering)(void*);
extern TF8TransientCarInstanceProxyGetAppliedSteering Generated_F8TransientCarInstanceProxyGetAppliedSteering;
typedef double(*TF8TransientCarInstanceProxyGetAppliedThrottle)(void*);
extern TF8TransientCarInstanceProxyGetAppliedThrottle Generated_F8TransientCarInstanceProxyGetAppliedThrottle;
typedef double(*TF8TransientCarInstanceProxyGetAppliedBrake)(void*);
extern TF8TransientCarInstanceProxyGetAppliedBrake Generated_F8TransientCarInstanceProxyGetAppliedBrake;
typedef double(*TF8TransientCarInstanceProxyGetAppliedClutch)(void*);
extern TF8TransientCarInstanceProxyGetAppliedClutch Generated_F8TransientCarInstanceProxyGetAppliedClutch;
typedef F8dVec3(*TF8TransientCarInstanceProxyGetAcceleration)(void*);
extern TF8TransientCarInstanceProxyGetAcceleration Generated_F8TransientCarInstanceProxyGetAcceleration;
typedef F8dVec3(*TF8TransientCarInstanceProxyGetRotAcceleration)(void*);
extern TF8TransientCarInstanceProxyGetRotAcceleration Generated_F8TransientCarInstanceProxyGetRotAcceleration;
typedef F8dVec3(*TF8TransientCarInstanceProxyGetRotSpeed)(void*);
extern TF8TransientCarInstanceProxyGetRotSpeed Generated_F8TransientCarInstanceProxyGetRotSpeed;
typedef F8dVec3(*TF8TransientCarInstanceProxyGetBodyRotAcceleration)(void*);
extern TF8TransientCarInstanceProxyGetBodyRotAcceleration Generated_F8TransientCarInstanceProxyGetBodyRotAcceleration;
typedef F8dVec3(*TF8TransientCarInstanceProxyGetBodyRotSpeed)(void*);
extern TF8TransientCarInstanceProxyGetBodyRotSpeed Generated_F8TransientCarInstanceProxyGetBodyRotSpeed;
typedef void*(*TF8TransientCarInstanceProxyGetCurrentRoad)(void*);
extern TF8TransientCarInstanceProxyGetCurrentRoad Generated_F8TransientCarInstanceProxyGetCurrentRoad;
typedef void*(*TF8TransientCarInstanceProxyGetLatestRoad)(void*);
extern TF8TransientCarInstanceProxyGetLatestRoad Generated_F8TransientCarInstanceProxyGetLatestRoad;
typedef void*(*TF8TransientCarInstanceProxyGetCurrentIntersection)(void*);
extern TF8TransientCarInstanceProxyGetCurrentIntersection Generated_F8TransientCarInstanceProxyGetCurrentIntersection;
typedef void*(*TF8TransientCarInstanceProxyGetCurrentLane)(void*);
extern TF8TransientCarInstanceProxyGetCurrentLane Generated_F8TransientCarInstanceProxyGetCurrentLane;
typedef double(*TF8TransientCarInstanceProxyGetDistanceAlongRoad)(void*);
extern TF8TransientCarInstanceProxyGetDistanceAlongRoad Generated_F8TransientCarInstanceProxyGetDistanceAlongRoad;
typedef double(*TF8TransientCarInstanceProxyGetDistanceAlongLatestRoad)(void*);
extern TF8TransientCarInstanceProxyGetDistanceAlongLatestRoad Generated_F8TransientCarInstanceProxyGetDistanceAlongLatestRoad;
typedef int(*TF8TransientCarInstanceProxyGetLaneNumber)(void*);
extern TF8TransientCarInstanceProxyGetLaneNumber Generated_F8TransientCarInstanceProxyGetLaneNumber;
typedef double(*TF8TransientCarInstanceProxyGetLaneWidth)(void*);
extern TF8TransientCarInstanceProxyGetLaneWidth Generated_F8TransientCarInstanceProxyGetLaneWidth;
typedef F8dVec3(*TF8TransientCarInstanceProxyGetLaneDirection)(void*);
extern TF8TransientCarInstanceProxyGetLaneDirection Generated_F8TransientCarInstanceProxyGetLaneDirection;
typedef double(*TF8TransientCarInstanceProxyGetLaneCurvature)(void*);
extern TF8TransientCarInstanceProxyGetLaneCurvature Generated_F8TransientCarInstanceProxyGetLaneCurvature;
typedef void*(*TF8TransientCarInstanceProxyDestroy)(void*);
extern TF8TransientCarInstanceProxyDestroy Generated_F8TransientCarInstanceProxyDestroy;
typedef void*(*TF8MainDriverProxyGetCurrentCar)(void*);
extern TF8MainDriverProxyGetCurrentCar Generated_F8MainDriverProxyGetCurrentCar;
typedef void*(*TF8MainDriverProxyDestroy)(void*);
extern TF8MainDriverProxyDestroy Generated_F8MainDriverProxyDestroy;
typedef void*(*TF8DriverDataTypeGetRoad)(void*);
extern TF8DriverDataTypeGetRoad Generated_F8DriverDataTypeGetRoad;
typedef void*(*TF8DriverDataTypeSetRoad)(void*,void*);
extern TF8DriverDataTypeSetRoad Generated_F8DriverDataTypeSetRoad;
typedef int(*TF8DriverDataTypeGetLane)(void*);
extern TF8DriverDataTypeGetLane Generated_F8DriverDataTypeGetLane;
typedef void*(*TF8DriverDataTypeSetLane)(void*,int);
extern TF8DriverDataTypeSetLane Generated_F8DriverDataTypeSetLane;
typedef int(*TF8DriverDataTypeGetInitialSpeed)(void*);
extern TF8DriverDataTypeGetInitialSpeed Generated_F8DriverDataTypeGetInitialSpeed;
typedef void*(*TF8DriverDataTypeSetInitialSpeed)(void*,int);
extern TF8DriverDataTypeSetInitialSpeed Generated_F8DriverDataTypeSetInitialSpeed;
typedef double(*TF8DriverDataTypeGetPosition)(void*);
extern TF8DriverDataTypeGetPosition Generated_F8DriverDataTypeGetPosition;
typedef void*(*TF8DriverDataTypeSetPosition)(void*,double);
extern TF8DriverDataTypeSetPosition Generated_F8DriverDataTypeSetPosition;
typedef bool(*TF8DriverDataTypeGetGoForwards)(void*);
extern TF8DriverDataTypeGetGoForwards Generated_F8DriverDataTypeGetGoForwards;
typedef void*(*TF8DriverDataTypeSetGoForwards)(void*,bool);
extern TF8DriverDataTypeSetGoForwards Generated_F8DriverDataTypeSetGoForwards;
typedef void*(*TF8DriverDataTypeGetVehicle)(void*);
extern TF8DriverDataTypeGetVehicle Generated_F8DriverDataTypeGetVehicle;
typedef void*(*TF8DriverDataTypeSetVehicle)(void*,void*);
extern TF8DriverDataTypeSetVehicle Generated_F8DriverDataTypeSetVehicle;
typedef void*(*TF8DriverDataTypeGetTrailer)(void*);
extern TF8DriverDataTypeGetTrailer Generated_F8DriverDataTypeGetTrailer;
typedef void*(*TF8DriverDataTypeSetTrailer)(void*,void*);
extern TF8DriverDataTypeSetTrailer Generated_F8DriverDataTypeSetTrailer;
typedef void*(*TF8DriverDataTypeDestroy)(void*);
extern TF8DriverDataTypeDestroy Generated_F8DriverDataTypeDestroy;
typedef void*(*TF8TrafficSimulationProxyGetDriver)(void*);
extern TF8TrafficSimulationProxyGetDriver Generated_F8TrafficSimulationProxyGetDriver;
typedef F8TrafficStateEnum(*TF8TrafficSimulationProxyGetTrafficState)(void*);
extern TF8TrafficSimulationProxyGetTrafficState Generated_F8TrafficSimulationProxyGetTrafficState;
typedef void*(*TF8TrafficSimulationProxySetTrafficState)(void*,F8TrafficStateEnum);
extern TF8TrafficSimulationProxySetTrafficState Generated_F8TrafficSimulationProxySetTrafficState;
typedef void*(*TF8TrafficSimulationProxyGetTransientVehiclesArround)(void*,double,F8dVec3);
extern TF8TrafficSimulationProxyGetTransientVehiclesArround Generated_F8TrafficSimulationProxyGetTransientVehiclesArround;
typedef void*(*TF8TrafficSimulationProxyGetTransientObjectsArround)(void*,double,F8dVec3);
extern TF8TrafficSimulationProxyGetTransientObjectsArround Generated_F8TrafficSimulationProxyGetTransientObjectsArround;
typedef void*(*TF8TrafficSimulationProxyDeleteTransientObject)(void*,void*);
extern TF8TrafficSimulationProxyDeleteTransientObject Generated_F8TrafficSimulationProxyDeleteTransientObject;
typedef void*(*TF8TrafficSimulationProxyDeleteAllTransientObjects)(void*);
extern TF8TrafficSimulationProxyDeleteAllTransientObjects Generated_F8TrafficSimulationProxyDeleteAllTransientObjects;
typedef void*(*TF8TrafficSimulationProxyAddNewTransient)(void*,void*);
extern TF8TrafficSimulationProxyAddNewTransient Generated_F8TrafficSimulationProxyAddNewTransient;
typedef void*(*TF8TrafficSimulationProxyAddNewVehicle)(void*,void*,void*,F8VehiclePlacementType);
extern TF8TrafficSimulationProxyAddNewVehicle Generated_F8TrafficSimulationProxyAddNewVehicle;
typedef void*(*TF8TrafficSimulationProxyRegisterEventSimulationStatusChanged)(void*,void*);
extern TF8TrafficSimulationProxyRegisterEventSimulationStatusChanged Generated_F8TrafficSimulationProxyRegisterEventSimulationStatusChanged;
typedef void*(*TF8TrafficSimulationProxyRegisterEventBeforeInitializeDriving)(void*,void*);
extern TF8TrafficSimulationProxyRegisterEventBeforeInitializeDriving Generated_F8TrafficSimulationProxyRegisterEventBeforeInitializeDriving;
typedef void*(*TF8TrafficSimulationProxyRegisterEventStartDrivingCar)(void*,void*);
extern TF8TrafficSimulationProxyRegisterEventStartDrivingCar Generated_F8TrafficSimulationProxyRegisterEventStartDrivingCar;
typedef void*(*TF8TrafficSimulationProxyRegisterEventStopDrivingCar)(void*,void*);
extern TF8TrafficSimulationProxyRegisterEventStopDrivingCar Generated_F8TrafficSimulationProxyRegisterEventStopDrivingCar;
typedef void*(*TF8TrafficSimulationProxyUnregisterEventSimulationStatusChanged)(void*,void*);
extern TF8TrafficSimulationProxyUnregisterEventSimulationStatusChanged Generated_F8TrafficSimulationProxyUnregisterEventSimulationStatusChanged;
typedef void*(*TF8TrafficSimulationProxyUnregisterEventBeforeInitializeDriving)(void*,void*);
extern TF8TrafficSimulationProxyUnregisterEventBeforeInitializeDriving Generated_F8TrafficSimulationProxyUnregisterEventBeforeInitializeDriving;
typedef void*(*TF8TrafficSimulationProxyUnregisterEventStartDrivingCar)(void*,void*);
extern TF8TrafficSimulationProxyUnregisterEventStartDrivingCar Generated_F8TrafficSimulationProxyUnregisterEventStartDrivingCar;
typedef void*(*TF8TrafficSimulationProxyUnregisterEventStopDrivingCar)(void*,void*);
extern TF8TrafficSimulationProxyUnregisterEventStopDrivingCar Generated_F8TrafficSimulationProxyUnregisterEventStopDrivingCar;
typedef void*(*TF8TrafficSimulationProxyRegisterEventTransientWorldBeforeMove)(void*,void*);
extern TF8TrafficSimulationProxyRegisterEventTransientWorldBeforeMove Generated_F8TrafficSimulationProxyRegisterEventTransientWorldBeforeMove;
typedef void*(*TF8TrafficSimulationProxyRegisterEventTransientWorldAfterMove)(void*,void*);
extern TF8TrafficSimulationProxyRegisterEventTransientWorldAfterMove Generated_F8TrafficSimulationProxyRegisterEventTransientWorldAfterMove;
typedef void*(*TF8TrafficSimulationProxyRegisterEventTransientWorldMove)(void*,void*);
extern TF8TrafficSimulationProxyRegisterEventTransientWorldMove Generated_F8TrafficSimulationProxyRegisterEventTransientWorldMove;
typedef void*(*TF8TrafficSimulationProxyRegisterEventNewTransientObject)(void*,void*);
extern TF8TrafficSimulationProxyRegisterEventNewTransientObject Generated_F8TrafficSimulationProxyRegisterEventNewTransientObject;
typedef void*(*TF8TrafficSimulationProxyRegisterEventTransientObjectDeleted)(void*,void*);
extern TF8TrafficSimulationProxyRegisterEventTransientObjectDeleted Generated_F8TrafficSimulationProxyRegisterEventTransientObjectDeleted;
typedef void*(*TF8TrafficSimulationProxyRegisterEventCacheSimulationData)(void*,void*);
extern TF8TrafficSimulationProxyRegisterEventCacheSimulationData Generated_F8TrafficSimulationProxyRegisterEventCacheSimulationData;
typedef void*(*TF8TrafficSimulationProxyUnregisterEventTransientWorldBeforeMove)(void*,void*);
extern TF8TrafficSimulationProxyUnregisterEventTransientWorldBeforeMove Generated_F8TrafficSimulationProxyUnregisterEventTransientWorldBeforeMove;
typedef void*(*TF8TrafficSimulationProxyUnregisterEventTransientWorldAfterMove)(void*,void*);
extern TF8TrafficSimulationProxyUnregisterEventTransientWorldAfterMove Generated_F8TrafficSimulationProxyUnregisterEventTransientWorldAfterMove;
typedef void*(*TF8TrafficSimulationProxyUnregisterEventTransientWorldMove)(void*,void*);
extern TF8TrafficSimulationProxyUnregisterEventTransientWorldMove Generated_F8TrafficSimulationProxyUnregisterEventTransientWorldMove;
typedef void*(*TF8TrafficSimulationProxyUnregisterEventNewTransientObject)(void*,void*);
extern TF8TrafficSimulationProxyUnregisterEventNewTransientObject Generated_F8TrafficSimulationProxyUnregisterEventNewTransientObject;
typedef void*(*TF8TrafficSimulationProxyUnregisterEventTransientObjectDeleted)(void*,void*);
extern TF8TrafficSimulationProxyUnregisterEventTransientObjectDeleted Generated_F8TrafficSimulationProxyUnregisterEventTransientObjectDeleted;
typedef void*(*TF8TrafficSimulationProxyUnregisterEventCacheSimulationData)(void*,void*);
extern TF8TrafficSimulationProxyUnregisterEventCacheSimulationData Generated_F8TrafficSimulationProxyUnregisterEventCacheSimulationData;
typedef void*(*TF8TrafficSimulationProxyDestroy)(void*);
extern TF8TrafficSimulationProxyDestroy Generated_F8TrafficSimulationProxyDestroy;
typedef bool(*TF8VisualOptionsRootProxyGetDisplayOption)(void*,F8VisualOptionDisplayTypeEnum);
extern TF8VisualOptionsRootProxyGetDisplayOption Generated_F8VisualOptionsRootProxyGetDisplayOption;
typedef void*(*TF8VisualOptionsRootProxySetDisplayOption)(void*,F8VisualOptionDisplayTypeEnum,bool);
extern TF8VisualOptionsRootProxySetDisplayOption Generated_F8VisualOptionsRootProxySetDisplayOption;
typedef void*(*TF8VisualOptionsRootProxyDestroy)(void*);
extern TF8VisualOptionsRootProxyDestroy Generated_F8VisualOptionsRootProxyDestroy;
typedef void*(*TF8CurrentScriptInfoTypeDestroy)(void*);
extern TF8CurrentScriptInfoTypeDestroy Generated_F8CurrentScriptInfoTypeDestroy;
typedef bool(*TF8CurrentScriptInfoTypeGetIsExecuting)(void*);
extern TF8CurrentScriptInfoTypeGetIsExecuting Generated_F8CurrentScriptInfoTypeGetIsExecuting;
typedef bool(*TF8CurrentScriptInfoTypeGetIsAnimation)(void*);
extern TF8CurrentScriptInfoTypeGetIsAnimation Generated_F8CurrentScriptInfoTypeGetIsAnimation;
typedef void*(*TF8CurrentScriptInfoTypeGetScript)(void*);
extern TF8CurrentScriptInfoTypeGetScript Generated_F8CurrentScriptInfoTypeGetScript;
typedef void*(*TF8CurrentScriptInfoTypeGetScriptAnimation)(void*);
extern TF8CurrentScriptInfoTypeGetScriptAnimation Generated_F8CurrentScriptInfoTypeGetScriptAnimation;
typedef double(*TF8CurrentScriptInfoTypeGetTime)(void*);
extern TF8CurrentScriptInfoTypeGetTime Generated_F8CurrentScriptInfoTypeGetTime;
typedef void*(*TF8SimulationCoreProxyDestroy)(void*);
extern TF8SimulationCoreProxyDestroy Generated_F8SimulationCoreProxyDestroy;
typedef void*(*TF8SimulationCoreProxyGetTrafficSimulation)(void*);
extern TF8SimulationCoreProxyGetTrafficSimulation Generated_F8SimulationCoreProxyGetTrafficSimulation;
typedef F8EnvironmentStateEnum(*TF8SimulationCoreProxyGetEnvironmentState)(void*);
extern TF8SimulationCoreProxyGetEnvironmentState Generated_F8SimulationCoreProxyGetEnvironmentState;
typedef void*(*TF8SimulationCoreProxySetEnvironmentState)(void*,F8EnvironmentStateEnum);
extern TF8SimulationCoreProxySetEnvironmentState Generated_F8SimulationCoreProxySetEnvironmentState;
typedef void*(*TF8SimulationCoreProxyApplyContext)(void*,void*);
extern TF8SimulationCoreProxyApplyContext Generated_F8SimulationCoreProxyApplyContext;
typedef void*(*TF8SimulationCoreProxyGetVisualOptionsRoot)(void*);
extern TF8SimulationCoreProxyGetVisualOptionsRoot Generated_F8SimulationCoreProxyGetVisualOptionsRoot;
typedef void*(*TF8SimulationCoreProxyExecuteScript)(void*,void*,bool);
extern TF8SimulationCoreProxyExecuteScript Generated_F8SimulationCoreProxyExecuteScript;
typedef void*(*TF8SimulationCoreProxyExecuteScriptAnimation)(void*,void*,bool);
extern TF8SimulationCoreProxyExecuteScriptAnimation Generated_F8SimulationCoreProxyExecuteScriptAnimation;
typedef F8ScriptStatusEnum(*TF8SimulationCoreProxyGetScriptStatus)(void*);
extern TF8SimulationCoreProxyGetScriptStatus Generated_F8SimulationCoreProxyGetScriptStatus;
typedef void*(*TF8SimulationCoreProxySetScriptStatus)(void*,F8ScriptStatusEnum);
extern TF8SimulationCoreProxySetScriptStatus Generated_F8SimulationCoreProxySetScriptStatus;
typedef void*(*TF8SimulationCoreProxyGetCurrentScriptInfo)(void*);
extern TF8SimulationCoreProxyGetCurrentScriptInfo Generated_F8SimulationCoreProxyGetCurrentScriptInfo;
typedef void*(*TF8SimulationCoreProxyStartScenario)(void*,void*);
extern TF8SimulationCoreProxyStartScenario Generated_F8SimulationCoreProxyStartScenario;
typedef void*(*TF8SimulationCoreProxyStopAllScenarios)(void*);
extern TF8SimulationCoreProxyStopAllScenarios Generated_F8SimulationCoreProxyStopAllScenarios;
typedef void*(*TF8SimulationCoreProxyClearUserVariables)(void*);
extern TF8SimulationCoreProxyClearUserVariables Generated_F8SimulationCoreProxyClearUserVariables;
typedef F8UserVariables(*TF8SimulationCoreProxyGetUserVariables)(void*);
extern TF8SimulationCoreProxyGetUserVariables Generated_F8SimulationCoreProxyGetUserVariables;
typedef void*(*TF8SimulationCoreProxySetUserVariables)(void*,F8UserVariables);
extern TF8SimulationCoreProxySetUserVariables Generated_F8SimulationCoreProxySetUserVariables;
typedef double(*TF8SimulationCoreProxyGetUserVariable)(void*,int);
extern TF8SimulationCoreProxyGetUserVariable Generated_F8SimulationCoreProxyGetUserVariable;
typedef void*(*TF8SimulationCoreProxySetUserVariable)(void*,int,double);
extern TF8SimulationCoreProxySetUserVariable Generated_F8SimulationCoreProxySetUserVariable;
typedef void*(*TF8SimulationCoreProxyRegisterEventApplyContext)(void*,void*);
extern TF8SimulationCoreProxyRegisterEventApplyContext Generated_F8SimulationCoreProxyRegisterEventApplyContext;
typedef void*(*TF8SimulationCoreProxyRegisterEventStartEnvironment)(void*,void*);
extern TF8SimulationCoreProxyRegisterEventStartEnvironment Generated_F8SimulationCoreProxyRegisterEventStartEnvironment;
typedef void*(*TF8SimulationCoreProxyRegisterEventStopEnvironment)(void*,void*);
extern TF8SimulationCoreProxyRegisterEventStopEnvironment Generated_F8SimulationCoreProxyRegisterEventStopEnvironment;
typedef void*(*TF8SimulationCoreProxyRegisterEventStartScenario)(void*,void*);
extern TF8SimulationCoreProxyRegisterEventStartScenario Generated_F8SimulationCoreProxyRegisterEventStartScenario;
typedef void*(*TF8SimulationCoreProxyRegisterEventStopScenario)(void*,void*);
extern TF8SimulationCoreProxyRegisterEventStopScenario Generated_F8SimulationCoreProxyRegisterEventStopScenario;
typedef void*(*TF8SimulationCoreProxyRegisterEventStartEvent)(void*,void*);
extern TF8SimulationCoreProxyRegisterEventStartEvent Generated_F8SimulationCoreProxyRegisterEventStartEvent;
typedef void*(*TF8SimulationCoreProxyRegisterEventStopEvent)(void*,void*);
extern TF8SimulationCoreProxyRegisterEventStopEvent Generated_F8SimulationCoreProxyRegisterEventStopEvent;
typedef void*(*TF8SimulationCoreProxyRegisterEventStartScript)(void*,void*);
extern TF8SimulationCoreProxyRegisterEventStartScript Generated_F8SimulationCoreProxyRegisterEventStartScript;
typedef void*(*TF8SimulationCoreProxyRegisterEventStopScript)(void*,void*);
extern TF8SimulationCoreProxyRegisterEventStopScript Generated_F8SimulationCoreProxyRegisterEventStopScript;
typedef void*(*TF8SimulationCoreProxyUnregisterEventApplyContext)(void*,void*);
extern TF8SimulationCoreProxyUnregisterEventApplyContext Generated_F8SimulationCoreProxyUnregisterEventApplyContext;
typedef void*(*TF8SimulationCoreProxyUnregisterEventStartEnvironment)(void*,void*);
extern TF8SimulationCoreProxyUnregisterEventStartEnvironment Generated_F8SimulationCoreProxyUnregisterEventStartEnvironment;
typedef void*(*TF8SimulationCoreProxyUnregisterEventStopEnvironment)(void*,void*);
extern TF8SimulationCoreProxyUnregisterEventStopEnvironment Generated_F8SimulationCoreProxyUnregisterEventStopEnvironment;
typedef void*(*TF8SimulationCoreProxyUnregisterEventStartScenario)(void*,void*);
extern TF8SimulationCoreProxyUnregisterEventStartScenario Generated_F8SimulationCoreProxyUnregisterEventStartScenario;
typedef void*(*TF8SimulationCoreProxyUnregisterEventStopScenario)(void*,void*);
extern TF8SimulationCoreProxyUnregisterEventStopScenario Generated_F8SimulationCoreProxyUnregisterEventStopScenario;
typedef void*(*TF8SimulationCoreProxyUnregisterEventStartEvent)(void*,void*);
extern TF8SimulationCoreProxyUnregisterEventStartEvent Generated_F8SimulationCoreProxyUnregisterEventStartEvent;
typedef void*(*TF8SimulationCoreProxyUnregisterEventStopEvent)(void*,void*);
extern TF8SimulationCoreProxyUnregisterEventStopEvent Generated_F8SimulationCoreProxyUnregisterEventStopEvent;
typedef void*(*TF8SimulationCoreProxyUnregisterEventStartScript)(void*,void*);
extern TF8SimulationCoreProxyUnregisterEventStartScript Generated_F8SimulationCoreProxyUnregisterEventStartScript;
typedef void*(*TF8SimulationCoreProxyUnregisterEventStopScript)(void*,void*);
extern TF8SimulationCoreProxyUnregisterEventStopScript Generated_F8SimulationCoreProxyUnregisterEventStopScript;
typedef F8iVec2(*TF8OpenGLProxyGetSize)(void*);
extern TF8OpenGLProxyGetSize Generated_F8OpenGLProxyGetSize;
typedef F8OpenGLViewPortType(*TF8OpenGLProxyGetRenderingViewPort)(void*);
extern TF8OpenGLProxyGetRenderingViewPort Generated_F8OpenGLProxyGetRenderingViewPort;
typedef F8dMat4(*TF8OpenGLProxyGetProjectionMatrix)(void*);
extern TF8OpenGLProxyGetProjectionMatrix Generated_F8OpenGLProxyGetProjectionMatrix;
typedef F8dMat4(*TF8OpenGLProxyGetModelViewMatrix)(void*);
extern TF8OpenGLProxyGetModelViewMatrix Generated_F8OpenGLProxyGetModelViewMatrix;
typedef void*(*TF8OpenGLProxySetFocus)(void*);
extern TF8OpenGLProxySetFocus Generated_F8OpenGLProxySetFocus;
typedef void*(*TF8OpenGLProxyChanged)(void*);
extern TF8OpenGLProxyChanged Generated_F8OpenGLProxyChanged;
typedef void*(*TF8OpenGLProxyDestroy)(void*);
extern TF8OpenGLProxyDestroy Generated_F8OpenGLProxyDestroy;
typedef void*(*TF8MainOpenGLProxyRegisterEventOpenGLBeforePaint)(void*,void*);
extern TF8MainOpenGLProxyRegisterEventOpenGLBeforePaint Generated_F8MainOpenGLProxyRegisterEventOpenGLBeforePaint;
typedef void*(*TF8MainOpenGLProxyRegisterEventOpenGLAfterDrawScene)(void*,void*);
extern TF8MainOpenGLProxyRegisterEventOpenGLAfterDrawScene Generated_F8MainOpenGLProxyRegisterEventOpenGLAfterDrawScene;
typedef void*(*TF8MainOpenGLProxyRegisterEventOpenGLAfterPaint)(void*,void*);
extern TF8MainOpenGLProxyRegisterEventOpenGLAfterPaint Generated_F8MainOpenGLProxyRegisterEventOpenGLAfterPaint;
typedef void*(*TF8MainOpenGLProxyUnregisterEventOpenGLBeforePaint)(void*,void*);
extern TF8MainOpenGLProxyUnregisterEventOpenGLBeforePaint Generated_F8MainOpenGLProxyUnregisterEventOpenGLBeforePaint;
typedef void*(*TF8MainOpenGLProxyUnregisterEventOpenGLAfterDrawScene)(void*,void*);
extern TF8MainOpenGLProxyUnregisterEventOpenGLAfterDrawScene Generated_F8MainOpenGLProxyUnregisterEventOpenGLAfterDrawScene;
typedef void*(*TF8MainOpenGLProxyUnregisterEventOpenGLAfterPaint)(void*,void*);
extern TF8MainOpenGLProxyUnregisterEventOpenGLAfterPaint Generated_F8MainOpenGLProxyUnregisterEventOpenGLAfterPaint;
typedef void*(*TF8MainOpenGLProxyRegisterEventOpenGLMouseEnter)(void*,void*);
extern TF8MainOpenGLProxyRegisterEventOpenGLMouseEnter Generated_F8MainOpenGLProxyRegisterEventOpenGLMouseEnter;
typedef void*(*TF8MainOpenGLProxyRegisterEventOpenGLMouseLeave)(void*,void*);
extern TF8MainOpenGLProxyRegisterEventOpenGLMouseLeave Generated_F8MainOpenGLProxyRegisterEventOpenGLMouseLeave;
typedef void*(*TF8MainOpenGLProxyRegisterEventOpenGLMouseUp)(void*,void*);
extern TF8MainOpenGLProxyRegisterEventOpenGLMouseUp Generated_F8MainOpenGLProxyRegisterEventOpenGLMouseUp;
typedef void*(*TF8MainOpenGLProxyRegisterEventOpenGLMouseDown)(void*,void*);
extern TF8MainOpenGLProxyRegisterEventOpenGLMouseDown Generated_F8MainOpenGLProxyRegisterEventOpenGLMouseDown;
typedef void*(*TF8MainOpenGLProxyRegisterEventOpenGLMouseMove)(void*,void*);
extern TF8MainOpenGLProxyRegisterEventOpenGLMouseMove Generated_F8MainOpenGLProxyRegisterEventOpenGLMouseMove;
typedef void*(*TF8MainOpenGLProxyRegisterEventOpenGLMouseWheel)(void*,void*);
extern TF8MainOpenGLProxyRegisterEventOpenGLMouseWheel Generated_F8MainOpenGLProxyRegisterEventOpenGLMouseWheel;
typedef void*(*TF8MainOpenGLProxyUnregisterEventOpenGLMouseEnter)(void*,void*);
extern TF8MainOpenGLProxyUnregisterEventOpenGLMouseEnter Generated_F8MainOpenGLProxyUnregisterEventOpenGLMouseEnter;
typedef void*(*TF8MainOpenGLProxyUnregisterEventOpenGLMouseLeave)(void*,void*);
extern TF8MainOpenGLProxyUnregisterEventOpenGLMouseLeave Generated_F8MainOpenGLProxyUnregisterEventOpenGLMouseLeave;
typedef void*(*TF8MainOpenGLProxyUnregisterEventOpenGLMouseUp)(void*,void*);
extern TF8MainOpenGLProxyUnregisterEventOpenGLMouseUp Generated_F8MainOpenGLProxyUnregisterEventOpenGLMouseUp;
typedef void*(*TF8MainOpenGLProxyUnregisterEventOpenGLMouseDown)(void*,void*);
extern TF8MainOpenGLProxyUnregisterEventOpenGLMouseDown Generated_F8MainOpenGLProxyUnregisterEventOpenGLMouseDown;
typedef void*(*TF8MainOpenGLProxyUnregisterEventOpenGLMouseMove)(void*,void*);
extern TF8MainOpenGLProxyUnregisterEventOpenGLMouseMove Generated_F8MainOpenGLProxyUnregisterEventOpenGLMouseMove;
typedef void*(*TF8MainOpenGLProxyUnregisterEventOpenGLMouseWheel)(void*,void*);
extern TF8MainOpenGLProxyUnregisterEventOpenGLMouseWheel Generated_F8MainOpenGLProxyUnregisterEventOpenGLMouseWheel;
typedef void*(*TF8MainOpenGLProxyDestroy)(void*);
extern TF8MainOpenGLProxyDestroy Generated_F8MainOpenGLProxyDestroy;
typedef const wchar_t*(*TF8MainRibbonControlProxyGetName)(void*);
extern TF8MainRibbonControlProxyGetName Generated_F8MainRibbonControlProxyGetName;
typedef F8MainRibbonControlTypeEnum(*TF8MainRibbonControlProxyGetControlType)(void*);
extern TF8MainRibbonControlProxyGetControlType Generated_F8MainRibbonControlProxyGetControlType;
typedef bool(*TF8MainRibbonControlProxyGetEnabled)(void*);
extern TF8MainRibbonControlProxyGetEnabled Generated_F8MainRibbonControlProxyGetEnabled;
typedef void*(*TF8MainRibbonControlProxySetEnabled)(void*,bool);
extern TF8MainRibbonControlProxySetEnabled Generated_F8MainRibbonControlProxySetEnabled;
typedef bool(*TF8MainRibbonControlProxyGetVisible)(void*);
extern TF8MainRibbonControlProxyGetVisible Generated_F8MainRibbonControlProxyGetVisible;
typedef void*(*TF8MainRibbonControlProxySetVisible)(void*,bool);
extern TF8MainRibbonControlProxySetVisible Generated_F8MainRibbonControlProxySetVisible;
typedef int(*TF8MainRibbonControlProxyGetLeft)(void*);
extern TF8MainRibbonControlProxyGetLeft Generated_F8MainRibbonControlProxyGetLeft;
typedef void*(*TF8MainRibbonControlProxySetLeft)(void*,int);
extern TF8MainRibbonControlProxySetLeft Generated_F8MainRibbonControlProxySetLeft;
typedef int(*TF8MainRibbonControlProxyGetTop)(void*);
extern TF8MainRibbonControlProxyGetTop Generated_F8MainRibbonControlProxyGetTop;
typedef void*(*TF8MainRibbonControlProxySetTop)(void*,int);
extern TF8MainRibbonControlProxySetTop Generated_F8MainRibbonControlProxySetTop;
typedef int(*TF8MainRibbonControlProxyGetWidth)(void*);
extern TF8MainRibbonControlProxyGetWidth Generated_F8MainRibbonControlProxyGetWidth;
typedef void*(*TF8MainRibbonControlProxySetWidth)(void*,int);
extern TF8MainRibbonControlProxySetWidth Generated_F8MainRibbonControlProxySetWidth;
typedef int(*TF8MainRibbonControlProxyGetHeight)(void*);
extern TF8MainRibbonControlProxyGetHeight Generated_F8MainRibbonControlProxyGetHeight;
typedef void*(*TF8MainRibbonControlProxySetHeight)(void*,int);
extern TF8MainRibbonControlProxySetHeight Generated_F8MainRibbonControlProxySetHeight;
typedef void*(*TF8MainRibbonControlProxyDestroy)(void*);
extern TF8MainRibbonControlProxyDestroy Generated_F8MainRibbonControlProxyDestroy;
typedef const wchar_t*(*TF8MainRibbonButtonProxyGetCaption)(void*);
extern TF8MainRibbonButtonProxyGetCaption Generated_F8MainRibbonButtonProxyGetCaption;
typedef void*(*TF8MainRibbonButtonProxySetCaption)(void*,const wchar_t*);
extern TF8MainRibbonButtonProxySetCaption Generated_F8MainRibbonButtonProxySetCaption;
typedef bool(*TF8MainRibbonButtonProxyIsSetCallbackOnClick)(void*);
extern TF8MainRibbonButtonProxyIsSetCallbackOnClick Generated_F8MainRibbonButtonProxyIsSetCallbackOnClick;
typedef void*(*TF8MainRibbonButtonProxySetCallbackOnClick)(void*,void*);
extern TF8MainRibbonButtonProxySetCallbackOnClick Generated_F8MainRibbonButtonProxySetCallbackOnClick;
typedef void*(*TF8MainRibbonButtonProxyUnsetCallbackOnClick)(void*,void*);
extern TF8MainRibbonButtonProxyUnsetCallbackOnClick Generated_F8MainRibbonButtonProxyUnsetCallbackOnClick;
typedef void*(*TF8MainRibbonButtonProxyDestroy)(void*);
extern TF8MainRibbonButtonProxyDestroy Generated_F8MainRibbonButtonProxyDestroy;
typedef const wchar_t*(*TF8MainRibbonEditProxyGetText)(void*);
extern TF8MainRibbonEditProxyGetText Generated_F8MainRibbonEditProxyGetText;
typedef void*(*TF8MainRibbonEditProxySetText)(void*,const wchar_t*);
extern TF8MainRibbonEditProxySetText Generated_F8MainRibbonEditProxySetText;
typedef bool(*TF8MainRibbonEditProxyIsSetCallbackOnChange)(void*);
extern TF8MainRibbonEditProxyIsSetCallbackOnChange Generated_F8MainRibbonEditProxyIsSetCallbackOnChange;
typedef void*(*TF8MainRibbonEditProxySetCallbackOnChange)(void*,void*);
extern TF8MainRibbonEditProxySetCallbackOnChange Generated_F8MainRibbonEditProxySetCallbackOnChange;
typedef void*(*TF8MainRibbonEditProxyUnsetCallbackOnChange)(void*,void*);
extern TF8MainRibbonEditProxyUnsetCallbackOnChange Generated_F8MainRibbonEditProxyUnsetCallbackOnChange;
typedef void*(*TF8MainRibbonEditProxyDestroy)(void*);
extern TF8MainRibbonEditProxyDestroy Generated_F8MainRibbonEditProxyDestroy;
typedef const wchar_t*(*TF8MainRibbonLabelProxyGetCaption)(void*);
extern TF8MainRibbonLabelProxyGetCaption Generated_F8MainRibbonLabelProxyGetCaption;
typedef void*(*TF8MainRibbonLabelProxySetCaption)(void*,const wchar_t*);
extern TF8MainRibbonLabelProxySetCaption Generated_F8MainRibbonLabelProxySetCaption;
typedef void*(*TF8MainRibbonLabelProxyDestroy)(void*);
extern TF8MainRibbonLabelProxyDestroy Generated_F8MainRibbonLabelProxyDestroy;
typedef const wchar_t*(*TF8MainRibbonCheckBoxProxyGetCaption)(void*);
extern TF8MainRibbonCheckBoxProxyGetCaption Generated_F8MainRibbonCheckBoxProxyGetCaption;
typedef void*(*TF8MainRibbonCheckBoxProxySetCaption)(void*,const wchar_t*);
extern TF8MainRibbonCheckBoxProxySetCaption Generated_F8MainRibbonCheckBoxProxySetCaption;
typedef bool(*TF8MainRibbonCheckBoxProxyGetChecked)(void*);
extern TF8MainRibbonCheckBoxProxyGetChecked Generated_F8MainRibbonCheckBoxProxyGetChecked;
typedef void*(*TF8MainRibbonCheckBoxProxySetChecked)(void*,bool);
extern TF8MainRibbonCheckBoxProxySetChecked Generated_F8MainRibbonCheckBoxProxySetChecked;
typedef bool(*TF8MainRibbonCheckBoxProxyIsSetCallbackOnClick)(void*);
extern TF8MainRibbonCheckBoxProxyIsSetCallbackOnClick Generated_F8MainRibbonCheckBoxProxyIsSetCallbackOnClick;
typedef void*(*TF8MainRibbonCheckBoxProxySetCallbackOnClick)(void*,void*);
extern TF8MainRibbonCheckBoxProxySetCallbackOnClick Generated_F8MainRibbonCheckBoxProxySetCallbackOnClick;
typedef void*(*TF8MainRibbonCheckBoxProxyUnsetCallbackOnClick)(void*,void*);
extern TF8MainRibbonCheckBoxProxyUnsetCallbackOnClick Generated_F8MainRibbonCheckBoxProxyUnsetCallbackOnClick;
typedef void*(*TF8MainRibbonCheckBoxProxyDestroy)(void*);
extern TF8MainRibbonCheckBoxProxyDestroy Generated_F8MainRibbonCheckBoxProxyDestroy;
typedef void*(*TF8MainRibbonGroupProxyCreateButton)(void*,const wchar_t*);
extern TF8MainRibbonGroupProxyCreateButton Generated_F8MainRibbonGroupProxyCreateButton;
typedef void*(*TF8MainRibbonGroupProxyCreateEdit)(void*,const wchar_t*);
extern TF8MainRibbonGroupProxyCreateEdit Generated_F8MainRibbonGroupProxyCreateEdit;
typedef void*(*TF8MainRibbonGroupProxyCreateCheckBox)(void*,const wchar_t*);
extern TF8MainRibbonGroupProxyCreateCheckBox Generated_F8MainRibbonGroupProxyCreateCheckBox;
typedef void*(*TF8MainRibbonGroupProxyCreateLabel)(void*,const wchar_t*);
extern TF8MainRibbonGroupProxyCreateLabel Generated_F8MainRibbonGroupProxyCreateLabel;
typedef void*(*TF8MainRibbonGroupProxyCreatePanel)(void*,const wchar_t*);
extern TF8MainRibbonGroupProxyCreatePanel Generated_F8MainRibbonGroupProxyCreatePanel;
typedef void*(*TF8MainRibbonGroupProxyGetControlByName)(void*,const wchar_t*);
extern TF8MainRibbonGroupProxyGetControlByName Generated_F8MainRibbonGroupProxyGetControlByName;
typedef void*(*TF8MainRibbonGroupProxyDeleteControl)(void*,void*);
extern TF8MainRibbonGroupProxyDeleteControl Generated_F8MainRibbonGroupProxyDeleteControl;
typedef int(*TF8MainRibbonGroupProxyGetRibbonControlsCount)(void*);
extern TF8MainRibbonGroupProxyGetRibbonControlsCount Generated_F8MainRibbonGroupProxyGetRibbonControlsCount;
typedef void*(*TF8MainRibbonGroupProxyGetRibbonControl)(void*,int);
extern TF8MainRibbonGroupProxyGetRibbonControl Generated_F8MainRibbonGroupProxyGetRibbonControl;
typedef const wchar_t*(*TF8MainRibbonGroupProxyGetName)(void*);
extern TF8MainRibbonGroupProxyGetName Generated_F8MainRibbonGroupProxyGetName;
typedef const wchar_t*(*TF8MainRibbonGroupProxyGetCaption)(void*);
extern TF8MainRibbonGroupProxyGetCaption Generated_F8MainRibbonGroupProxyGetCaption;
typedef void*(*TF8MainRibbonGroupProxySetCaption)(void*,const wchar_t*);
extern TF8MainRibbonGroupProxySetCaption Generated_F8MainRibbonGroupProxySetCaption;
typedef bool(*TF8MainRibbonGroupProxyGetEnabled)(void*);
extern TF8MainRibbonGroupProxyGetEnabled Generated_F8MainRibbonGroupProxyGetEnabled;
typedef bool(*TF8MainRibbonGroupProxyGetVisible)(void*);
extern TF8MainRibbonGroupProxyGetVisible Generated_F8MainRibbonGroupProxyGetVisible;
typedef void*(*TF8MainRibbonGroupProxyDestroy)(void*);
extern TF8MainRibbonGroupProxyDestroy Generated_F8MainRibbonGroupProxyDestroy;
typedef void*(*TF8MainRibbonPanelProxyCreateButton)(void*,const wchar_t*);
extern TF8MainRibbonPanelProxyCreateButton Generated_F8MainRibbonPanelProxyCreateButton;
typedef void*(*TF8MainRibbonPanelProxyCreateEdit)(void*,const wchar_t*);
extern TF8MainRibbonPanelProxyCreateEdit Generated_F8MainRibbonPanelProxyCreateEdit;
typedef void*(*TF8MainRibbonPanelProxyCreateCheckBox)(void*,const wchar_t*);
extern TF8MainRibbonPanelProxyCreateCheckBox Generated_F8MainRibbonPanelProxyCreateCheckBox;
typedef void*(*TF8MainRibbonPanelProxyCreateLabel)(void*,const wchar_t*);
extern TF8MainRibbonPanelProxyCreateLabel Generated_F8MainRibbonPanelProxyCreateLabel;
typedef int(*TF8MainRibbonPanelProxyGetControlsCount)(void*);
extern TF8MainRibbonPanelProxyGetControlsCount Generated_F8MainRibbonPanelProxyGetControlsCount;
typedef void*(*TF8MainRibbonPanelProxyGetControl)(void*,int);
extern TF8MainRibbonPanelProxyGetControl Generated_F8MainRibbonPanelProxyGetControl;
typedef void*(*TF8MainRibbonPanelProxyGetControlByName)(void*,const wchar_t*);
extern TF8MainRibbonPanelProxyGetControlByName Generated_F8MainRibbonPanelProxyGetControlByName;
typedef void*(*TF8MainRibbonPanelProxyDeleteControl)(void*,void*);
extern TF8MainRibbonPanelProxyDeleteControl Generated_F8MainRibbonPanelProxyDeleteControl;
typedef void*(*TF8MainRibbonPanelProxyDestroy)(void*);
extern TF8MainRibbonPanelProxyDestroy Generated_F8MainRibbonPanelProxyDestroy;
typedef void*(*TF8MainRibbonTabProxyCreateGroup)(void*,const wchar_t*,unsigned short);
extern TF8MainRibbonTabProxyCreateGroup Generated_F8MainRibbonTabProxyCreateGroup;
typedef void*(*TF8MainRibbonTabProxyGetGroupByName)(void*,const wchar_t*);
extern TF8MainRibbonTabProxyGetGroupByName Generated_F8MainRibbonTabProxyGetGroupByName;
typedef void*(*TF8MainRibbonTabProxyDeleteGroup)(void*,void*);
extern TF8MainRibbonTabProxyDeleteGroup Generated_F8MainRibbonTabProxyDeleteGroup;
typedef int(*TF8MainRibbonTabProxyGetRibbonGroupsCount)(void*);
extern TF8MainRibbonTabProxyGetRibbonGroupsCount Generated_F8MainRibbonTabProxyGetRibbonGroupsCount;
typedef void*(*TF8MainRibbonTabProxyGetRibbonGroup)(void*,int);
extern TF8MainRibbonTabProxyGetRibbonGroup Generated_F8MainRibbonTabProxyGetRibbonGroup;
typedef const wchar_t*(*TF8MainRibbonTabProxyGetName)(void*);
extern TF8MainRibbonTabProxyGetName Generated_F8MainRibbonTabProxyGetName;
typedef const wchar_t*(*TF8MainRibbonTabProxyGetCaption)(void*);
extern TF8MainRibbonTabProxyGetCaption Generated_F8MainRibbonTabProxyGetCaption;
typedef void*(*TF8MainRibbonTabProxySetCaption)(void*,const wchar_t*);
extern TF8MainRibbonTabProxySetCaption Generated_F8MainRibbonTabProxySetCaption;
typedef void*(*TF8MainRibbonTabProxyDestroy)(void*);
extern TF8MainRibbonTabProxyDestroy Generated_F8MainRibbonTabProxyDestroy;
typedef void*(*TF8MainRibbonProxyCreateTab)(void*,const wchar_t*,unsigned short);
extern TF8MainRibbonProxyCreateTab Generated_F8MainRibbonProxyCreateTab;
typedef void*(*TF8MainRibbonProxyGetTabByCategory)(void*,F8MainRibbonCategoryEnum);
extern TF8MainRibbonProxyGetTabByCategory Generated_F8MainRibbonProxyGetTabByCategory;
typedef void*(*TF8MainRibbonProxyGetTabByName)(void*,const wchar_t*);
extern TF8MainRibbonProxyGetTabByName Generated_F8MainRibbonProxyGetTabByName;
typedef void*(*TF8MainRibbonProxyDeleteTab)(void*,void*);
extern TF8MainRibbonProxyDeleteTab Generated_F8MainRibbonProxyDeleteTab;
typedef int(*TF8MainRibbonProxyGetRibbonTabsCount)(void*);
extern TF8MainRibbonProxyGetRibbonTabsCount Generated_F8MainRibbonProxyGetRibbonTabsCount;
typedef void*(*TF8MainRibbonProxyGetRibbonTab)(void*,int);
extern TF8MainRibbonProxyGetRibbonTab Generated_F8MainRibbonProxyGetRibbonTab;
typedef void*(*TF8MainRibbonProxyDestroy)(void*);
extern TF8MainRibbonProxyDestroy Generated_F8MainRibbonProxyDestroy;
typedef F8MainCameraStateType(*TF8MainCameraProxyGetMainCameraState)(void*);
extern TF8MainCameraProxyGetMainCameraState Generated_F8MainCameraProxyGetMainCameraState;
typedef void*(*TF8MainCameraProxySetMainCameraState)(void*,F8MainCameraStateType);
extern TF8MainCameraProxySetMainCameraState Generated_F8MainCameraProxySetMainCameraState;
typedef void*(*TF8MainCameraProxyMoveMainCameraTo)(void*,F8dVec3,F8dVec3,double);
extern TF8MainCameraProxyMoveMainCameraTo Generated_F8MainCameraProxyMoveMainCameraTo;
typedef void*(*TF8MainCameraProxyDestroy)(void*);
extern TF8MainCameraProxyDestroy Generated_F8MainCameraProxyDestroy;
typedef F8SimulationScreenSettingType(*TF8SimulationScreenProxyGetSettings)(void*);
extern TF8SimulationScreenProxyGetSettings Generated_F8SimulationScreenProxyGetSettings;
typedef void*(*TF8SimulationScreenProxySetSettings)(void*,F8SimulationScreenSettingType);
extern TF8SimulationScreenProxySetSettings Generated_F8SimulationScreenProxySetSettings;
typedef void*(*TF8SimulationScreenProxyDestroy)(void*);
extern TF8SimulationScreenProxyDestroy Generated_F8SimulationScreenProxyDestroy;
typedef F8NavigationModeEnum(*TF8NavigationStateTypeGetMode)(void*);
extern TF8NavigationStateTypeGetMode Generated_F8NavigationStateTypeGetMode;
typedef void*(*TF8NavigationStateTypeSetMode)(void*,F8NavigationModeEnum);
extern TF8NavigationStateTypeSetMode Generated_F8NavigationStateTypeSetMode;
typedef F8NavigationCommonParameterType(*TF8NavigationStateTypeGetCommonParameter)(void*);
extern TF8NavigationStateTypeGetCommonParameter Generated_F8NavigationStateTypeGetCommonParameter;
typedef void*(*TF8NavigationStateTypeSetCommonParameter)(void*,F8NavigationCommonParameterType);
extern TF8NavigationStateTypeSetCommonParameter Generated_F8NavigationStateTypeSetCommonParameter;
typedef void*(*TF8NavigationStateTypeSetRoad)(void*,void*);
extern TF8NavigationStateTypeSetRoad Generated_F8NavigationStateTypeSetRoad;
typedef void*(*TF8NavigationStateTypeSetVehicle)(void*,void*);
extern TF8NavigationStateTypeSetVehicle Generated_F8NavigationStateTypeSetVehicle;
typedef void*(*TF8NavigationStateTypeSetTrailer)(void*,void*);
extern TF8NavigationStateTypeSetTrailer Generated_F8NavigationStateTypeSetTrailer;
typedef void*(*TF8NavigationStateTypeSetOffRoadStartPoint)(void*,void*);
extern TF8NavigationStateTypeSetOffRoadStartPoint Generated_F8NavigationStateTypeSetOffRoadStartPoint;
typedef F8NavigationWalkParameterType(*TF8NavigationStateTypeGetWalkParameter)(void*);
extern TF8NavigationStateTypeGetWalkParameter Generated_F8NavigationStateTypeGetWalkParameter;
typedef void*(*TF8NavigationStateTypeSetCharacter)(void*,void*);
extern TF8NavigationStateTypeSetCharacter Generated_F8NavigationStateTypeSetCharacter;
typedef F8NavigationDriveParameterType(*TF8NavigationStateTypeGetDriveParameter)(void*);
extern TF8NavigationStateTypeGetDriveParameter Generated_F8NavigationStateTypeGetDriveParameter;
typedef void*(*TF8NavigationStateTypeSetDriveParameter)(void*,F8NavigationDriveParameterType);
extern TF8NavigationStateTypeSetDriveParameter Generated_F8NavigationStateTypeSetDriveParameter;
typedef void*(*TF8NavigationStateTypeSetNewCar)(void*,void*);
extern TF8NavigationStateTypeSetNewCar Generated_F8NavigationStateTypeSetNewCar;
typedef F8NavigationFlyParameterType(*TF8NavigationStateTypeGetFlyParameter)(void*);
extern TF8NavigationStateTypeGetFlyParameter Generated_F8NavigationStateTypeGetFlyParameter;
typedef void*(*TF8NavigationStateTypeSetFlyParameter)(void*,F8NavigationFlyParameterType);
extern TF8NavigationStateTypeSetFlyParameter Generated_F8NavigationStateTypeSetFlyParameter;
typedef void*(*TF8NavigationStateTypeSetFlightPath)(void*,void*);
extern TF8NavigationStateTypeSetFlightPath Generated_F8NavigationStateTypeSetFlightPath;
typedef F8NavigationBicycleParameterType(*TF8NavigationStateTypeGetBikeParameter)(void*);
extern TF8NavigationStateTypeGetBikeParameter Generated_F8NavigationStateTypeGetBikeParameter;
typedef void*(*TF8NavigationStateTypeSetBikeParameter)(void*,F8NavigationBicycleParameterType);
extern TF8NavigationStateTypeSetBikeParameter Generated_F8NavigationStateTypeSetBikeParameter;
typedef void*(*TF8NavigationStateTypeSetBikeCharacter)(void*,void*);
extern TF8NavigationStateTypeSetBikeCharacter Generated_F8NavigationStateTypeSetBikeCharacter;
typedef void*(*TF8NavigationStateTypeSetBikeFlightPath)(void*,void*);
extern TF8NavigationStateTypeSetBikeFlightPath Generated_F8NavigationStateTypeSetBikeFlightPath;
typedef void*(*TF8NavigationStateTypeDestroy)(void*);
extern TF8NavigationStateTypeDestroy Generated_F8NavigationStateTypeDestroy;
typedef F8MainFormCameraMoveModeEnum(*TF8MainFormProxyGetCameraMoveMode)(void*);
extern TF8MainFormProxyGetCameraMoveMode Generated_F8MainFormProxyGetCameraMoveMode;
typedef void*(*TF8MainFormProxySetCameraMoveMode)(void*,F8MainFormCameraMoveModeEnum);
extern TF8MainFormProxySetCameraMoveMode Generated_F8MainFormProxySetCameraMoveMode;
typedef void*(*TF8MainFormProxyGetMainCamera)(void*);
extern TF8MainFormProxyGetMainCamera Generated_F8MainFormProxyGetMainCamera;
typedef void*(*TF8MainFormProxyGetMainSimulationScreen)(void*);
extern TF8MainFormProxyGetMainSimulationScreen Generated_F8MainFormProxyGetMainSimulationScreen;
typedef F8NavigationModeEnum(*TF8MainFormProxyGetNavigationMode)(void*);
extern TF8MainFormProxyGetNavigationMode Generated_F8MainFormProxyGetNavigationMode;
typedef void*(*TF8MainFormProxyGetInitialNavigationState)(void*);
extern TF8MainFormProxyGetInitialNavigationState Generated_F8MainFormProxyGetInitialNavigationState;
typedef void*(*TF8MainFormProxySetNavigationState)(void*,void*);
extern TF8MainFormProxySetNavigationState Generated_F8MainFormProxySetNavigationState;
typedef void*(*TF8MainFormProxyGetMainOpenGL)(void*);
extern TF8MainFormProxyGetMainOpenGL Generated_F8MainFormProxyGetMainOpenGL;
typedef void*(*TF8MainFormProxyGetMainRibbonMenu)(void*);
extern TF8MainFormProxyGetMainRibbonMenu Generated_F8MainFormProxyGetMainRibbonMenu;
typedef unsigned __int64(*TF8MainFormProxyGetWindowHandle)(void*);
extern TF8MainFormProxyGetWindowHandle Generated_F8MainFormProxyGetWindowHandle;
typedef void*(*TF8MainFormProxyRegisterEventNavigationModeChange)(void*,void*);
extern TF8MainFormProxyRegisterEventNavigationModeChange Generated_F8MainFormProxyRegisterEventNavigationModeChange;
typedef void*(*TF8MainFormProxyRegisterEventMoveModeChange)(void*,void*);
extern TF8MainFormProxyRegisterEventMoveModeChange Generated_F8MainFormProxyRegisterEventMoveModeChange;
typedef void*(*TF8MainFormProxyRegisterEventModelClick)(void*,void*);
extern TF8MainFormProxyRegisterEventModelClick Generated_F8MainFormProxyRegisterEventModelClick;
typedef void*(*TF8MainFormProxyRegisterEventJoystickMove)(void*,void*);
extern TF8MainFormProxyRegisterEventJoystickMove Generated_F8MainFormProxyRegisterEventJoystickMove;
typedef void*(*TF8MainFormProxyRegisterEventJoystickButtonDown)(void*,void*);
extern TF8MainFormProxyRegisterEventJoystickButtonDown Generated_F8MainFormProxyRegisterEventJoystickButtonDown;
typedef void*(*TF8MainFormProxyRegisterEventJoystickButtonUp)(void*,void*);
extern TF8MainFormProxyRegisterEventJoystickButtonUp Generated_F8MainFormProxyRegisterEventJoystickButtonUp;
typedef void*(*TF8MainFormProxyRegisterEventJoystickHat)(void*,void*);
extern TF8MainFormProxyRegisterEventJoystickHat Generated_F8MainFormProxyRegisterEventJoystickHat;
typedef void*(*TF8MainFormProxyRegisterEventKeyUp)(void*,void*);
extern TF8MainFormProxyRegisterEventKeyUp Generated_F8MainFormProxyRegisterEventKeyUp;
typedef void*(*TF8MainFormProxyRegisterEventKeyDown)(void*,void*);
extern TF8MainFormProxyRegisterEventKeyDown Generated_F8MainFormProxyRegisterEventKeyDown;
typedef void*(*TF8MainFormProxyUnregisterEventNavigationModeChange)(void*,void*);
extern TF8MainFormProxyUnregisterEventNavigationModeChange Generated_F8MainFormProxyUnregisterEventNavigationModeChange;
typedef void*(*TF8MainFormProxyUnregisterEventMoveModeChange)(void*,void*);
extern TF8MainFormProxyUnregisterEventMoveModeChange Generated_F8MainFormProxyUnregisterEventMoveModeChange;
typedef void*(*TF8MainFormProxyUnregisterEventModelClick)(void*,void*);
extern TF8MainFormProxyUnregisterEventModelClick Generated_F8MainFormProxyUnregisterEventModelClick;
typedef void*(*TF8MainFormProxyUnregisterEventJoystickMove)(void*,void*);
extern TF8MainFormProxyUnregisterEventJoystickMove Generated_F8MainFormProxyUnregisterEventJoystickMove;
typedef void*(*TF8MainFormProxyUnregisterEventJoystickButtonDown)(void*,void*);
extern TF8MainFormProxyUnregisterEventJoystickButtonDown Generated_F8MainFormProxyUnregisterEventJoystickButtonDown;
typedef void*(*TF8MainFormProxyUnregisterEventJoystickButtonUp)(void*,void*);
extern TF8MainFormProxyUnregisterEventJoystickButtonUp Generated_F8MainFormProxyUnregisterEventJoystickButtonUp;
typedef void*(*TF8MainFormProxyUnregisterEventJoystickHat)(void*,void*);
extern TF8MainFormProxyUnregisterEventJoystickHat Generated_F8MainFormProxyUnregisterEventJoystickHat;
typedef void*(*TF8MainFormProxyUnregisterEventKeyUp)(void*,void*);
extern TF8MainFormProxyUnregisterEventKeyUp Generated_F8MainFormProxyUnregisterEventKeyUp;
typedef void*(*TF8MainFormProxyUnregisterEventKeyDown)(void*,void*);
extern TF8MainFormProxyUnregisterEventKeyDown Generated_F8MainFormProxyUnregisterEventKeyDown;
typedef void*(*TF8MainFormProxyDestroy)(void*);
extern TF8MainFormProxyDestroy Generated_F8MainFormProxyDestroy;
typedef F8ApiGazeDataType(*TF8GazeTrackingPluginProxyGetCurrentGazeData)(void*);
extern TF8GazeTrackingPluginProxyGetCurrentGazeData Generated_F8GazeTrackingPluginProxyGetCurrentGazeData;
typedef void*(*TF8GazeTrackingPluginProxyPushGazeData)(void*,F8ApiGazeTrackingDataType,double);
extern TF8GazeTrackingPluginProxyPushGazeData Generated_F8GazeTrackingPluginProxyPushGazeData;
typedef void*(*TF8GazeTrackingPluginProxyRegisterCallbackGazeDataUpdated)(void*,void*);
extern TF8GazeTrackingPluginProxyRegisterCallbackGazeDataUpdated Generated_F8GazeTrackingPluginProxyRegisterCallbackGazeDataUpdated;
typedef void*(*TF8GazeTrackingPluginProxyUnregisterCallbackGazeDataUpdated)(void*,void*);
extern TF8GazeTrackingPluginProxyUnregisterCallbackGazeDataUpdated Generated_F8GazeTrackingPluginProxyUnregisterCallbackGazeDataUpdated;
typedef void*(*TF8GazeTrackingPluginProxyDestroy)(void*);
extern TF8GazeTrackingPluginProxyDestroy Generated_F8GazeTrackingPluginProxyDestroy;
typedef void*(*TF8ApplicationServicesGetSimulationCore)(void*);
extern TF8ApplicationServicesGetSimulationCore Generated_F8ApplicationServicesGetSimulationCore;
typedef void*(*TF8ApplicationServicesGetGazeTrackingPlugin)(void*);
extern TF8ApplicationServicesGetGazeTrackingPlugin Generated_F8ApplicationServicesGetGazeTrackingPlugin;
typedef void*(*TF8ApplicationServicesGetProject)(void*);
extern TF8ApplicationServicesGetProject Generated_F8ApplicationServicesGetProject;
typedef void*(*TF8ApplicationServicesGetMainForm)(void*);
extern TF8ApplicationServicesGetMainForm Generated_F8ApplicationServicesGetMainForm;
typedef void*(*TF8ApplicationServicesGetCoordinateConverter)(void*);
extern TF8ApplicationServicesGetCoordinateConverter Generated_F8ApplicationServicesGetCoordinateConverter;
typedef const wchar_t*(*TF8ApplicationServicesGetWorkingDirectory)(void*);
extern TF8ApplicationServicesGetWorkingDirectory Generated_F8ApplicationServicesGetWorkingDirectory;
typedef const wchar_t*(*TF8ApplicationServicesGetUserDirectory)(void*);
extern TF8ApplicationServicesGetUserDirectory Generated_F8ApplicationServicesGetUserDirectory;
typedef const wchar_t*(*TF8ApplicationServicesGetHomeDirectory)(void*);
extern TF8ApplicationServicesGetHomeDirectory Generated_F8ApplicationServicesGetHomeDirectory;
typedef void*(*TF8ApplicationServicesProcessMessages)(void*);
extern TF8ApplicationServicesProcessMessages Generated_F8ApplicationServicesProcessMessages;
typedef void*(*TF8ApplicationServicesRegisterCallbackPluginAbleMenus)(void*,void*);
extern TF8ApplicationServicesRegisterCallbackPluginAbleMenus Generated_F8ApplicationServicesRegisterCallbackPluginAbleMenus;
typedef void*(*TF8ApplicationServicesUnregisterCallbackPluginAbleMenus)(void*,void*);
extern TF8ApplicationServicesUnregisterCallbackPluginAbleMenus Generated_F8ApplicationServicesUnregisterCallbackPluginAbleMenus;
typedef void*(*TF8ApplicationServicesRegisterCallbackOnErrorOrWarning)(void*,void*);
extern TF8ApplicationServicesRegisterCallbackOnErrorOrWarning Generated_F8ApplicationServicesRegisterCallbackOnErrorOrWarning;
typedef void*(*TF8ApplicationServicesUnregisterCallbackOnErrorOrWarning)(void*,void*);
extern TF8ApplicationServicesUnregisterCallbackOnErrorOrWarning Generated_F8ApplicationServicesUnregisterCallbackOnErrorOrWarning;
typedef void*(*TF8ApplicationServicesRegisterCallbackNewProject)(void*,void*);
extern TF8ApplicationServicesRegisterCallbackNewProject Generated_F8ApplicationServicesRegisterCallbackNewProject;
typedef void*(*TF8ApplicationServicesUnregisterCallbackNewProject)(void*,void*);
extern TF8ApplicationServicesUnregisterCallbackNewProject Generated_F8ApplicationServicesUnregisterCallbackNewProject;
typedef void*(*TF8ApplicationServicesRegisterCallbackBeforeSaveProject)(void*,void*);
extern TF8ApplicationServicesRegisterCallbackBeforeSaveProject Generated_F8ApplicationServicesRegisterCallbackBeforeSaveProject;
typedef void*(*TF8ApplicationServicesUnregisterCallbackBeforeSaveProject)(void*,void*);
extern TF8ApplicationServicesUnregisterCallbackBeforeSaveProject Generated_F8ApplicationServicesUnregisterCallbackBeforeSaveProject;
typedef void*(*TF8ApplicationServicesRegisterCallbackAfterSaveProject)(void*,void*);
extern TF8ApplicationServicesRegisterCallbackAfterSaveProject Generated_F8ApplicationServicesRegisterCallbackAfterSaveProject;
typedef void*(*TF8ApplicationServicesUnregisterCallbackAfterSaveProject)(void*,void*);
extern TF8ApplicationServicesUnregisterCallbackAfterSaveProject Generated_F8ApplicationServicesUnregisterCallbackAfterSaveProject;
typedef void*(*TF8ApplicationServicesRegisterCallbackCloseProjectQuery)(void*,void*);
extern TF8ApplicationServicesRegisterCallbackCloseProjectQuery Generated_F8ApplicationServicesRegisterCallbackCloseProjectQuery;
typedef void*(*TF8ApplicationServicesUnregisterCallbackCloseProjectQuery)(void*,void*);
extern TF8ApplicationServicesUnregisterCallbackCloseProjectQuery Generated_F8ApplicationServicesUnregisterCallbackCloseProjectQuery;
typedef void*(*TF8ApplicationServicesRegisterCallbackBeforeDestroyProject)(void*,void*);
extern TF8ApplicationServicesRegisterCallbackBeforeDestroyProject Generated_F8ApplicationServicesRegisterCallbackBeforeDestroyProject;
typedef void*(*TF8ApplicationServicesUnregisterCallbackBeforeDestroyProject)(void*,void*);
extern TF8ApplicationServicesUnregisterCallbackBeforeDestroyProject Generated_F8ApplicationServicesUnregisterCallbackBeforeDestroyProject;
typedef void*(*TF8ApplicationServicesRegisterCallbackAfterLoadProject)(void*,void*);
extern TF8ApplicationServicesRegisterCallbackAfterLoadProject Generated_F8ApplicationServicesRegisterCallbackAfterLoadProject;
typedef void*(*TF8ApplicationServicesUnregisterCallbackAfterLoadProject)(void*,void*);
extern TF8ApplicationServicesUnregisterCallbackAfterLoadProject Generated_F8ApplicationServicesUnregisterCallbackAfterLoadProject;
typedef void*(*TF8ApplicationServicesDestroy)(void*);
extern TF8ApplicationServicesDestroy Generated_F8ApplicationServicesDestroy;


class Cb_ObjectOnBeforeDestructionMapperClass
{
private:
public:
	Cb_ObjectOnBeforeDestruction cb;
	Cb_ObjectOnBeforeDestructionMapperClass(Cb_ObjectOnBeforeDestruction callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_ObjectOnBeforeDestructionCallback(F8ObjectProxy instance)
	{
		cb(instance);
	}
};
class Cb_TransientOnBeforeCalculateMovementMapperClass
{
private:
public:
	Cb_TransientOnBeforeCalculateMovement cb;
	Cb_TransientOnBeforeCalculateMovementMapperClass(Cb_TransientOnBeforeCalculateMovement callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_TransientOnBeforeCalculateMovementCallback(double dTimeInSeconds,F8TransientInstanceProxy Instance)
	{
		cb(dTimeInSeconds,Instance);
	}
};
class Cb_TransientOnAfterCalculateMovementMapperClass
{
private:
public:
	Cb_TransientOnAfterCalculateMovement cb;
	Cb_TransientOnAfterCalculateMovementMapperClass(Cb_TransientOnAfterCalculateMovement callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_TransientOnAfterCalculateMovementCallback(double dTimeInSeconds,F8TransientInstanceProxy Instance)
	{
		cb(dTimeInSeconds,Instance);
	}
};
class Cb_TransientOnBeforeDoMovementMapperClass
{
private:
public:
	Cb_TransientOnBeforeDoMovement cb;
	Cb_TransientOnBeforeDoMovementMapperClass(Cb_TransientOnBeforeDoMovement callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_TransientOnBeforeDoMovementCallback(double dTimeInSeconds,F8TransientInstanceProxy Instance)
	{
		cb(dTimeInSeconds,Instance);
	}
};
class Cb_TransientOnAfterDoMovementMapperClass
{
private:
public:
	Cb_TransientOnAfterDoMovement cb;
	Cb_TransientOnAfterDoMovementMapperClass(Cb_TransientOnAfterDoMovement callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_TransientOnAfterDoMovementCallback(double dTimeInSeconds,F8TransientInstanceProxy Instance)
	{
		cb(dTimeInSeconds,Instance);
	}
};
class Cb_TransientOnCalculateMovementMapperClass
{
private:
public:
	Cb_TransientOnCalculateMovement cb;
	Cb_TransientOnCalculateMovementMapperClass(Cb_TransientOnCalculateMovement callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_TransientOnCalculateMovementCallback(double dTimeInSeconds,F8TransientInstanceProxy Instance)
	{
		cb(dTimeInSeconds,Instance);
	}
};
class Cb_TransientOnDoMovementMapperClass
{
private:
public:
	Cb_TransientOnDoMovement cb;
	Cb_TransientOnDoMovementMapperClass(Cb_TransientOnDoMovement callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_TransientOnDoMovementCallback(double dTimeInSeconds,F8TransientInstanceProxy Instance)
	{
		cb(dTimeInSeconds,Instance);
	}
};
class Cb_TrafficSimulationStatusChangedMapperClass
{
private:
public:
	Cb_TrafficSimulationStatusChanged cb;
	Cb_TrafficSimulationStatusChangedMapperClass(Cb_TrafficSimulationStatusChanged callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_TrafficSimulationStatusChangedCallback(void)
	{
		cb();
	}
};
class Cb_TrafficBeforeInitializeDrivingMapperClass
{
private:
public:
	Cb_TrafficBeforeInitializeDriving cb;
	Cb_TrafficBeforeInitializeDrivingMapperClass(Cb_TrafficBeforeInitializeDriving callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_TrafficBeforeInitializeDrivingCallback(F8DriverDataType driverData)
	{
		cb(driverData);
	}
};
class Cb_TrafficStartDrivingCarMapperClass
{
private:
public:
	Cb_TrafficStartDrivingCar cb;
	Cb_TrafficStartDrivingCarMapperClass(Cb_TrafficStartDrivingCar callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_TrafficStartDrivingCarCallback(F8TransientCarInstanceProxy aVehicle)
	{
		cb(aVehicle);
	}
};
class Cb_TrafficStopDrivingCarMapperClass
{
private:
public:
	Cb_TrafficStopDrivingCar cb;
	Cb_TrafficStopDrivingCarMapperClass(Cb_TrafficStopDrivingCar callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_TrafficStopDrivingCarCallback(F8TransientCarInstanceProxy aVehicle)
	{
		cb(aVehicle);
	}
};
class Cb_TrafficTransientWorldBeforeMoveMapperClass
{
private:
public:
	Cb_TrafficTransientWorldBeforeMove cb;
	Cb_TrafficTransientWorldBeforeMoveMapperClass(Cb_TrafficTransientWorldBeforeMove callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_TrafficTransientWorldBeforeMoveCallback(double dTimeInSeconds)
	{
		cb(dTimeInSeconds);
	}
};
class Cb_TrafficTransientWorldAfterMoveMapperClass
{
private:
public:
	Cb_TrafficTransientWorldAfterMove cb;
	Cb_TrafficTransientWorldAfterMoveMapperClass(Cb_TrafficTransientWorldAfterMove callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_TrafficTransientWorldAfterMoveCallback(double dTimeInSeconds)
	{
		cb(dTimeInSeconds);
	}
};
class Cb_TrafficTransientWorldMoveMapperClass
{
private:
public:
	Cb_TrafficTransientWorldMove cb;
	Cb_TrafficTransientWorldMoveMapperClass(Cb_TrafficTransientWorldMove callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_TrafficTransientWorldMoveCallback(double dTimeInSeconds)
	{
		cb(dTimeInSeconds);
	}
};
class Cb_TrafficNewTransientObjectMapperClass
{
private:
public:
	Cb_TrafficNewTransientObject cb;
	Cb_TrafficNewTransientObjectMapperClass(Cb_TrafficNewTransientObject callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_TrafficNewTransientObjectCallback(F8TransientInstanceProxy newTransient)
	{
		cb(newTransient);
	}
};
class Cb_TrafficTransientObjectDeletedMapperClass
{
private:
public:
	Cb_TrafficTransientObjectDeleted cb;
	Cb_TrafficTransientObjectDeletedMapperClass(Cb_TrafficTransientObjectDeleted callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_TrafficTransientObjectDeletedCallback(F8TransientInstanceProxy deletedTransient)
	{
		cb(deletedTransient);
	}
};
class Cb_TrafficCacheSimulationDataMapperClass
{
private:
public:
	Cb_TrafficCacheSimulationData cb;
	Cb_TrafficCacheSimulationDataMapperClass(Cb_TrafficCacheSimulationData callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_TrafficCacheSimulationDataCallback(double dTimeInSeconds)
	{
		cb(dTimeInSeconds);
	}
};
class Cb_SimulationApplyContextMapperClass
{
private:
public:
	Cb_SimulationApplyContext cb;
	Cb_SimulationApplyContextMapperClass(Cb_SimulationApplyContext callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_SimulationApplyContextCallback(F8ContextProxy context)
	{
		cb(context);
	}
};
class Cb_SimulationStartEnvironmentMapperClass
{
private:
public:
	Cb_SimulationStartEnvironment cb;
	Cb_SimulationStartEnvironmentMapperClass(Cb_SimulationStartEnvironment callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_SimulationStartEnvironmentCallback(void)
	{
		cb();
	}
};
class Cb_SimulationStopEnvironmentMapperClass
{
private:
public:
	Cb_SimulationStopEnvironment cb;
	Cb_SimulationStopEnvironmentMapperClass(Cb_SimulationStopEnvironment callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_SimulationStopEnvironmentCallback(void)
	{
		cb();
	}
};
class Cb_SimulationStartScenarioMapperClass
{
private:
public:
	Cb_SimulationStartScenario cb;
	Cb_SimulationStartScenarioMapperClass(Cb_SimulationStartScenario callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_SimulationStartScenarioCallback(F8ScenarioProxy scenario)
	{
		cb(scenario);
	}
};
class Cb_SimulationStopScenarioMapperClass
{
private:
public:
	Cb_SimulationStopScenario cb;
	Cb_SimulationStopScenarioMapperClass(Cb_SimulationStopScenario callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_SimulationStopScenarioCallback(F8ScenarioProxy scenario,int runningScenarioCount)
	{
		cb(scenario,runningScenarioCount);
	}
};
class Cb_SimulationStartEventMapperClass
{
private:
public:
	Cb_SimulationStartEvent cb;
	Cb_SimulationStartEventMapperClass(Cb_SimulationStartEvent callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_SimulationStartEventCallback(F8EventProxy Event)
	{
		cb(Event);
	}
};
class Cb_SimulationStopEventMapperClass
{
private:
public:
	Cb_SimulationStopEvent cb;
	Cb_SimulationStopEventMapperClass(Cb_SimulationStopEvent callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_SimulationStopEventCallback(F8EventProxy Event)
	{
		cb(Event);
	}
};
class Cb_SimulationStartScriptMapperClass
{
private:
public:
	Cb_SimulationStartScript cb;
	Cb_SimulationStartScriptMapperClass(Cb_SimulationStartScript callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_SimulationStartScriptCallback(void)
	{
		cb();
	}
};
class Cb_SimulationStopScriptMapperClass
{
private:
public:
	Cb_SimulationStopScript cb;
	Cb_SimulationStopScriptMapperClass(Cb_SimulationStopScript callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_SimulationStopScriptCallback(void)
	{
		cb();
	}
};
class Cb_MainFormOpenGLBeforePaintMapperClass
{
private:
public:
	Cb_MainFormOpenGLBeforePaint cb;
	Cb_MainFormOpenGLBeforePaintMapperClass(Cb_MainFormOpenGLBeforePaint callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_MainFormOpenGLBeforePaintCallback(int mode)
	{
		cb(mode);
	}
};
class Cb_MainFormOpenGLAfterDrawSceneMapperClass
{
private:
public:
	Cb_MainFormOpenGLAfterDrawScene cb;
	Cb_MainFormOpenGLAfterDrawSceneMapperClass(Cb_MainFormOpenGLAfterDrawScene callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_MainFormOpenGLAfterDrawSceneCallback(void)
	{
		cb();
	}
};
class Cb_MainFormOpenGLAfterPaintMapperClass
{
private:
public:
	Cb_MainFormOpenGLAfterPaint cb;
	Cb_MainFormOpenGLAfterPaintMapperClass(Cb_MainFormOpenGLAfterPaint callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_MainFormOpenGLAfterPaintCallback(void)
	{
		cb();
	}
};
class Cb_MainFormOpenGLMouseEnterMapperClass
{
private:
public:
	Cb_MainFormOpenGLMouseEnter cb;
	Cb_MainFormOpenGLMouseEnterMapperClass(Cb_MainFormOpenGLMouseEnter callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_MainFormOpenGLMouseEnterCallback(void)
	{
		cb();
	}
};
class Cb_MainFormOpenGLMouseLeaveMapperClass
{
private:
public:
	Cb_MainFormOpenGLMouseLeave cb;
	Cb_MainFormOpenGLMouseLeaveMapperClass(Cb_MainFormOpenGLMouseLeave callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_MainFormOpenGLMouseLeaveCallback(void)
	{
		cb();
	}
};
class Cb_MainFormOpenGLMouseUpMapperClass
{
private:
public:
	Cb_MainFormOpenGLMouseUp cb;
	Cb_MainFormOpenGLMouseUpMapperClass(Cb_MainFormOpenGLMouseUp callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_MainFormOpenGLMouseUpCallback(F8MouseButton Button,F8ShiftState Shift,int X,int Y)
	{
		cb(Button,Shift,X,Y);
	}
};
class Cb_MainFormOpenGLMouseDownMapperClass
{
private:
public:
	Cb_MainFormOpenGLMouseDown cb;
	Cb_MainFormOpenGLMouseDownMapperClass(Cb_MainFormOpenGLMouseDown callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_MainFormOpenGLMouseDownCallback(F8MouseButton Button,F8ShiftState Shift,int X,int Y)
	{
		cb(Button,Shift,X,Y);
	}
};
class Cb_MainFormOpenGLMouseMoveMapperClass
{
private:
public:
	Cb_MainFormOpenGLMouseMove cb;
	Cb_MainFormOpenGLMouseMoveMapperClass(Cb_MainFormOpenGLMouseMove callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_MainFormOpenGLMouseMoveCallback(F8ShiftState Shift,int X,int Y)
	{
		cb(Shift,X,Y);
	}
};
class Cb_MainFormOpenGLMouseWheelMapperClass
{
private:
public:
	Cb_MainFormOpenGLMouseWheel cb;
	Cb_MainFormOpenGLMouseWheelMapperClass(Cb_MainFormOpenGLMouseWheel callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_MainFormOpenGLMouseWheelCallback(F8ShiftState Shift,int WheelDelta,F8iVec2 MousePos,bool& Handled)
	{
		cb(Shift,WheelDelta,MousePos,Handled);
	}
};
class Cb_RibbonMenuItemOnClickMapperClass
{
private:
public:
	Cb_RibbonMenuItemOnClick cb;
	Cb_RibbonMenuItemOnClickMapperClass(Cb_RibbonMenuItemOnClick callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_RibbonMenuItemOnClickCallback(void)
	{
		cb();
	}
};
class Cb_RibbonMenuItemOnChangeMapperClass
{
private:
public:
	Cb_RibbonMenuItemOnChange cb;
	Cb_RibbonMenuItemOnChangeMapperClass(Cb_RibbonMenuItemOnChange callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_RibbonMenuItemOnChangeCallback(void)
	{
		cb();
	}
};
class Cb_MainFormNavigationModeChangeMapperClass
{
private:
public:
	Cb_MainFormNavigationModeChange cb;
	Cb_MainFormNavigationModeChangeMapperClass(Cb_MainFormNavigationModeChange callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_MainFormNavigationModeChangeCallback(void)
	{
		cb();
	}
};
class Cb_MainFormMoveModeChangeMapperClass
{
private:
public:
	Cb_MainFormMoveModeChange cb;
	Cb_MainFormMoveModeChangeMapperClass(Cb_MainFormMoveModeChange callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_MainFormMoveModeChangeCallback(void)
	{
		cb();
	}
};
class Cb_MainFormModelClickMapperClass
{
private:
public:
	Cb_MainFormModelClick cb;
	Cb_MainFormModelClickMapperClass(Cb_MainFormModelClick callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_MainFormModelClickCallback(F8ObjectInstanceProxy instance,F8ModelSelectionEnum& command)
	{
		cb(instance,command);
	}
};
class Cb_MainFormJoystickMoveMapperClass
{
private:
public:
	Cb_MainFormJoystickMove cb;
	Cb_MainFormJoystickMoveMapperClass(Cb_MainFormJoystickMove callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_MainFormJoystickMoveCallback(int X,int Y,int Z,int rX,int rY,int rZ,int throttle,int clutch)
	{
		cb(X,Y,Z,rX,rY,rZ,throttle,clutch);
	}
};
class Cb_MainFormJoystickButtonDownMapperClass
{
private:
public:
	Cb_MainFormJoystickButtonDown cb;
	Cb_MainFormJoystickButtonDownMapperClass(Cb_MainFormJoystickButtonDown callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_MainFormJoystickButtonDownCallback(int button)
	{
		cb(button);
	}
};
class Cb_MainFormJoystickButtonUpMapperClass
{
private:
public:
	Cb_MainFormJoystickButtonUp cb;
	Cb_MainFormJoystickButtonUpMapperClass(Cb_MainFormJoystickButtonUp callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_MainFormJoystickButtonUpCallback(int button)
	{
		cb(button);
	}
};
class Cb_MainFormJoystickHatMapperClass
{
private:
public:
	Cb_MainFormJoystickHat cb;
	Cb_MainFormJoystickHatMapperClass(Cb_MainFormJoystickHat callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_MainFormJoystickHatCallback(unsigned angle)
	{
		cb(angle);
	}
};
class Cb_MainFormKeyUpMapperClass
{
private:
public:
	Cb_MainFormKeyUp cb;
	Cb_MainFormKeyUpMapperClass(Cb_MainFormKeyUp callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_MainFormKeyUpCallback(unsigned short& Key,F8ShiftState Shift)
	{
		cb(Key,Shift);
	}
};
class Cb_MainFormKeyDownMapperClass
{
private:
public:
	Cb_MainFormKeyDown cb;
	Cb_MainFormKeyDownMapperClass(Cb_MainFormKeyDown callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_MainFormKeyDownCallback(unsigned short& Key,F8ShiftState Shift)
	{
		cb(Key,Shift);
	}
};
class Cb_GazeTrackingPluginGazeDataUpdatedMapperClass
{
private:
public:
	Cb_GazeTrackingPluginGazeDataUpdated cb;
	Cb_GazeTrackingPluginGazeDataUpdatedMapperClass(Cb_GazeTrackingPluginGazeDataUpdated callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_GazeTrackingPluginGazeDataUpdatedCallback(void)
	{
		cb();
	}
};
class Cb_ApplicationPluginAbleMenusMapperClass
{
private:
public:
	Cb_ApplicationPluginAbleMenus cb;
	Cb_ApplicationPluginAbleMenusMapperClass(Cb_ApplicationPluginAbleMenus callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_ApplicationPluginAbleMenusCallback(bool enable)
	{
		cb(enable);
	}
};
class Cb_ApplicationOnErrorOrWarningMapperClass
{
private:
public:
	Cb_ApplicationOnErrorOrWarning cb;
	Cb_ApplicationOnErrorOrWarningMapperClass(Cb_ApplicationOnErrorOrWarning callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_ApplicationOnErrorOrWarningCallback(F8ApplicationErrorTypeEnum errorType,unsigned short errorCode,const wchar_t* errorMessage)
	{
		cb(errorType,errorCode,errorMessage);
	}
};
class Cb_ApplicationNewProjectMapperClass
{
private:
public:
	Cb_ApplicationNewProject cb;
	Cb_ApplicationNewProjectMapperClass(Cb_ApplicationNewProject callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_ApplicationNewProjectCallback(void)
	{
		cb();
	}
};
class Cb_ApplicationBeforeSaveProjectMapperClass
{
private:
public:
	Cb_ApplicationBeforeSaveProject cb;
	Cb_ApplicationBeforeSaveProjectMapperClass(Cb_ApplicationBeforeSaveProject callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_ApplicationBeforeSaveProjectCallback(const wchar_t* name)
	{
		cb(name);
	}
};
class Cb_ApplicationAfterSaveProjectMapperClass
{
private:
public:
	Cb_ApplicationAfterSaveProject cb;
	Cb_ApplicationAfterSaveProjectMapperClass(Cb_ApplicationAfterSaveProject callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_ApplicationAfterSaveProjectCallback(void)
	{
		cb();
	}
};
class Cb_ApplicationCloseProjectQueryMapperClass
{
private:
public:
	Cb_ApplicationCloseProjectQuery cb;
	Cb_ApplicationCloseProjectQueryMapperClass(Cb_ApplicationCloseProjectQuery callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_ApplicationCloseProjectQueryCallback(bool& Allow)
	{
		cb(Allow);
	}
};
class Cb_ApplicationBeforeDestroyProjectMapperClass
{
private:
public:
	Cb_ApplicationBeforeDestroyProject cb;
	Cb_ApplicationBeforeDestroyProjectMapperClass(Cb_ApplicationBeforeDestroyProject callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_ApplicationBeforeDestroyProjectCallback(void)
	{
		cb();
	}
};
class Cb_ApplicationAfterLoadProjectMapperClass
{
private:
public:
	Cb_ApplicationAfterLoadProject cb;
	Cb_ApplicationAfterLoadProjectMapperClass(Cb_ApplicationAfterLoadProject callbackBindedInformation)
	{
		cb = callbackBindedInformation;
	}
	void DoCb_ApplicationAfterLoadProjectCallback(void)
	{
		cb();
	}
};

	class F8ProxyBase_Class
	{
	protected:
		void* Object;
	public:
		F8ProxyBase_Class(void* ClassObject)
		{
			Object = ClassObject;
		}
		~F8ProxyBase_Class()
		{
			if (Object)
				Generated_F8ProxyBaseDestroy(Object);
			Object = NULL;
		}
		void* GetObj()
		{
			return Object;
		}
	};
	class F8ObjectProxy_Class : public F8ProxyBase_Class
	{
	public:
		F8ObjectProxy_Class(void* ClassObject) : F8ProxyBase_Class(ClassObject)
		{
		}
		const wchar_t* GetProxyName()
		{
			return(Generated_F8ObjectProxyGetProxyName(Object));
		}
		F8GUID GetGUID()
		{
			return(Generated_F8ObjectProxyGetGUID(Object));
		}
		bool IsSameAs(F8ObjectProxy objectToCompare)
		{
			return(Generated_F8ObjectProxyIsSameAs(Object,objectToCompare->GetObj()));
		}
		const wchar_t* GetPluginData(int pluginID,const wchar_t* name)
		{
			return(Generated_F8ObjectProxyGetPluginData(Object,pluginID,name));
		}
		void SetPluginData(int pluginID,const wchar_t* name,const wchar_t* value)
		{
			Generated_F8ObjectProxySetPluginData(Object,pluginID,name,value);
		}
		int GetPluginBinaryDataSize(int pluginID,const wchar_t* name)
		{
			return(Generated_F8ObjectProxyGetPluginBinaryDataSize(Object,pluginID,name));
		}
		void GetPluginBinaryData(int pluginID,const wchar_t* name,int size,void* pData)
		{
			Generated_F8ObjectProxyGetPluginBinaryData(Object,pluginID,name,size,pData);
		}
		void SetPluginBinaryData(int pluginID,const wchar_t* name,int size,void* pData)
		{
			Generated_F8ObjectProxySetPluginBinaryData(Object,pluginID,name,size,pData);
		}
		void* RegisterCallbackOnBeforeDestruction(Cb_ObjectOnBeforeDestruction cb)
		{
			Cb_ObjectOnBeforeDestructionMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_ObjectOnBeforeDestructionMapperClass(cb);
			Generated_F8ObjectProxyRegisterCallbackOnBeforeDestruction(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnregisterCallbackOnBeforeDestruction(void* mapObjPointer)
		{
			Generated_F8ObjectProxyUnregisterCallbackOnBeforeDestruction(Object,mapObjPointer);
		}
	};

	class F8ModelProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8ModelProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		const wchar_t* GetName()
		{
			return(Generated_F8ModelProxyGetName(Object));
		}
		F8ModelTypeEnum GetModelType()
		{
			return(Generated_F8ModelProxyGetModelType(Object));
		}
	};

	class F8ThreeDModelProxy_Class : public F8ModelProxy_Class
	{
	public:
		F8ThreeDModelProxy_Class(void* ClassObject) : F8ModelProxy_Class(ClassObject)
		{
		}
	};

	class F8MD3ModelProxy_Class : public F8ModelProxy_Class
	{
	public:
		F8MD3ModelProxy_Class(void* ClassObject) : F8ModelProxy_Class(ClassObject)
		{
		}
	};

	class F8ObjectInstanceProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8ObjectInstanceProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		const wchar_t* GetName()
		{
			return(Generated_F8ObjectInstanceProxyGetName(Object));
		}
		const wchar_t* GetDescription()
		{
			return(Generated_F8ObjectInstanceProxyGetDescription(Object));
		}
		int GetID()
		{
			return(Generated_F8ObjectInstanceProxyGetID(Object));
		}
		bool GetDisplayedIn(int idx)
		{
			return(Generated_F8ObjectInstanceProxyGetDisplayedIn(Object,idx));
		}
		void SetDisplayedIn(int idx,bool value)
		{
			Generated_F8ObjectInstanceProxySetDisplayedIn(Object,idx,value);
		}
	};

	class F8ModelInstanceProxy_Class : public F8ObjectInstanceProxy_Class
	{
	public:
		F8ModelInstanceProxy_Class(void* ClassObject) : F8ObjectInstanceProxy_Class(ClassObject)
		{
		}
		F8dVec3 GetPosition()
		{
			return(Generated_F8ModelInstanceProxyGetPosition(Object));
		}
		void SetPosition(F8dVec3 value)
		{
			Generated_F8ModelInstanceProxySetPosition(Object,value);
		}
		double GetScale()
		{
			return(Generated_F8ModelInstanceProxyGetScale(Object));
		}
		F8dVec3 GetScaleFactor()
		{
			return(Generated_F8ModelInstanceProxyGetScaleFactor(Object));
		}
		double GetYawAngle()
		{
			return(Generated_F8ModelInstanceProxyGetYawAngle(Object));
		}
		void SetYawAngle(double value)
		{
			Generated_F8ModelInstanceProxySetYawAngle(Object,value);
		}
		double GetPitchAngle()
		{
			return(Generated_F8ModelInstanceProxyGetPitchAngle(Object));
		}
		void SetPitchAngle(double value)
		{
			Generated_F8ModelInstanceProxySetPitchAngle(Object,value);
		}
		double GetRollAngle()
		{
			return(Generated_F8ModelInstanceProxyGetRollAngle(Object));
		}
		void SetRollAngle(double value)
		{
			Generated_F8ModelInstanceProxySetRollAngle(Object,value);
		}
		F8dVec3 GetCenterPosition()
		{
			return(Generated_F8ModelInstanceProxyGetCenterPosition(Object));
		}
		double GetRadius()
		{
			return(Generated_F8ModelInstanceProxyGetRadius(Object));
		}
		int GetBoundingBoxesCount()
		{
			return(Generated_F8ModelInstanceProxyGetBoundingBoxesCount(Object));
		}
		F8BoundingBoxType GetBoundingBox(int idx)
		{
			return(Generated_F8ModelInstanceProxyGetBoundingBox(Object,idx));
		}
	};

	class F8ModelInstanceWithBasePositionProxy_Class : public F8ModelInstanceProxy_Class
	{
	public:
		F8ModelInstanceWithBasePositionProxy_Class(void* ClassObject) : F8ModelInstanceProxy_Class(ClassObject)
		{
		}
		F8dVec3 GetBasePosition3D()
		{
			return(Generated_F8ModelInstanceWithBasePositionProxyGetBasePosition3D(Object));
		}
		F8dVec2 GetBasePosition2D()
		{
			return(Generated_F8ModelInstanceWithBasePositionProxyGetBasePosition2D(Object));
		}
		void SetBasePosition2D(F8dVec2 value)
		{
			Generated_F8ModelInstanceWithBasePositionProxySetBasePosition2D(Object,value);
		}
		double GetDeltaH()
		{
			return(Generated_F8ModelInstanceWithBasePositionProxyGetDeltaH(Object));
		}
		void SetDeltaH(double value)
		{
			Generated_F8ModelInstanceWithBasePositionProxySetDeltaH(Object,value);
		}
	};

	class F8ModelInstanceWithoutBasePositionProxy_Class : public F8ModelInstanceProxy_Class
	{
	public:
		F8ModelInstanceWithoutBasePositionProxy_Class(void* ClassObject) : F8ModelInstanceProxy_Class(ClassObject)
		{
		}
	};

	class F8ThreeDModelInstanceProxy_Class : public F8ModelInstanceWithBasePositionProxy_Class
	{
	public:
		F8ThreeDModelInstanceProxy_Class(void* ClassObject) : F8ModelInstanceWithBasePositionProxy_Class(ClassObject)
		{
		}
		void ActivateCommand(const wchar_t* commandString,F8DoubleArrayType args)
		{
			Generated_F8ThreeDModelInstanceProxyActivateCommand(Object,commandString,args);
		}
		void DeactivateCommand(const wchar_t* commandString)
		{
			Generated_F8ThreeDModelInstanceProxyDeactivateCommand(Object,commandString);
		}
		F8TrafficLightsStateType GetTrafficLights()
		{
			return(Generated_F8ThreeDModelInstanceProxyGetTrafficLights(Object));
		}
		F8CarLightsStateType GetCarLights()
		{
			return(Generated_F8ThreeDModelInstanceProxyGetCarLights(Object));
		}
	};

	class F8SectionProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8SectionProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		const wchar_t* GetName()
		{
			return(Generated_F8SectionProxyGetName(Object));
		}
	};

	class F8RoadLaneProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8RoadLaneProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		double GetLength()
		{
			return(Generated_F8RoadLaneProxyGetLength(Object));
		}
		F8ObjectProxy GetParentRoad()
		{
			return std::make_shared<F8ObjectProxy_Class>(Generated_F8RoadLaneProxyGetParentRoad(Object));
		}
		bool GetIsForward()
		{
			return(Generated_F8RoadLaneProxyGetIsForward(Object));
		}
		F8dVec3 GetPosition(double distance,F8LaneDistanceEnum distanceType)
		{
			return(Generated_F8RoadLaneProxyGetPosition(Object,distance,distanceType));
		}
		F8dVec3 GetDirection(double distance,F8LaneDistanceEnum distanceType)
		{
			return(Generated_F8RoadLaneProxyGetDirection(Object,distance,distanceType));
		}
		int GetLaneID(double distance,F8LaneDistanceEnum distanceType)
		{
			return(Generated_F8RoadLaneProxyGetLaneID(Object,distance,distanceType));
		}
		double GetLaneWidth(double distance,F8LaneDistanceEnum distanceType)
		{
			return(Generated_F8RoadLaneProxyGetLaneWidth(Object,distance,distanceType));
		}
		F8RoadLaneInfoType GetCurveInformation(double distCurve,F8RoadLaneInfoOptionsType option)
		{
			return(Generated_F8RoadLaneProxyGetCurveInformation(Object,distCurve,option));
		}
		double ConvertDistance(double srcDistance,F8LaneDistanceEnum srcDistType,F8LaneDistanceEnum dstDistType)
		{
			return(Generated_F8RoadLaneProxyConvertDistance(Object,srcDistance,srcDistType,dstDistType));
		}
		bool CalculateDistanceFrom(F8dVec3 position,double& distance,double& offset)
		{
			return(Generated_F8RoadLaneProxyCalculateDistanceFrom(Object,position,distance,offset));
		}
	};

	class F8RoadDistanceFeatureProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8RoadDistanceFeatureProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		F8RoadDistanceFeatureTypeEnum GetFeatureType()
		{
			return(Generated_F8RoadDistanceFeatureProxyGetFeatureType(Object));
		}
		double GetDistance()
		{
			return(Generated_F8RoadDistanceFeatureProxyGetDistance(Object));
		}
	};

	class F8RoadSectionChangeProxy_Class : public F8RoadDistanceFeatureProxy_Class
	{
	public:
		F8RoadSectionChangeProxy_Class(void* ClassObject) : F8RoadDistanceFeatureProxy_Class(ClassObject)
		{
		}
		F8SectionProxy GetSection()
		{
			return std::make_shared<F8SectionProxy_Class>(Generated_F8RoadSectionChangeProxyGetSection(Object));
		}
	};

	class F8RoadSectionTransitionProxy_Class : public F8RoadDistanceFeatureProxy_Class
	{
	public:
		F8RoadSectionTransitionProxy_Class(void* ClassObject) : F8RoadDistanceFeatureProxy_Class(ClassObject)
		{
		}
	};

	class F8RoadDistanceFeatureWithLengthProxy_Class : public F8RoadDistanceFeatureProxy_Class
	{
	public:
		F8RoadDistanceFeatureWithLengthProxy_Class(void* ClassObject) : F8RoadDistanceFeatureProxy_Class(ClassObject)
		{
		}
		double GetLength()
		{
			return(Generated_F8RoadDistanceFeatureWithLengthProxyGetLength(Object));
		}
	};

	class F8RoadBridgeZoneProxy_Class : public F8RoadDistanceFeatureWithLengthProxy_Class
	{
	public:
		F8RoadBridgeZoneProxy_Class(void* ClassObject) : F8RoadDistanceFeatureWithLengthProxy_Class(ClassObject)
		{
		}
	};

	class F8RoadTunnelZoneProxy_Class : public F8RoadDistanceFeatureWithLengthProxy_Class
	{
	public:
		F8RoadTunnelZoneProxy_Class(void* ClassObject) : F8RoadDistanceFeatureWithLengthProxy_Class(ClassObject)
		{
		}
	};

	class F8RoadUnmodifiedTerrainZoneProxy_Class : public F8RoadDistanceFeatureWithLengthProxy_Class
	{
	public:
		F8RoadUnmodifiedTerrainZoneProxy_Class(void* ClassObject) : F8RoadDistanceFeatureWithLengthProxy_Class(ClassObject)
		{
		}
	};

	class F8RoadObstructionProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8RoadObstructionProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		const wchar_t* GetDescription()
		{
			return(Generated_F8RoadObstructionProxyGetDescription(Object));
		}
		double GetDistance()
		{
			return(Generated_F8RoadObstructionProxyGetDistance(Object));
		}
		double GetLength()
		{
			return(Generated_F8RoadObstructionProxyGetLength(Object));
		}
	};

	class F8RoadIntersectionInfoType_Class : public F8ProxyBase_Class
	{
	public:
		F8RoadIntersectionInfoType_Class(void* ClassObject) : F8ProxyBase_Class(ClassObject)
		{
		}
		int GetIntersectionIdx()
		{
			return(Generated_F8RoadIntersectionInfoTypeGetIntersectionIdx(Object));
		}
		double GetStartDistance()
		{
			return(Generated_F8RoadIntersectionInfoTypeGetStartDistance(Object));
		}
		double GetEndDistance()
		{
			return(Generated_F8RoadIntersectionInfoTypeGetEndDistance(Object));
		}
	};

	class F8RoadRampConnectionInfoType_Class : public F8ProxyBase_Class
	{
	public:
		F8RoadRampConnectionInfoType_Class(void* ClassObject) : F8ProxyBase_Class(ClassObject)
		{
		}
		double GetPosition()
		{
			return(Generated_F8RoadRampConnectionInfoTypeGetPosition(Object));
		}
		bool GetIsConnected()
		{
			return(Generated_F8RoadRampConnectionInfoTypeGetIsConnected(Object));
		}
		const wchar_t* GetConnectedRoadName()
		{
			return(Generated_F8RoadRampConnectionInfoTypeGetConnectedRoadName(Object));
		}
	};

	class F8RoadSectionInfoType_Class : public F8ProxyBase_Class
	{
	public:
		F8RoadSectionInfoType_Class(void* ClassObject) : F8ProxyBase_Class(ClassObject)
		{
		}
		F8SectionProxy GetSection1()
		{
			return std::make_shared<F8SectionProxy_Class>(Generated_F8RoadSectionInfoTypeGetSection1(Object));
		}
		F8SectionProxy GetSection2()
		{
			return std::make_shared<F8SectionProxy_Class>(Generated_F8RoadSectionInfoTypeGetSection2(Object));
		}
		double GetMergeRatio()
		{
			return(Generated_F8RoadSectionInfoTypeGetMergeRatio(Object));
		}
		bool GetInTunnel()
		{
			return(Generated_F8RoadSectionInfoTypeGetInTunnel(Object));
		}
		bool GetOnBridge()
		{
			return(Generated_F8RoadSectionInfoTypeGetOnBridge(Object));
		}
	};

	class F8RoadProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8RoadProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		int GetDistanceFeaturesCount()
		{
			return(Generated_F8RoadProxyGetDistanceFeaturesCount(Object));
		}
		F8RoadDistanceFeatureProxy GetDistanceFeature(int idx)
		{
			return std::make_shared<F8RoadDistanceFeatureProxy_Class>(Generated_F8RoadProxyGetDistanceFeature(Object,idx));
		}
		int GetObstructionsCount()
		{
			return(Generated_F8RoadProxyGetObstructionsCount(Object));
		}
		F8RoadObstructionProxy GetObstruction(int idx)
		{
			return std::make_shared<F8RoadObstructionProxy_Class>(Generated_F8RoadProxyGetObstruction(Object,idx));
		}
		const wchar_t* GetName()
		{
			return(Generated_F8RoadProxyGetName(Object));
		}
		double GetLength()
		{
			return(Generated_F8RoadProxyGetLength(Object));
		}
		F8dVec3 GetPositionAt(double distance)
		{
			return(Generated_F8RoadProxyGetPositionAt(Object,distance));
		}
		F8dVec3 GetDirectionAt(double distance)
		{
			return(Generated_F8RoadProxyGetDirectionAt(Object,distance));
		}
		double GetCurvatureAt(double distance)
		{
			return(Generated_F8RoadProxyGetCurvatureAt(Object,distance));
		}
		double GetSlopeAt(double distance)
		{
			return(Generated_F8RoadProxyGetSlopeAt(Object,distance));
		}
		double GetEdgeOffsetAt(double distance,bool isLeft)
		{
			return(Generated_F8RoadProxyGetEdgeOffsetAt(Object,distance,isLeft));
		}
		F8RoadSectionInfoType GetSectionInfoAt(double distance)
		{
			return std::make_shared<F8RoadSectionInfoType_Class>(Generated_F8RoadProxyGetSectionInfoAt(Object,distance));
		}
		int GetRoadLanesCount()
		{
			return(Generated_F8RoadProxyGetRoadLanesCount(Object));
		}
		F8RoadLaneProxy GetRoadLane(int idx)
		{
			return std::make_shared<F8RoadLaneProxy_Class>(Generated_F8RoadProxyGetRoadLane(Object,idx));
		}
		F8RoadLaneProxy SearchRoadLane(double distance,bool isForward,int lane)
		{
			return std::make_shared<F8RoadLaneProxy_Class>(Generated_F8RoadProxySearchRoadLane(Object,distance,isForward,lane));
		}
		int GetIntersectionInfosCount()
		{
			return(Generated_F8RoadProxyGetIntersectionInfosCount(Object));
		}
		F8RoadIntersectionInfoType GetIntersectionInfo(int idx)
		{
			return std::make_shared<F8RoadIntersectionInfoType_Class>(Generated_F8RoadProxyGetIntersectionInfo(Object,idx));
		}
		int GetRampConnectionInfosCount()
		{
			return(Generated_F8RoadProxyGetRampConnectionInfosCount(Object));
		}
		F8RoadRampConnectionInfoType GetRampConnectionInfo(int idx)
		{
			return std::make_shared<F8RoadRampConnectionInfoType_Class>(Generated_F8RoadProxyGetRampConnectionInfo(Object,idx));
		}
		bool CalculateDistanceFrom(F8dVec3 position,double& distance,double& offset)
		{
			return(Generated_F8RoadProxyCalculateDistanceFrom(Object,position,distance,offset));
		}
	};

	class F8OffroadStartPointProxy_Class : public F8ObjectInstanceProxy_Class
	{
	public:
		F8OffroadStartPointProxy_Class(void* ClassObject) : F8ObjectInstanceProxy_Class(ClassObject)
		{
		}
	};

	class F8IntersectionTerminalProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8IntersectionTerminalProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		const wchar_t* GetDescription()
		{
			return(Generated_F8IntersectionTerminalProxyGetDescription(Object));
		}
		int GetDrivePathsCount()
		{
			return(Generated_F8IntersectionTerminalProxyGetDrivePathsCount(Object));
		}
		F8IntersectionDrivePathProxy GetDrivePath(int idx)
		{
			return std::make_shared<F8IntersectionDrivePathProxy_Class>(Generated_F8IntersectionTerminalProxyGetDrivePath(Object,idx));
		}
		F8dVec3 GetRoadLanePosition()
		{
			return(Generated_F8IntersectionTerminalProxyGetRoadLanePosition(Object));
		}
		F8dVec3 GetRoadLaneDirection()
		{
			return(Generated_F8IntersectionTerminalProxyGetRoadLaneDirection(Object));
		}
	};

	class F8IntersectionEntryPointProxy_Class : public F8IntersectionTerminalProxy_Class
	{
	public:
		F8IntersectionEntryPointProxy_Class(void* ClassObject) : F8IntersectionTerminalProxy_Class(ClassObject)
		{
		}
	};

	class F8IntersectionExitPointProxy_Class : public F8IntersectionTerminalProxy_Class
	{
	public:
		F8IntersectionExitPointProxy_Class(void* ClassObject) : F8IntersectionTerminalProxy_Class(ClassObject)
		{
		}
	};

	class F8IntersectionLaneCurveProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8IntersectionLaneCurveProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		double GetLength()
		{
			return(Generated_F8IntersectionLaneCurveProxyGetLength(Object));
		}
		F8dVec3 GetPosition(double distance)
		{
			return(Generated_F8IntersectionLaneCurveProxyGetPosition(Object,distance));
		}
		F8dVec3 GetDirection(double distance)
		{
			return(Generated_F8IntersectionLaneCurveProxyGetDirection(Object,distance));
		}
	};

	class F8IntersectionDrivePathProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8IntersectionDrivePathProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		F8IntersectionEntryPointProxy GetEntryPoint()
		{
			return std::make_shared<F8IntersectionEntryPointProxy_Class>(Generated_F8IntersectionDrivePathProxyGetEntryPoint(Object));
		}
		F8IntersectionExitPointProxy GetExitPoint()
		{
			return std::make_shared<F8IntersectionExitPointProxy_Class>(Generated_F8IntersectionDrivePathProxyGetExitPoint(Object));
		}
		F8IntersectionLaneCurveProxy GetLaneCurve()
		{
			return std::make_shared<F8IntersectionLaneCurveProxy_Class>(Generated_F8IntersectionDrivePathProxyGetLaneCurve(Object));
		}
	};

	class F8TrafficSignalControllerProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8TrafficSignalControllerProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
	};

	class F8IntersectionProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8IntersectionProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		const wchar_t* GetName()
		{
			return(Generated_F8IntersectionProxyGetName(Object));
		}
		int GetDrivePathsCount()
		{
			return(Generated_F8IntersectionProxyGetDrivePathsCount(Object));
		}
		F8IntersectionDrivePathProxy GetDrivePath(int idx)
		{
			return std::make_shared<F8IntersectionDrivePathProxy_Class>(Generated_F8IntersectionProxyGetDrivePath(Object,idx));
		}
		int GetEntryPointsCount()
		{
			return(Generated_F8IntersectionProxyGetEntryPointsCount(Object));
		}
		F8IntersectionEntryPointProxy GetEntryPoint(int idx)
		{
			return std::make_shared<F8IntersectionEntryPointProxy_Class>(Generated_F8IntersectionProxyGetEntryPoint(Object,idx));
		}
		int GetExitPointsCount()
		{
			return(Generated_F8IntersectionProxyGetExitPointsCount(Object));
		}
		F8IntersectionExitPointProxy GetExitPoint(int idx)
		{
			return std::make_shared<F8IntersectionExitPointProxy_Class>(Generated_F8IntersectionProxyGetExitPoint(Object,idx));
		}
		F8TrafficSignalControllerProxy GetTrafficSignalController()
		{
			return std::make_shared<F8TrafficSignalControllerProxy_Class>(Generated_F8IntersectionProxyGetTrafficSignalController(Object));
		}
		F8TrafficControlTypeEnum GetTrafficControlType()
		{
			return(Generated_F8IntersectionProxyGetTrafficControlType(Object));
		}
	};

	class F8FlightPathProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8FlightPathProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		const wchar_t* GetName()
		{
			return(Generated_F8FlightPathProxyGetName(Object));
		}
		double GetLength(F8FlightPathDistanceEnum distType)
		{
			return(Generated_F8FlightPathProxyGetLength(Object,distType));
		}
		F8dVec3 GetPosition(double distance,F8FlightPathDistanceEnum distType)
		{
			return(Generated_F8FlightPathProxyGetPosition(Object,distance,distType));
		}
		F8dVec3 GetDirection(double distance,F8FlightPathDistanceEnum distType)
		{
			return(Generated_F8FlightPathProxyGetDirection(Object,distance,distType));
		}
	};

	class F8RoadSideObjectInstanceProxy_Class : public F8ObjectInstanceProxy_Class
	{
	public:
		F8RoadSideObjectInstanceProxy_Class(void* ClassObject) : F8ObjectInstanceProxy_Class(ClassObject)
		{
		}
		F8RoadProxy GetRoad()
		{
			return std::make_shared<F8RoadProxy_Class>(Generated_F8RoadSideObjectInstanceProxyGetRoad(Object));
		}
		double GetRoadDistance()
		{
			return(Generated_F8RoadSideObjectInstanceProxyGetRoadDistance(Object));
		}
		F8RoadObjectPlacementEnum GetSideOfRoad()
		{
			return(Generated_F8RoadSideObjectInstanceProxyGetSideOfRoad(Object));
		}
		double GetOffset()
		{
			return(Generated_F8RoadSideObjectInstanceProxyGetOffset(Object));
		}
		double GetDeltaH()
		{
			return(Generated_F8RoadSideObjectInstanceProxyGetDeltaH(Object));
		}
	};

	class F8RoadThreeDModelInstanceProxy_Class : public F8RoadSideObjectInstanceProxy_Class
	{
	public:
		F8RoadThreeDModelInstanceProxy_Class(void* ClassObject) : F8RoadSideObjectInstanceProxy_Class(ClassObject)
		{
		}
		F8ThreeDModelProxy GetThreeDModel()
		{
			return std::make_shared<F8ThreeDModelProxy_Class>(Generated_F8RoadThreeDModelInstanceProxyGetThreeDModel(Object));
		}
	};

	class F8ContextProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8ContextProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		const wchar_t* GetName()
		{
			return(Generated_F8ContextProxyGetName(Object));
		}
	};

	class F8ScriptProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8ScriptProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		const wchar_t* GetName()
		{
			return(Generated_F8ScriptProxyGetName(Object));
		}
	};

	class F8ScriptAnimationProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8ScriptAnimationProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		const wchar_t* GetName()
		{
			return(Generated_F8ScriptAnimationProxyGetName(Object));
		}
	};

	class F8EventProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8EventProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		const wchar_t* GetName()
		{
			return(Generated_F8EventProxyGetName(Object));
		}
	};

	class F8ScenarioProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8ScenarioProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		const wchar_t* GetName()
		{
			return(Generated_F8ScenarioProxyGetName(Object));
		}
		int GetEventsCount()
		{
			return(Generated_F8ScenarioProxyGetEventsCount(Object));
		}
		F8EventProxy GetEvent(int idx)
		{
			return std::make_shared<F8EventProxy_Class>(Generated_F8ScenarioProxyGetEvent(Object,idx));
		}
	};

	class F8CoordinateConverterProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8CoordinateConverterProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		F8HorizontalCoordinateConverterProxy GetHorizontalCoordinateConvertor()
		{
			return std::make_shared<F8HorizontalCoordinateConverterProxy_Class>(Generated_F8CoordinateConverterProxyGetHorizontalCoordinateConvertor(Object));
		}
	};

	class F8HorizontalCoordinateConverterProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8HorizontalCoordinateConverterProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		bool Convert(F8HcsConvertCoordinateEnum srcType,F8HcsConvertCoordinateEnum dstType,F8dVec2 srcValue,F8dVec2& dstValue,F8HcsConvertResultType& convRes)
		{
			return(Generated_F8HorizontalCoordinateConverterProxyConvert(Object,srcType,dstType,srcValue,dstValue,convRes));
		}
		bool ConvertArray(F8HcsConvertCoordinateEnum srcType,F8HcsConvertCoordinateEnum dstType,F8dVec2ArrayType srcValue,F8dVec2ArrayType dstValue,F8HcsConvertResultType& convRes)
		{
			return(Generated_F8HorizontalCoordinateConverterProxyConvertArray(Object,srcType,dstType,srcValue,dstValue,convRes));
		}
	};

	class F8ProjectProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8ProjectProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		int GetSectionsCount()
		{
			return(Generated_F8ProjectProxyGetSectionsCount(Object));
		}
		F8SectionProxy GetSection(int idx)
		{
			return std::make_shared<F8SectionProxy_Class>(Generated_F8ProjectProxyGetSection(Object,idx));
		}
		int GetRoadsCount()
		{
			return(Generated_F8ProjectProxyGetRoadsCount(Object));
		}
		F8RoadProxy GetRoad(int idx)
		{
			return std::make_shared<F8RoadProxy_Class>(Generated_F8ProjectProxyGetRoad(Object,idx));
		}
		int GetOffroadPointsCount()
		{
			return(Generated_F8ProjectProxyGetOffroadPointsCount(Object));
		}
		F8OffroadStartPointProxy GetOffroadPoint(int idx)
		{
			return std::make_shared<F8OffroadStartPointProxy_Class>(Generated_F8ProjectProxyGetOffroadPoint(Object,idx));
		}
		int GetIntersectionsCount()
		{
			return(Generated_F8ProjectProxyGetIntersectionsCount(Object));
		}
		F8IntersectionProxy GetIntersection(int idx)
		{
			return std::make_shared<F8IntersectionProxy_Class>(Generated_F8ProjectProxyGetIntersection(Object,idx));
		}
		int Get3DModelsCount()
		{
			return(Generated_F8ProjectProxyGet3DModelsCount(Object));
		}
		F8ThreeDModelProxy Get3DModel(int idx)
		{
			return std::make_shared<F8ThreeDModelProxy_Class>(Generated_F8ProjectProxyGet3DModel(Object,idx));
		}
		int Get3DModelInstancesCount()
		{
			return(Generated_F8ProjectProxyGet3DModelInstancesCount(Object));
		}
		F8ThreeDModelInstanceProxy Get3DModelInstance(int idx)
		{
			return std::make_shared<F8ThreeDModelInstanceProxy_Class>(Generated_F8ProjectProxyGet3DModelInstance(Object,idx));
		}
		int GetRoadModelInstancesCount()
		{
			return(Generated_F8ProjectProxyGetRoadModelInstancesCount(Object));
		}
		F8RoadThreeDModelInstanceProxy GetRoadModelInstance(int idx)
		{
			return std::make_shared<F8RoadThreeDModelInstanceProxy_Class>(Generated_F8ProjectProxyGetRoadModelInstance(Object,idx));
		}
		int GetMD3ModelsCount()
		{
			return(Generated_F8ProjectProxyGetMD3ModelsCount(Object));
		}
		F8MD3ModelProxy GetMD3Model(int idx)
		{
			return std::make_shared<F8MD3ModelProxy_Class>(Generated_F8ProjectProxyGetMD3Model(Object,idx));
		}
		int GetFlightPathsCount()
		{
			return(Generated_F8ProjectProxyGetFlightPathsCount(Object));
		}
		F8FlightPathProxy GetFlightPath(int idx)
		{
			return std::make_shared<F8FlightPathProxy_Class>(Generated_F8ProjectProxyGetFlightPath(Object,idx));
		}
		int GetScriptsCount()
		{
			return(Generated_F8ProjectProxyGetScriptsCount(Object));
		}
		F8ScriptProxy GetScript(int idx)
		{
			return std::make_shared<F8ScriptProxy_Class>(Generated_F8ProjectProxyGetScript(Object,idx));
		}
		int GetScriptAnimationsCount()
		{
			return(Generated_F8ProjectProxyGetScriptAnimationsCount(Object));
		}
		F8ScriptAnimationProxy GetScriptAnimation(int idx)
		{
			return std::make_shared<F8ScriptAnimationProxy_Class>(Generated_F8ProjectProxyGetScriptAnimation(Object,idx));
		}
		int GetScenariosCount()
		{
			return(Generated_F8ProjectProxyGetScenariosCount(Object));
		}
		F8ScenarioProxy GetScenario(int idx)
		{
			return std::make_shared<F8ScenarioProxy_Class>(Generated_F8ProjectProxyGetScenario(Object,idx));
		}
		int GetContextsCount()
		{
			return(Generated_F8ProjectProxyGetContextsCount(Object));
		}
		F8ContextProxy GetContext(int idx)
		{
			return std::make_shared<F8ContextProxy_Class>(Generated_F8ProjectProxyGetContext(Object,idx));
		}
		bool GetActualHeightAt(double x,double y,F8HeightSearchConditionsType conditions,double& height)
		{
			return(Generated_F8ProjectProxyGetActualHeightAt(Object,x,y,conditions,height));
		}
	};

	class F8TransientInstanceProxy_Class : public F8ModelInstanceWithoutBasePositionProxy_Class
	{
	public:
		F8TransientInstanceProxy_Class(void* ClassObject) : F8ModelInstanceWithoutBasePositionProxy_Class(ClassObject)
		{
		}
		F8TransientTypeEnum GetTransientType()
		{
			return(Generated_F8TransientInstanceProxyGetTransientType(Object));
		}
		double GetBodyPitchAngle()
		{
			return(Generated_F8TransientInstanceProxyGetBodyPitchAngle(Object));
		}
		void SetBodyPitchAngle(double value)
		{
			Generated_F8TransientInstanceProxySetBodyPitchAngle(Object,value);
		}
		double GetBodyRollAngle()
		{
			return(Generated_F8TransientInstanceProxyGetBodyRollAngle(Object));
		}
		void SetBodyRollAngle(double value)
		{
			Generated_F8TransientInstanceProxySetBodyRollAngle(Object,value);
		}
		F8CarLightsStateType GetCarLights()
		{
			return(Generated_F8TransientInstanceProxyGetCarLights(Object));
		}
		void SetCarLights(F8CarLightsStateType value)
		{
			Generated_F8TransientInstanceProxySetCarLights(Object,value);
		}
		void* RegisterCallbackOnBeforeCalculateMovement(Cb_TransientOnBeforeCalculateMovement cb)
		{
			Cb_TransientOnBeforeCalculateMovementMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_TransientOnBeforeCalculateMovementMapperClass(cb);
			Generated_F8TransientInstanceProxyRegisterCallbackOnBeforeCalculateMovement(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnregisterCallbackOnBeforeCalculateMovement(void* mapObjPointer)
		{
			Generated_F8TransientInstanceProxyUnregisterCallbackOnBeforeCalculateMovement(Object,mapObjPointer);
		}
		void* RegisterCallbackOnAfterCalculateMovement(Cb_TransientOnAfterCalculateMovement cb)
		{
			Cb_TransientOnAfterCalculateMovementMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_TransientOnAfterCalculateMovementMapperClass(cb);
			Generated_F8TransientInstanceProxyRegisterCallbackOnAfterCalculateMovement(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnregisterCallbackOnAfterCalculateMovement(void* mapObjPointer)
		{
			Generated_F8TransientInstanceProxyUnregisterCallbackOnAfterCalculateMovement(Object,mapObjPointer);
		}
		void* RegisterCallbackOnBeforeDoMovement(Cb_TransientOnBeforeDoMovement cb)
		{
			Cb_TransientOnBeforeDoMovementMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_TransientOnBeforeDoMovementMapperClass(cb);
			Generated_F8TransientInstanceProxyRegisterCallbackOnBeforeDoMovement(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnregisterCallbackOnBeforeDoMovement(void* mapObjPointer)
		{
			Generated_F8TransientInstanceProxyUnregisterCallbackOnBeforeDoMovement(Object,mapObjPointer);
		}
		void* RegisterCallbackOnAfterDoMovement(Cb_TransientOnAfterDoMovement cb)
		{
			Cb_TransientOnAfterDoMovementMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_TransientOnAfterDoMovementMapperClass(cb);
			Generated_F8TransientInstanceProxyRegisterCallbackOnAfterDoMovement(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnregisterCallbackOnAfterDoMovement(void* mapObjPointer)
		{
			Generated_F8TransientInstanceProxyUnregisterCallbackOnAfterDoMovement(Object,mapObjPointer);
		}
		bool IsSetCallbackOnCalculateMovement()
		{
			return(Generated_F8TransientInstanceProxyIsSetCallbackOnCalculateMovement(Object));
		}
		void* SetCallbackOnCalculateMovement(Cb_TransientOnCalculateMovement cb)
		{
			Cb_TransientOnCalculateMovementMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_TransientOnCalculateMovementMapperClass(cb);
			Generated_F8TransientInstanceProxySetCallbackOnCalculateMovement(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnsetCallbackOnCalculateMovement(void* mapObjPointer)
		{
			Generated_F8TransientInstanceProxyUnsetCallbackOnCalculateMovement(Object,mapObjPointer);
		}
		bool IsSetCallbackOnDoMovement()
		{
			return(Generated_F8TransientInstanceProxyIsSetCallbackOnDoMovement(Object));
		}
		void* SetCallbackOnDoMovement(Cb_TransientOnDoMovement cb)
		{
			Cb_TransientOnDoMovementMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_TransientOnDoMovementMapperClass(cb);
			Generated_F8TransientInstanceProxySetCallbackOnDoMovement(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnsetCallbackOnDoMovement(void* mapObjPointer)
		{
			Generated_F8TransientInstanceProxyUnsetCallbackOnDoMovement(Object,mapObjPointer);
		}
	};

	class F8TransientInstanceProxyList_Class : public F8ProxyBase_Class
	{
	public:
		F8TransientInstanceProxyList_Class(void* ClassObject) : F8ProxyBase_Class(ClassObject)
		{
		}
		int GetCount()
		{
			return(Generated_F8TransientInstanceProxyListGetCount(Object));
		}
		F8TransientInstanceProxy GetItem(int idx)
		{
			return std::make_shared<F8TransientInstanceProxy_Class>(Generated_F8TransientInstanceProxyListGetItem(Object,idx));
		}
	};

	class F8TransientMovingInstanceProxy_Class : public F8TransientInstanceProxy_Class
	{
	public:
		F8TransientMovingInstanceProxy_Class(void* ClassObject) : F8TransientInstanceProxy_Class(ClassObject)
		{
		}
	};

	class F8TransientCharacterInstanceProxy_Class : public F8TransientInstanceProxy_Class
	{
	public:
		F8TransientCharacterInstanceProxy_Class(void* ClassObject) : F8TransientInstanceProxy_Class(ClassObject)
		{
		}
	};

	class F8TransientCarInstanceProxy_Class : public F8TransientInstanceProxy_Class
	{
	public:
		F8TransientCarInstanceProxy_Class(void* ClassObject) : F8TransientInstanceProxy_Class(ClassObject)
		{
		}
		bool GetAutomaticControl()
		{
			return(Generated_F8TransientCarInstanceProxyGetAutomaticControl(Object));
		}
		double GetDistanceTravelled()
		{
			return(Generated_F8TransientCarInstanceProxyGetDistanceTravelled(Object));
		}
		double GetDistanceAlongDrivePath()
		{
			return(Generated_F8TransientCarInstanceProxyGetDistanceAlongDrivePath(Object));
		}
		double GetMass()
		{
			return(Generated_F8TransientCarInstanceProxyGetMass(Object));
		}
		bool GetEngineOn()
		{
			return(Generated_F8TransientCarInstanceProxyGetEngineOn(Object));
		}
		void SetEngineOn(bool value)
		{
			Generated_F8TransientCarInstanceProxySetEngineOn(Object,value);
		}
		double GetSteering()
		{
			return(Generated_F8TransientCarInstanceProxyGetSteering(Object));
		}
		void SetSteering(double value)
		{
			Generated_F8TransientCarInstanceProxySetSteering(Object,value);
		}
		double GetThrottle()
		{
			return(Generated_F8TransientCarInstanceProxyGetThrottle(Object));
		}
		void SetThrottle(double value)
		{
			Generated_F8TransientCarInstanceProxySetThrottle(Object,value);
		}
		double GetBrake()
		{
			return(Generated_F8TransientCarInstanceProxyGetBrake(Object));
		}
		void SetBrake(double value)
		{
			Generated_F8TransientCarInstanceProxySetBrake(Object,value);
		}
		double GetClutch()
		{
			return(Generated_F8TransientCarInstanceProxyGetClutch(Object));
		}
		void SetClutch(double value)
		{
			Generated_F8TransientCarInstanceProxySetClutch(Object,value);
		}
		void SetPositionInTraffic(F8dVec3 value)
		{
			Generated_F8TransientCarInstanceProxySetPositionInTraffic(Object,value);
		}
		F8dVec3 GetDirection()
		{
			return(Generated_F8TransientCarInstanceProxyGetDirection(Object));
		}
		void SetDirection(F8dVec3 value)
		{
			Generated_F8TransientCarInstanceProxySetDirection(Object,value);
		}
		F8dVec3 GetBodyDirection()
		{
			return(Generated_F8TransientCarInstanceProxyGetBodyDirection(Object));
		}
		void SetBodyDirection(F8dVec3 value)
		{
			Generated_F8TransientCarInstanceProxySetBodyDirection(Object,value);
		}
		double GetRPM()
		{
			return(Generated_F8TransientCarInstanceProxyGetRPM(Object));
		}
		void SetRPM(double value)
		{
			Generated_F8TransientCarInstanceProxySetRPM(Object,value);
		}
		F8dVec3 GetSpeedVector(F8SpeedUnitEnum speedUnit)
		{
			return(Generated_F8TransientCarInstanceProxyGetSpeedVector(Object,speedUnit));
		}
		double GetSpeed(F8SpeedUnitEnum speedUnit)
		{
			return(Generated_F8TransientCarInstanceProxyGetSpeed(Object,speedUnit));
		}
		void SetSpeed(double value,F8SpeedUnitEnum speedUnit)
		{
			Generated_F8TransientCarInstanceProxySetSpeed(Object,value,speedUnit);
		}
		double GetAppliedSteering()
		{
			return(Generated_F8TransientCarInstanceProxyGetAppliedSteering(Object));
		}
		double GetAppliedThrottle()
		{
			return(Generated_F8TransientCarInstanceProxyGetAppliedThrottle(Object));
		}
		double GetAppliedBrake()
		{
			return(Generated_F8TransientCarInstanceProxyGetAppliedBrake(Object));
		}
		double GetAppliedClutch()
		{
			return(Generated_F8TransientCarInstanceProxyGetAppliedClutch(Object));
		}
		F8dVec3 GetAcceleration()
		{
			return(Generated_F8TransientCarInstanceProxyGetAcceleration(Object));
		}
		F8dVec3 GetRotAcceleration()
		{
			return(Generated_F8TransientCarInstanceProxyGetRotAcceleration(Object));
		}
		F8dVec3 GetRotSpeed()
		{
			return(Generated_F8TransientCarInstanceProxyGetRotSpeed(Object));
		}
		F8dVec3 GetBodyRotAcceleration()
		{
			return(Generated_F8TransientCarInstanceProxyGetBodyRotAcceleration(Object));
		}
		F8dVec3 GetBodyRotSpeed()
		{
			return(Generated_F8TransientCarInstanceProxyGetBodyRotSpeed(Object));
		}
		F8RoadProxy GetCurrentRoad()
		{
			return std::make_shared<F8RoadProxy_Class>(Generated_F8TransientCarInstanceProxyGetCurrentRoad(Object));
		}
		F8RoadProxy GetLatestRoad()
		{
			return std::make_shared<F8RoadProxy_Class>(Generated_F8TransientCarInstanceProxyGetLatestRoad(Object));
		}
		F8IntersectionProxy GetCurrentIntersection()
		{
			return std::make_shared<F8IntersectionProxy_Class>(Generated_F8TransientCarInstanceProxyGetCurrentIntersection(Object));
		}
		F8RoadLaneProxy GetCurrentLane()
		{
			return std::make_shared<F8RoadLaneProxy_Class>(Generated_F8TransientCarInstanceProxyGetCurrentLane(Object));
		}
		double GetDistanceAlongRoad()
		{
			return(Generated_F8TransientCarInstanceProxyGetDistanceAlongRoad(Object));
		}
		double GetDistanceAlongLatestRoad()
		{
			return(Generated_F8TransientCarInstanceProxyGetDistanceAlongLatestRoad(Object));
		}
		int GetLaneNumber()
		{
			return(Generated_F8TransientCarInstanceProxyGetLaneNumber(Object));
		}
		double GetLaneWidth()
		{
			return(Generated_F8TransientCarInstanceProxyGetLaneWidth(Object));
		}
		F8dVec3 GetLaneDirection()
		{
			return(Generated_F8TransientCarInstanceProxyGetLaneDirection(Object));
		}
		double GetLaneCurvature()
		{
			return(Generated_F8TransientCarInstanceProxyGetLaneCurvature(Object));
		}
	};

	class F8MainDriverProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8MainDriverProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		F8TransientCarInstanceProxy GetCurrentCar()
		{
			return std::make_shared<F8TransientCarInstanceProxy_Class>(Generated_F8MainDriverProxyGetCurrentCar(Object));
		}
	};

	class F8DriverDataType_Class : public F8ProxyBase_Class
	{
	public:
		F8DriverDataType_Class(void* ClassObject) : F8ProxyBase_Class(ClassObject)
		{
		}
		F8RoadProxy GetRoad()
		{
			return std::make_shared<F8RoadProxy_Class>(Generated_F8DriverDataTypeGetRoad(Object));
		}
		void SetRoad(F8RoadProxy value)
		{
			Generated_F8DriverDataTypeSetRoad(Object,value->GetObj());
		}
		int GetLane()
		{
			return(Generated_F8DriverDataTypeGetLane(Object));
		}
		void SetLane(int value)
		{
			Generated_F8DriverDataTypeSetLane(Object,value);
		}
		int GetInitialSpeed()
		{
			return(Generated_F8DriverDataTypeGetInitialSpeed(Object));
		}
		void SetInitialSpeed(int value)
		{
			Generated_F8DriverDataTypeSetInitialSpeed(Object,value);
		}
		double GetPosition()
		{
			return(Generated_F8DriverDataTypeGetPosition(Object));
		}
		void SetPosition(double value)
		{
			Generated_F8DriverDataTypeSetPosition(Object,value);
		}
		bool GetGoForwards()
		{
			return(Generated_F8DriverDataTypeGetGoForwards(Object));
		}
		void SetGoForwards(bool value)
		{
			Generated_F8DriverDataTypeSetGoForwards(Object,value);
		}
		F8ThreeDModelProxy GetVehicle()
		{
			return std::make_shared<F8ThreeDModelProxy_Class>(Generated_F8DriverDataTypeGetVehicle(Object));
		}
		void SetVehicle(F8ThreeDModelProxy value)
		{
			Generated_F8DriverDataTypeSetVehicle(Object,value->GetObj());
		}
		F8ThreeDModelProxy GetTrailer()
		{
			return std::make_shared<F8ThreeDModelProxy_Class>(Generated_F8DriverDataTypeGetTrailer(Object));
		}
		void SetTrailer(F8ThreeDModelProxy value)
		{
			Generated_F8DriverDataTypeSetTrailer(Object,value->GetObj());
		}
	};

	class F8TrafficSimulationProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8TrafficSimulationProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		F8MainDriverProxy GetDriver()
		{
			return std::make_shared<F8MainDriverProxy_Class>(Generated_F8TrafficSimulationProxyGetDriver(Object));
		}
		F8TrafficStateEnum GetTrafficState()
		{
			return(Generated_F8TrafficSimulationProxyGetTrafficState(Object));
		}
		void SetTrafficState(F8TrafficStateEnum value)
		{
			Generated_F8TrafficSimulationProxySetTrafficState(Object,value);
		}
		F8TransientInstanceProxyList GetTransientVehiclesArround(double radius,F8dVec3 center)
		{
			return std::make_shared<F8TransientInstanceProxyList_Class>(Generated_F8TrafficSimulationProxyGetTransientVehiclesArround(Object,radius,center));
		}
		F8TransientInstanceProxyList GetTransientObjectsArround(double radius,F8dVec3 center)
		{
			return std::make_shared<F8TransientInstanceProxyList_Class>(Generated_F8TrafficSimulationProxyGetTransientObjectsArround(Object,radius,center));
		}
		void DeleteTransientObject(F8TransientInstanceProxy transientobject)
		{
			Generated_F8TrafficSimulationProxyDeleteTransientObject(Object,transientobject->GetObj());
		}
		void DeleteAllTransientObjects()
		{
			Generated_F8TrafficSimulationProxyDeleteAllTransientObjects(Object);
		}
		F8TransientMovingInstanceProxy AddNewTransient(F8ThreeDModelProxy model)
		{
			return std::make_shared<F8TransientMovingInstanceProxy_Class>(Generated_F8TrafficSimulationProxyAddNewTransient(Object,model->GetObj()));
		}
		F8TransientCarInstanceProxy AddNewVehicle(F8ThreeDModelProxy model,F8RoadProxy road,F8VehiclePlacementType param)
		{
			return std::make_shared<F8TransientCarInstanceProxy_Class>(Generated_F8TrafficSimulationProxyAddNewVehicle(Object,model->GetObj(),road->GetObj(),param));
		}
		void* RegisterEventSimulationStatusChanged(Cb_TrafficSimulationStatusChanged cb)
		{
			Cb_TrafficSimulationStatusChangedMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_TrafficSimulationStatusChangedMapperClass(cb);
			Generated_F8TrafficSimulationProxyRegisterEventSimulationStatusChanged(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventBeforeInitializeDriving(Cb_TrafficBeforeInitializeDriving cb)
		{
			Cb_TrafficBeforeInitializeDrivingMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_TrafficBeforeInitializeDrivingMapperClass(cb);
			Generated_F8TrafficSimulationProxyRegisterEventBeforeInitializeDriving(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventStartDrivingCar(Cb_TrafficStartDrivingCar cb)
		{
			Cb_TrafficStartDrivingCarMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_TrafficStartDrivingCarMapperClass(cb);
			Generated_F8TrafficSimulationProxyRegisterEventStartDrivingCar(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventStopDrivingCar(Cb_TrafficStopDrivingCar cb)
		{
			Cb_TrafficStopDrivingCarMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_TrafficStopDrivingCarMapperClass(cb);
			Generated_F8TrafficSimulationProxyRegisterEventStopDrivingCar(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnregisterEventSimulationStatusChanged(void* mapObjPointer)
		{
			Generated_F8TrafficSimulationProxyUnregisterEventSimulationStatusChanged(Object,mapObjPointer);
		}
		void UnregisterEventBeforeInitializeDriving(void* mapObjPointer)
		{
			Generated_F8TrafficSimulationProxyUnregisterEventBeforeInitializeDriving(Object,mapObjPointer);
		}
		void UnregisterEventStartDrivingCar(void* mapObjPointer)
		{
			Generated_F8TrafficSimulationProxyUnregisterEventStartDrivingCar(Object,mapObjPointer);
		}
		void UnregisterEventStopDrivingCar(void* mapObjPointer)
		{
			Generated_F8TrafficSimulationProxyUnregisterEventStopDrivingCar(Object,mapObjPointer);
		}
		void* RegisterEventTransientWorldBeforeMove(Cb_TrafficTransientWorldBeforeMove cb)
		{
			Cb_TrafficTransientWorldBeforeMoveMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_TrafficTransientWorldBeforeMoveMapperClass(cb);
			Generated_F8TrafficSimulationProxyRegisterEventTransientWorldBeforeMove(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventTransientWorldAfterMove(Cb_TrafficTransientWorldAfterMove cb)
		{
			Cb_TrafficTransientWorldAfterMoveMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_TrafficTransientWorldAfterMoveMapperClass(cb);
			Generated_F8TrafficSimulationProxyRegisterEventTransientWorldAfterMove(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventTransientWorldMove(Cb_TrafficTransientWorldMove cb)
		{
			Cb_TrafficTransientWorldMoveMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_TrafficTransientWorldMoveMapperClass(cb);
			Generated_F8TrafficSimulationProxyRegisterEventTransientWorldMove(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventNewTransientObject(Cb_TrafficNewTransientObject cb)
		{
			Cb_TrafficNewTransientObjectMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_TrafficNewTransientObjectMapperClass(cb);
			Generated_F8TrafficSimulationProxyRegisterEventNewTransientObject(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventTransientObjectDeleted(Cb_TrafficTransientObjectDeleted cb)
		{
			Cb_TrafficTransientObjectDeletedMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_TrafficTransientObjectDeletedMapperClass(cb);
			Generated_F8TrafficSimulationProxyRegisterEventTransientObjectDeleted(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventCacheSimulationData(Cb_TrafficCacheSimulationData cb)
		{
			Cb_TrafficCacheSimulationDataMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_TrafficCacheSimulationDataMapperClass(cb);
			Generated_F8TrafficSimulationProxyRegisterEventCacheSimulationData(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnregisterEventTransientWorldBeforeMove(void* mapObjPointer)
		{
			Generated_F8TrafficSimulationProxyUnregisterEventTransientWorldBeforeMove(Object,mapObjPointer);
		}
		void UnregisterEventTransientWorldAfterMove(void* mapObjPointer)
		{
			Generated_F8TrafficSimulationProxyUnregisterEventTransientWorldAfterMove(Object,mapObjPointer);
		}
		void UnregisterEventTransientWorldMove(void* mapObjPointer)
		{
			Generated_F8TrafficSimulationProxyUnregisterEventTransientWorldMove(Object,mapObjPointer);
		}
		void UnregisterEventNewTransientObject(void* mapObjPointer)
		{
			Generated_F8TrafficSimulationProxyUnregisterEventNewTransientObject(Object,mapObjPointer);
		}
		void UnregisterEventTransientObjectDeleted(void* mapObjPointer)
		{
			Generated_F8TrafficSimulationProxyUnregisterEventTransientObjectDeleted(Object,mapObjPointer);
		}
		void UnregisterEventCacheSimulationData(void* mapObjPointer)
		{
			Generated_F8TrafficSimulationProxyUnregisterEventCacheSimulationData(Object,mapObjPointer);
		}
	};

	class F8VisualOptionsRootProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8VisualOptionsRootProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		bool GetDisplayOption(F8VisualOptionDisplayTypeEnum typeOfDisplayOption)
		{
			return(Generated_F8VisualOptionsRootProxyGetDisplayOption(Object,typeOfDisplayOption));
		}
		void SetDisplayOption(F8VisualOptionDisplayTypeEnum typeOfDisplayOption,bool value)
		{
			Generated_F8VisualOptionsRootProxySetDisplayOption(Object,typeOfDisplayOption,value);
		}
	};

	class F8CurrentScriptInfoType_Class : public F8ProxyBase_Class
	{
	public:
		F8CurrentScriptInfoType_Class(void* ClassObject) : F8ProxyBase_Class(ClassObject)
		{
		}
		bool GetIsExecuting()
		{
			return(Generated_F8CurrentScriptInfoTypeGetIsExecuting(Object));
		}
		bool GetIsAnimation()
		{
			return(Generated_F8CurrentScriptInfoTypeGetIsAnimation(Object));
		}
		F8ScriptProxy GetScript()
		{
			return std::make_shared<F8ScriptProxy_Class>(Generated_F8CurrentScriptInfoTypeGetScript(Object));
		}
		F8ScriptAnimationProxy GetScriptAnimation()
		{
			return std::make_shared<F8ScriptAnimationProxy_Class>(Generated_F8CurrentScriptInfoTypeGetScriptAnimation(Object));
		}
		double GetTime()
		{
			return(Generated_F8CurrentScriptInfoTypeGetTime(Object));
		}
	};

	class F8SimulationCoreProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8SimulationCoreProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		F8TrafficSimulationProxy GetTrafficSimulation()
		{
			return std::make_shared<F8TrafficSimulationProxy_Class>(Generated_F8SimulationCoreProxyGetTrafficSimulation(Object));
		}
		F8EnvironmentStateEnum GetEnvironmentState()
		{
			return(Generated_F8SimulationCoreProxyGetEnvironmentState(Object));
		}
		void SetEnvironmentState(F8EnvironmentStateEnum value)
		{
			Generated_F8SimulationCoreProxySetEnvironmentState(Object,value);
		}
		void ApplyContext(F8ContextProxy context)
		{
			Generated_F8SimulationCoreProxyApplyContext(Object,context->GetObj());
		}
		F8VisualOptionsRootProxy GetVisualOptionsRoot()
		{
			return std::make_shared<F8VisualOptionsRootProxy_Class>(Generated_F8SimulationCoreProxyGetVisualOptionsRoot(Object));
		}
		void ExecuteScript(F8ScriptProxy script,bool repeatIt)
		{
			Generated_F8SimulationCoreProxyExecuteScript(Object,script->GetObj(),repeatIt);
		}
		void ExecuteScriptAnimation(F8ScriptAnimationProxy animation,bool repeatIt)
		{
			Generated_F8SimulationCoreProxyExecuteScriptAnimation(Object,animation->GetObj(),repeatIt);
		}
		F8ScriptStatusEnum GetScriptStatus()
		{
			return(Generated_F8SimulationCoreProxyGetScriptStatus(Object));
		}
		void SetScriptStatus(F8ScriptStatusEnum value)
		{
			Generated_F8SimulationCoreProxySetScriptStatus(Object,value);
		}
		F8CurrentScriptInfoType GetCurrentScriptInfo()
		{
			return std::make_shared<F8CurrentScriptInfoType_Class>(Generated_F8SimulationCoreProxyGetCurrentScriptInfo(Object));
		}
		void StartScenario(F8ScenarioProxy scenario)
		{
			Generated_F8SimulationCoreProxyStartScenario(Object,scenario->GetObj());
		}
		void StopAllScenarios()
		{
			Generated_F8SimulationCoreProxyStopAllScenarios(Object);
		}
		void ClearUserVariables()
		{
			Generated_F8SimulationCoreProxyClearUserVariables(Object);
		}
		F8UserVariables GetUserVariables()
		{
			return(Generated_F8SimulationCoreProxyGetUserVariables(Object));
		}
		void SetUserVariables(F8UserVariables values)
		{
			Generated_F8SimulationCoreProxySetUserVariables(Object,values);
		}
		double GetUserVariable(int idx)
		{
			return(Generated_F8SimulationCoreProxyGetUserVariable(Object,idx));
		}
		void SetUserVariable(int idx,double value)
		{
			Generated_F8SimulationCoreProxySetUserVariable(Object,idx,value);
		}
		void* RegisterEventApplyContext(Cb_SimulationApplyContext cb)
		{
			Cb_SimulationApplyContextMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_SimulationApplyContextMapperClass(cb);
			Generated_F8SimulationCoreProxyRegisterEventApplyContext(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventStartEnvironment(Cb_SimulationStartEnvironment cb)
		{
			Cb_SimulationStartEnvironmentMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_SimulationStartEnvironmentMapperClass(cb);
			Generated_F8SimulationCoreProxyRegisterEventStartEnvironment(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventStopEnvironment(Cb_SimulationStopEnvironment cb)
		{
			Cb_SimulationStopEnvironmentMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_SimulationStopEnvironmentMapperClass(cb);
			Generated_F8SimulationCoreProxyRegisterEventStopEnvironment(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventStartScenario(Cb_SimulationStartScenario cb)
		{
			Cb_SimulationStartScenarioMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_SimulationStartScenarioMapperClass(cb);
			Generated_F8SimulationCoreProxyRegisterEventStartScenario(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventStopScenario(Cb_SimulationStopScenario cb)
		{
			Cb_SimulationStopScenarioMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_SimulationStopScenarioMapperClass(cb);
			Generated_F8SimulationCoreProxyRegisterEventStopScenario(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventStartEvent(Cb_SimulationStartEvent cb)
		{
			Cb_SimulationStartEventMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_SimulationStartEventMapperClass(cb);
			Generated_F8SimulationCoreProxyRegisterEventStartEvent(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventStopEvent(Cb_SimulationStopEvent cb)
		{
			Cb_SimulationStopEventMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_SimulationStopEventMapperClass(cb);
			Generated_F8SimulationCoreProxyRegisterEventStopEvent(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventStartScript(Cb_SimulationStartScript cb)
		{
			Cb_SimulationStartScriptMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_SimulationStartScriptMapperClass(cb);
			Generated_F8SimulationCoreProxyRegisterEventStartScript(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventStopScript(Cb_SimulationStopScript cb)
		{
			Cb_SimulationStopScriptMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_SimulationStopScriptMapperClass(cb);
			Generated_F8SimulationCoreProxyRegisterEventStopScript(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnregisterEventApplyContext(void* mapObjPointer)
		{
			Generated_F8SimulationCoreProxyUnregisterEventApplyContext(Object,mapObjPointer);
		}
		void UnregisterEventStartEnvironment(void* mapObjPointer)
		{
			Generated_F8SimulationCoreProxyUnregisterEventStartEnvironment(Object,mapObjPointer);
		}
		void UnregisterEventStopEnvironment(void* mapObjPointer)
		{
			Generated_F8SimulationCoreProxyUnregisterEventStopEnvironment(Object,mapObjPointer);
		}
		void UnregisterEventStartScenario(void* mapObjPointer)
		{
			Generated_F8SimulationCoreProxyUnregisterEventStartScenario(Object,mapObjPointer);
		}
		void UnregisterEventStopScenario(void* mapObjPointer)
		{
			Generated_F8SimulationCoreProxyUnregisterEventStopScenario(Object,mapObjPointer);
		}
		void UnregisterEventStartEvent(void* mapObjPointer)
		{
			Generated_F8SimulationCoreProxyUnregisterEventStartEvent(Object,mapObjPointer);
		}
		void UnregisterEventStopEvent(void* mapObjPointer)
		{
			Generated_F8SimulationCoreProxyUnregisterEventStopEvent(Object,mapObjPointer);
		}
		void UnregisterEventStartScript(void* mapObjPointer)
		{
			Generated_F8SimulationCoreProxyUnregisterEventStartScript(Object,mapObjPointer);
		}
		void UnregisterEventStopScript(void* mapObjPointer)
		{
			Generated_F8SimulationCoreProxyUnregisterEventStopScript(Object,mapObjPointer);
		}
	};

	class F8OpenGLProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8OpenGLProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		F8iVec2 GetSize()
		{
			return(Generated_F8OpenGLProxyGetSize(Object));
		}
		F8OpenGLViewPortType GetRenderingViewPort()
		{
			return(Generated_F8OpenGLProxyGetRenderingViewPort(Object));
		}
		F8dMat4 GetProjectionMatrix()
		{
			return(Generated_F8OpenGLProxyGetProjectionMatrix(Object));
		}
		F8dMat4 GetModelViewMatrix()
		{
			return(Generated_F8OpenGLProxyGetModelViewMatrix(Object));
		}
		void SetFocus()
		{
			Generated_F8OpenGLProxySetFocus(Object);
		}
		void Changed()
		{
			Generated_F8OpenGLProxyChanged(Object);
		}
	};

	class F8MainOpenGLProxy_Class : public F8OpenGLProxy_Class
	{
	public:
		F8MainOpenGLProxy_Class(void* ClassObject) : F8OpenGLProxy_Class(ClassObject)
		{
		}
		void* RegisterEventOpenGLBeforePaint(Cb_MainFormOpenGLBeforePaint cb)
		{
			Cb_MainFormOpenGLBeforePaintMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_MainFormOpenGLBeforePaintMapperClass(cb);
			Generated_F8MainOpenGLProxyRegisterEventOpenGLBeforePaint(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventOpenGLAfterDrawScene(Cb_MainFormOpenGLAfterDrawScene cb)
		{
			Cb_MainFormOpenGLAfterDrawSceneMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_MainFormOpenGLAfterDrawSceneMapperClass(cb);
			Generated_F8MainOpenGLProxyRegisterEventOpenGLAfterDrawScene(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventOpenGLAfterPaint(Cb_MainFormOpenGLAfterPaint cb)
		{
			Cb_MainFormOpenGLAfterPaintMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_MainFormOpenGLAfterPaintMapperClass(cb);
			Generated_F8MainOpenGLProxyRegisterEventOpenGLAfterPaint(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnregisterEventOpenGLBeforePaint(void* mapObjPointer)
		{
			Generated_F8MainOpenGLProxyUnregisterEventOpenGLBeforePaint(Object,mapObjPointer);
		}
		void UnregisterEventOpenGLAfterDrawScene(void* mapObjPointer)
		{
			Generated_F8MainOpenGLProxyUnregisterEventOpenGLAfterDrawScene(Object,mapObjPointer);
		}
		void UnregisterEventOpenGLAfterPaint(void* mapObjPointer)
		{
			Generated_F8MainOpenGLProxyUnregisterEventOpenGLAfterPaint(Object,mapObjPointer);
		}
		void* RegisterEventOpenGLMouseEnter(Cb_MainFormOpenGLMouseEnter cb)
		{
			Cb_MainFormOpenGLMouseEnterMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_MainFormOpenGLMouseEnterMapperClass(cb);
			Generated_F8MainOpenGLProxyRegisterEventOpenGLMouseEnter(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventOpenGLMouseLeave(Cb_MainFormOpenGLMouseLeave cb)
		{
			Cb_MainFormOpenGLMouseLeaveMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_MainFormOpenGLMouseLeaveMapperClass(cb);
			Generated_F8MainOpenGLProxyRegisterEventOpenGLMouseLeave(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventOpenGLMouseUp(Cb_MainFormOpenGLMouseUp cb)
		{
			Cb_MainFormOpenGLMouseUpMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_MainFormOpenGLMouseUpMapperClass(cb);
			Generated_F8MainOpenGLProxyRegisterEventOpenGLMouseUp(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventOpenGLMouseDown(Cb_MainFormOpenGLMouseDown cb)
		{
			Cb_MainFormOpenGLMouseDownMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_MainFormOpenGLMouseDownMapperClass(cb);
			Generated_F8MainOpenGLProxyRegisterEventOpenGLMouseDown(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventOpenGLMouseMove(Cb_MainFormOpenGLMouseMove cb)
		{
			Cb_MainFormOpenGLMouseMoveMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_MainFormOpenGLMouseMoveMapperClass(cb);
			Generated_F8MainOpenGLProxyRegisterEventOpenGLMouseMove(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventOpenGLMouseWheel(Cb_MainFormOpenGLMouseWheel cb)
		{
			Cb_MainFormOpenGLMouseWheelMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_MainFormOpenGLMouseWheelMapperClass(cb);
			Generated_F8MainOpenGLProxyRegisterEventOpenGLMouseWheel(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnregisterEventOpenGLMouseEnter(void* mapObjPointer)
		{
			Generated_F8MainOpenGLProxyUnregisterEventOpenGLMouseEnter(Object,mapObjPointer);
		}
		void UnregisterEventOpenGLMouseLeave(void* mapObjPointer)
		{
			Generated_F8MainOpenGLProxyUnregisterEventOpenGLMouseLeave(Object,mapObjPointer);
		}
		void UnregisterEventOpenGLMouseUp(void* mapObjPointer)
		{
			Generated_F8MainOpenGLProxyUnregisterEventOpenGLMouseUp(Object,mapObjPointer);
		}
		void UnregisterEventOpenGLMouseDown(void* mapObjPointer)
		{
			Generated_F8MainOpenGLProxyUnregisterEventOpenGLMouseDown(Object,mapObjPointer);
		}
		void UnregisterEventOpenGLMouseMove(void* mapObjPointer)
		{
			Generated_F8MainOpenGLProxyUnregisterEventOpenGLMouseMove(Object,mapObjPointer);
		}
		void UnregisterEventOpenGLMouseWheel(void* mapObjPointer)
		{
			Generated_F8MainOpenGLProxyUnregisterEventOpenGLMouseWheel(Object,mapObjPointer);
		}
	};

	class F8MainRibbonControlProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8MainRibbonControlProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		const wchar_t* GetName()
		{
			return(Generated_F8MainRibbonControlProxyGetName(Object));
		}
		F8MainRibbonControlTypeEnum GetControlType()
		{
			return(Generated_F8MainRibbonControlProxyGetControlType(Object));
		}
		bool GetEnabled()
		{
			return(Generated_F8MainRibbonControlProxyGetEnabled(Object));
		}
		void SetEnabled(bool value)
		{
			Generated_F8MainRibbonControlProxySetEnabled(Object,value);
		}
		bool GetVisible()
		{
			return(Generated_F8MainRibbonControlProxyGetVisible(Object));
		}
		void SetVisible(bool value)
		{
			Generated_F8MainRibbonControlProxySetVisible(Object,value);
		}
		int GetLeft()
		{
			return(Generated_F8MainRibbonControlProxyGetLeft(Object));
		}
		void SetLeft(int value)
		{
			Generated_F8MainRibbonControlProxySetLeft(Object,value);
		}
		int GetTop()
		{
			return(Generated_F8MainRibbonControlProxyGetTop(Object));
		}
		void SetTop(int value)
		{
			Generated_F8MainRibbonControlProxySetTop(Object,value);
		}
		int GetWidth()
		{
			return(Generated_F8MainRibbonControlProxyGetWidth(Object));
		}
		void SetWidth(int value)
		{
			Generated_F8MainRibbonControlProxySetWidth(Object,value);
		}
		int GetHeight()
		{
			return(Generated_F8MainRibbonControlProxyGetHeight(Object));
		}
		void SetHeight(int value)
		{
			Generated_F8MainRibbonControlProxySetHeight(Object,value);
		}
	};

	class F8MainRibbonButtonProxy_Class : public F8MainRibbonControlProxy_Class
	{
	public:
		F8MainRibbonButtonProxy_Class(void* ClassObject) : F8MainRibbonControlProxy_Class(ClassObject)
		{
		}
		const wchar_t* GetCaption()
		{
			return(Generated_F8MainRibbonButtonProxyGetCaption(Object));
		}
		void SetCaption(const wchar_t* value)
		{
			Generated_F8MainRibbonButtonProxySetCaption(Object,value);
		}
		bool IsSetCallbackOnClick()
		{
			return(Generated_F8MainRibbonButtonProxyIsSetCallbackOnClick(Object));
		}
		void* SetCallbackOnClick(Cb_RibbonMenuItemOnClick cb)
		{
			Cb_RibbonMenuItemOnClickMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_RibbonMenuItemOnClickMapperClass(cb);
			Generated_F8MainRibbonButtonProxySetCallbackOnClick(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnsetCallbackOnClick(void* mapObjPointer)
		{
			Generated_F8MainRibbonButtonProxyUnsetCallbackOnClick(Object,mapObjPointer);
		}
	};

	class F8MainRibbonEditProxy_Class : public F8MainRibbonControlProxy_Class
	{
	public:
		F8MainRibbonEditProxy_Class(void* ClassObject) : F8MainRibbonControlProxy_Class(ClassObject)
		{
		}
		const wchar_t* GetText()
		{
			return(Generated_F8MainRibbonEditProxyGetText(Object));
		}
		void SetText(const wchar_t* value)
		{
			Generated_F8MainRibbonEditProxySetText(Object,value);
		}
		bool IsSetCallbackOnChange()
		{
			return(Generated_F8MainRibbonEditProxyIsSetCallbackOnChange(Object));
		}
		void* SetCallbackOnChange(Cb_RibbonMenuItemOnChange cb)
		{
			Cb_RibbonMenuItemOnChangeMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_RibbonMenuItemOnChangeMapperClass(cb);
			Generated_F8MainRibbonEditProxySetCallbackOnChange(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnsetCallbackOnChange(void* mapObjPointer)
		{
			Generated_F8MainRibbonEditProxyUnsetCallbackOnChange(Object,mapObjPointer);
		}
	};

	class F8MainRibbonLabelProxy_Class : public F8MainRibbonControlProxy_Class
	{
	public:
		F8MainRibbonLabelProxy_Class(void* ClassObject) : F8MainRibbonControlProxy_Class(ClassObject)
		{
		}
		const wchar_t* GetCaption()
		{
			return(Generated_F8MainRibbonLabelProxyGetCaption(Object));
		}
		void SetCaption(const wchar_t* value)
		{
			Generated_F8MainRibbonLabelProxySetCaption(Object,value);
		}
	};

	class F8MainRibbonCheckBoxProxy_Class : public F8MainRibbonControlProxy_Class
	{
	public:
		F8MainRibbonCheckBoxProxy_Class(void* ClassObject) : F8MainRibbonControlProxy_Class(ClassObject)
		{
		}
		const wchar_t* GetCaption()
		{
			return(Generated_F8MainRibbonCheckBoxProxyGetCaption(Object));
		}
		void SetCaption(const wchar_t* value)
		{
			Generated_F8MainRibbonCheckBoxProxySetCaption(Object,value);
		}
		bool GetChecked()
		{
			return(Generated_F8MainRibbonCheckBoxProxyGetChecked(Object));
		}
		void SetChecked(bool value)
		{
			Generated_F8MainRibbonCheckBoxProxySetChecked(Object,value);
		}
		bool IsSetCallbackOnClick()
		{
			return(Generated_F8MainRibbonCheckBoxProxyIsSetCallbackOnClick(Object));
		}
		void* SetCallbackOnClick(Cb_RibbonMenuItemOnClick cb)
		{
			Cb_RibbonMenuItemOnClickMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_RibbonMenuItemOnClickMapperClass(cb);
			Generated_F8MainRibbonCheckBoxProxySetCallbackOnClick(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnsetCallbackOnClick(void* mapObjPointer)
		{
			Generated_F8MainRibbonCheckBoxProxyUnsetCallbackOnClick(Object,mapObjPointer);
		}
	};

	class F8MainRibbonGroupProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8MainRibbonGroupProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		F8MainRibbonButtonProxy CreateButton(const wchar_t* aControlName)
		{
			return std::make_shared<F8MainRibbonButtonProxy_Class>(Generated_F8MainRibbonGroupProxyCreateButton(Object,aControlName));
		}
		F8MainRibbonEditProxy CreateEdit(const wchar_t* aControlName)
		{
			return std::make_shared<F8MainRibbonEditProxy_Class>(Generated_F8MainRibbonGroupProxyCreateEdit(Object,aControlName));
		}
		F8MainRibbonCheckBoxProxy CreateCheckBox(const wchar_t* aControlName)
		{
			return std::make_shared<F8MainRibbonCheckBoxProxy_Class>(Generated_F8MainRibbonGroupProxyCreateCheckBox(Object,aControlName));
		}
		F8MainRibbonLabelProxy CreateLabel(const wchar_t* aControlName)
		{
			return std::make_shared<F8MainRibbonLabelProxy_Class>(Generated_F8MainRibbonGroupProxyCreateLabel(Object,aControlName));
		}
		F8MainRibbonPanelProxy CreatePanel(const wchar_t* aControlName)
		{
			return std::make_shared<F8MainRibbonPanelProxy_Class>(Generated_F8MainRibbonGroupProxyCreatePanel(Object,aControlName));
		}
		F8MainRibbonControlProxy GetControlByName(const wchar_t* aName)
		{
			return std::make_shared<F8MainRibbonControlProxy_Class>(Generated_F8MainRibbonGroupProxyGetControlByName(Object,aName));
		}
		void DeleteControl(F8MainRibbonControlProxy aControl)
		{
			Generated_F8MainRibbonGroupProxyDeleteControl(Object,aControl->GetObj());
		}
		int GetRibbonControlsCount()
		{
			return(Generated_F8MainRibbonGroupProxyGetRibbonControlsCount(Object));
		}
		F8MainRibbonControlProxy GetRibbonControl(int idx)
		{
			return std::make_shared<F8MainRibbonControlProxy_Class>(Generated_F8MainRibbonGroupProxyGetRibbonControl(Object,idx));
		}
		const wchar_t* GetName()
		{
			return(Generated_F8MainRibbonGroupProxyGetName(Object));
		}
		const wchar_t* GetCaption()
		{
			return(Generated_F8MainRibbonGroupProxyGetCaption(Object));
		}
		void SetCaption(const wchar_t* value)
		{
			Generated_F8MainRibbonGroupProxySetCaption(Object,value);
		}
		bool GetEnabled()
		{
			return(Generated_F8MainRibbonGroupProxyGetEnabled(Object));
		}
		bool GetVisible()
		{
			return(Generated_F8MainRibbonGroupProxyGetVisible(Object));
		}
	};

	class F8MainRibbonPanelProxy_Class : public F8MainRibbonControlProxy_Class
	{
	public:
		F8MainRibbonPanelProxy_Class(void* ClassObject) : F8MainRibbonControlProxy_Class(ClassObject)
		{
		}
		F8MainRibbonButtonProxy CreateButton(const wchar_t* aControlName)
		{
			return std::make_shared<F8MainRibbonButtonProxy_Class>(Generated_F8MainRibbonPanelProxyCreateButton(Object,aControlName));
		}
		F8MainRibbonEditProxy CreateEdit(const wchar_t* aControlName)
		{
			return std::make_shared<F8MainRibbonEditProxy_Class>(Generated_F8MainRibbonPanelProxyCreateEdit(Object,aControlName));
		}
		F8MainRibbonCheckBoxProxy CreateCheckBox(const wchar_t* aControlName)
		{
			return std::make_shared<F8MainRibbonCheckBoxProxy_Class>(Generated_F8MainRibbonPanelProxyCreateCheckBox(Object,aControlName));
		}
		F8MainRibbonLabelProxy CreateLabel(const wchar_t* aControlName)
		{
			return std::make_shared<F8MainRibbonLabelProxy_Class>(Generated_F8MainRibbonPanelProxyCreateLabel(Object,aControlName));
		}
		int GetControlsCount()
		{
			return(Generated_F8MainRibbonPanelProxyGetControlsCount(Object));
		}
		F8MainRibbonControlProxy GetControl(int idx)
		{
			return std::make_shared<F8MainRibbonControlProxy_Class>(Generated_F8MainRibbonPanelProxyGetControl(Object,idx));
		}
		F8MainRibbonControlProxy GetControlByName(const wchar_t* aName)
		{
			return std::make_shared<F8MainRibbonControlProxy_Class>(Generated_F8MainRibbonPanelProxyGetControlByName(Object,aName));
		}
		void DeleteControl(F8MainRibbonControlProxy aControl)
		{
			Generated_F8MainRibbonPanelProxyDeleteControl(Object,aControl->GetObj());
		}
	};

	class F8MainRibbonTabProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8MainRibbonTabProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		F8MainRibbonGroupProxy CreateGroup(const wchar_t* aName,unsigned short groupOrder)
		{
			return std::make_shared<F8MainRibbonGroupProxy_Class>(Generated_F8MainRibbonTabProxyCreateGroup(Object,aName,groupOrder));
		}
		F8MainRibbonGroupProxy GetGroupByName(const wchar_t* aName)
		{
			return std::make_shared<F8MainRibbonGroupProxy_Class>(Generated_F8MainRibbonTabProxyGetGroupByName(Object,aName));
		}
		void DeleteGroup(F8MainRibbonGroupProxy aGroup)
		{
			Generated_F8MainRibbonTabProxyDeleteGroup(Object,aGroup->GetObj());
		}
		int GetRibbonGroupsCount()
		{
			return(Generated_F8MainRibbonTabProxyGetRibbonGroupsCount(Object));
		}
		F8MainRibbonGroupProxy GetRibbonGroup(int idx)
		{
			return std::make_shared<F8MainRibbonGroupProxy_Class>(Generated_F8MainRibbonTabProxyGetRibbonGroup(Object,idx));
		}
		const wchar_t* GetName()
		{
			return(Generated_F8MainRibbonTabProxyGetName(Object));
		}
		const wchar_t* GetCaption()
		{
			return(Generated_F8MainRibbonTabProxyGetCaption(Object));
		}
		void SetCaption(const wchar_t* value)
		{
			Generated_F8MainRibbonTabProxySetCaption(Object,value);
		}
	};

	class F8MainRibbonProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8MainRibbonProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		F8MainRibbonTabProxy CreateTab(const wchar_t* aName,unsigned short aTabOrder)
		{
			return std::make_shared<F8MainRibbonTabProxy_Class>(Generated_F8MainRibbonProxyCreateTab(Object,aName,aTabOrder));
		}
		F8MainRibbonTabProxy GetTabByCategory(F8MainRibbonCategoryEnum aCategory)
		{
			return std::make_shared<F8MainRibbonTabProxy_Class>(Generated_F8MainRibbonProxyGetTabByCategory(Object,aCategory));
		}
		F8MainRibbonTabProxy GetTabByName(const wchar_t* aName)
		{
			return std::make_shared<F8MainRibbonTabProxy_Class>(Generated_F8MainRibbonProxyGetTabByName(Object,aName));
		}
		void DeleteTab(F8MainRibbonTabProxy aTab)
		{
			Generated_F8MainRibbonProxyDeleteTab(Object,aTab->GetObj());
		}
		int GetRibbonTabsCount()
		{
			return(Generated_F8MainRibbonProxyGetRibbonTabsCount(Object));
		}
		F8MainRibbonTabProxy GetRibbonTab(int idx)
		{
			return std::make_shared<F8MainRibbonTabProxy_Class>(Generated_F8MainRibbonProxyGetRibbonTab(Object,idx));
		}
	};

	class F8MainCameraProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8MainCameraProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		F8MainCameraStateType GetMainCameraState()
		{
			return(Generated_F8MainCameraProxyGetMainCameraState(Object));
		}
		void SetMainCameraState(F8MainCameraStateType state)
		{
			Generated_F8MainCameraProxySetMainCameraState(Object,state);
		}
		void MoveMainCameraTo(F8dVec3 eye,F8dVec3 viewPoint,double time)
		{
			Generated_F8MainCameraProxyMoveMainCameraTo(Object,eye,viewPoint,time);
		}
	};

	class F8SimulationScreenProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8SimulationScreenProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		F8SimulationScreenSettingType GetSettings()
		{
			return(Generated_F8SimulationScreenProxyGetSettings(Object));
		}
		void SetSettings(F8SimulationScreenSettingType value)
		{
			Generated_F8SimulationScreenProxySetSettings(Object,value);
		}
	};

	class F8NavigationStateType_Class : public F8ProxyBase_Class
	{
	public:
		F8NavigationStateType_Class(void* ClassObject) : F8ProxyBase_Class(ClassObject)
		{
		}
		F8NavigationModeEnum GetMode()
		{
			return(Generated_F8NavigationStateTypeGetMode(Object));
		}
		void SetMode(F8NavigationModeEnum value)
		{
			Generated_F8NavigationStateTypeSetMode(Object,value);
		}
		F8NavigationCommonParameterType GetCommonParameter()
		{
			return(Generated_F8NavigationStateTypeGetCommonParameter(Object));
		}
		void SetCommonParameter(F8NavigationCommonParameterType value)
		{
			Generated_F8NavigationStateTypeSetCommonParameter(Object,value);
		}
		void SetRoad(F8RoadProxy value)
		{
			Generated_F8NavigationStateTypeSetRoad(Object,value->GetObj());
		}
		void SetVehicle(F8ThreeDModelProxy value)
		{
			Generated_F8NavigationStateTypeSetVehicle(Object,value->GetObj());
		}
		void SetTrailer(F8ThreeDModelProxy value)
		{
			Generated_F8NavigationStateTypeSetTrailer(Object,value->GetObj());
		}
		void SetOffRoadStartPoint(F8OffroadStartPointProxy value)
		{
			Generated_F8NavigationStateTypeSetOffRoadStartPoint(Object,value->GetObj());
		}
		F8NavigationWalkParameterType GetWalkParameter()
		{
			return(Generated_F8NavigationStateTypeGetWalkParameter(Object));
		}
		void SetCharacter(F8MD3ModelProxy value)
		{
			Generated_F8NavigationStateTypeSetCharacter(Object,value->GetObj());
		}
		F8NavigationDriveParameterType GetDriveParameter()
		{
			return(Generated_F8NavigationStateTypeGetDriveParameter(Object));
		}
		void SetDriveParameter(F8NavigationDriveParameterType value)
		{
			Generated_F8NavigationStateTypeSetDriveParameter(Object,value);
		}
		void SetNewCar(F8TransientCarInstanceProxy value)
		{
			Generated_F8NavigationStateTypeSetNewCar(Object,value->GetObj());
		}
		F8NavigationFlyParameterType GetFlyParameter()
		{
			return(Generated_F8NavigationStateTypeGetFlyParameter(Object));
		}
		void SetFlyParameter(F8NavigationFlyParameterType value)
		{
			Generated_F8NavigationStateTypeSetFlyParameter(Object,value);
		}
		void SetFlightPath(F8FlightPathProxy value)
		{
			Generated_F8NavigationStateTypeSetFlightPath(Object,value->GetObj());
		}
		F8NavigationBicycleParameterType GetBikeParameter()
		{
			return(Generated_F8NavigationStateTypeGetBikeParameter(Object));
		}
		void SetBikeParameter(F8NavigationBicycleParameterType value)
		{
			Generated_F8NavigationStateTypeSetBikeParameter(Object,value);
		}
		void SetBikeCharacter(F8MD3ModelProxy value)
		{
			Generated_F8NavigationStateTypeSetBikeCharacter(Object,value->GetObj());
		}
		void SetBikeFlightPath(F8FlightPathProxy value)
		{
			Generated_F8NavigationStateTypeSetBikeFlightPath(Object,value->GetObj());
		}
	};

	class F8MainFormProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8MainFormProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		F8MainFormCameraMoveModeEnum GetCameraMoveMode()
		{
			return(Generated_F8MainFormProxyGetCameraMoveMode(Object));
		}
		void SetCameraMoveMode(F8MainFormCameraMoveModeEnum state)
		{
			Generated_F8MainFormProxySetCameraMoveMode(Object,state);
		}
		F8MainCameraProxy GetMainCamera()
		{
			return std::make_shared<F8MainCameraProxy_Class>(Generated_F8MainFormProxyGetMainCamera(Object));
		}
		F8SimulationScreenProxy GetMainSimulationScreen()
		{
			return std::make_shared<F8SimulationScreenProxy_Class>(Generated_F8MainFormProxyGetMainSimulationScreen(Object));
		}
		F8NavigationModeEnum GetNavigationMode()
		{
			return(Generated_F8MainFormProxyGetNavigationMode(Object));
		}
		F8NavigationStateType GetInitialNavigationState()
		{
			return std::make_shared<F8NavigationStateType_Class>(Generated_F8MainFormProxyGetInitialNavigationState(Object));
		}
		void SetNavigationState(F8NavigationStateType state)
		{
			Generated_F8MainFormProxySetNavigationState(Object,state->GetObj());
		}
		F8MainOpenGLProxy GetMainOpenGL()
		{
			return std::make_shared<F8MainOpenGLProxy_Class>(Generated_F8MainFormProxyGetMainOpenGL(Object));
		}
		F8MainRibbonProxy GetMainRibbonMenu()
		{
			return std::make_shared<F8MainRibbonProxy_Class>(Generated_F8MainFormProxyGetMainRibbonMenu(Object));
		}
		unsigned __int64 GetWindowHandle()
		{
			return(Generated_F8MainFormProxyGetWindowHandle(Object));
		}
		void* RegisterEventNavigationModeChange(Cb_MainFormNavigationModeChange cb)
		{
			Cb_MainFormNavigationModeChangeMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_MainFormNavigationModeChangeMapperClass(cb);
			Generated_F8MainFormProxyRegisterEventNavigationModeChange(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventMoveModeChange(Cb_MainFormMoveModeChange cb)
		{
			Cb_MainFormMoveModeChangeMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_MainFormMoveModeChangeMapperClass(cb);
			Generated_F8MainFormProxyRegisterEventMoveModeChange(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventModelClick(Cb_MainFormModelClick cb)
		{
			Cb_MainFormModelClickMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_MainFormModelClickMapperClass(cb);
			Generated_F8MainFormProxyRegisterEventModelClick(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventJoystickMove(Cb_MainFormJoystickMove cb)
		{
			Cb_MainFormJoystickMoveMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_MainFormJoystickMoveMapperClass(cb);
			Generated_F8MainFormProxyRegisterEventJoystickMove(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventJoystickButtonDown(Cb_MainFormJoystickButtonDown cb)
		{
			Cb_MainFormJoystickButtonDownMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_MainFormJoystickButtonDownMapperClass(cb);
			Generated_F8MainFormProxyRegisterEventJoystickButtonDown(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventJoystickButtonUp(Cb_MainFormJoystickButtonUp cb)
		{
			Cb_MainFormJoystickButtonUpMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_MainFormJoystickButtonUpMapperClass(cb);
			Generated_F8MainFormProxyRegisterEventJoystickButtonUp(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventJoystickHat(Cb_MainFormJoystickHat cb)
		{
			Cb_MainFormJoystickHatMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_MainFormJoystickHatMapperClass(cb);
			Generated_F8MainFormProxyRegisterEventJoystickHat(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventKeyUp(Cb_MainFormKeyUp cb)
		{
			Cb_MainFormKeyUpMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_MainFormKeyUpMapperClass(cb);
			Generated_F8MainFormProxyRegisterEventKeyUp(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void* RegisterEventKeyDown(Cb_MainFormKeyDown cb)
		{
			Cb_MainFormKeyDownMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_MainFormKeyDownMapperClass(cb);
			Generated_F8MainFormProxyRegisterEventKeyDown(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnregisterEventNavigationModeChange(void* mapObjPointer)
		{
			Generated_F8MainFormProxyUnregisterEventNavigationModeChange(Object,mapObjPointer);
		}
		void UnregisterEventMoveModeChange(void* mapObjPointer)
		{
			Generated_F8MainFormProxyUnregisterEventMoveModeChange(Object,mapObjPointer);
		}
		void UnregisterEventModelClick(void* mapObjPointer)
		{
			Generated_F8MainFormProxyUnregisterEventModelClick(Object,mapObjPointer);
		}
		void UnregisterEventJoystickMove(void* mapObjPointer)
		{
			Generated_F8MainFormProxyUnregisterEventJoystickMove(Object,mapObjPointer);
		}
		void UnregisterEventJoystickButtonDown(void* mapObjPointer)
		{
			Generated_F8MainFormProxyUnregisterEventJoystickButtonDown(Object,mapObjPointer);
		}
		void UnregisterEventJoystickButtonUp(void* mapObjPointer)
		{
			Generated_F8MainFormProxyUnregisterEventJoystickButtonUp(Object,mapObjPointer);
		}
		void UnregisterEventJoystickHat(void* mapObjPointer)
		{
			Generated_F8MainFormProxyUnregisterEventJoystickHat(Object,mapObjPointer);
		}
		void UnregisterEventKeyUp(void* mapObjPointer)
		{
			Generated_F8MainFormProxyUnregisterEventKeyUp(Object,mapObjPointer);
		}
		void UnregisterEventKeyDown(void* mapObjPointer)
		{
			Generated_F8MainFormProxyUnregisterEventKeyDown(Object,mapObjPointer);
		}
	};

	class F8GazeTrackingPluginProxy_Class : public F8ObjectProxy_Class
	{
	public:
		F8GazeTrackingPluginProxy_Class(void* ClassObject) : F8ObjectProxy_Class(ClassObject)
		{
		}
		F8ApiGazeDataType GetCurrentGazeData()
		{
			return(Generated_F8GazeTrackingPluginProxyGetCurrentGazeData(Object));
		}
		void PushGazeData(F8ApiGazeTrackingDataType data,double time)
		{
			Generated_F8GazeTrackingPluginProxyPushGazeData(Object,data,time);
		}
		void* RegisterCallbackGazeDataUpdated(Cb_GazeTrackingPluginGazeDataUpdated cb)
		{
			Cb_GazeTrackingPluginGazeDataUpdatedMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_GazeTrackingPluginGazeDataUpdatedMapperClass(cb);
			Generated_F8GazeTrackingPluginProxyRegisterCallbackGazeDataUpdated(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnregisterCallbackGazeDataUpdated(void* mapObjPointer)
		{
			Generated_F8GazeTrackingPluginProxyUnregisterCallbackGazeDataUpdated(Object,mapObjPointer);
		}
	};

	class F8ApplicationServices
	{
	protected:
		void* Object;
	public:
		F8ApplicationServices(void* ClassObject)
		{
			Object = ClassObject;
		}
		~F8ApplicationServices()
		{
			Generated_F8ApplicationServicesDestroy(Object);
			Object = NULL;
		}
		void* GetObj()
		{
			return Object;
		}
		F8SimulationCoreProxy GetSimulationCore()
		{
			return std::make_shared<F8SimulationCoreProxy_Class>(Generated_F8ApplicationServicesGetSimulationCore(Object));
		}
		F8GazeTrackingPluginProxy GetGazeTrackingPlugin()
		{
			return std::make_shared<F8GazeTrackingPluginProxy_Class>(Generated_F8ApplicationServicesGetGazeTrackingPlugin(Object));
		}
		F8ProjectProxy GetProject()
		{
			return std::make_shared<F8ProjectProxy_Class>(Generated_F8ApplicationServicesGetProject(Object));
		}
		F8MainFormProxy GetMainForm()
		{
			return std::make_shared<F8MainFormProxy_Class>(Generated_F8ApplicationServicesGetMainForm(Object));
		}
		F8CoordinateConverterProxy GetCoordinateConverter()
		{
			return std::make_shared<F8CoordinateConverterProxy_Class>(Generated_F8ApplicationServicesGetCoordinateConverter(Object));
		}
		const wchar_t* GetWorkingDirectory()
		{
			return(Generated_F8ApplicationServicesGetWorkingDirectory(Object));
		}
		const wchar_t* GetUserDirectory()
		{
			return(Generated_F8ApplicationServicesGetUserDirectory(Object));
		}
		const wchar_t* GetHomeDirectory()
		{
			return(Generated_F8ApplicationServicesGetHomeDirectory(Object));
		}
		void ProcessMessages()
		{
			Generated_F8ApplicationServicesProcessMessages(Object);
		}
		void* RegisterCallbackPluginAbleMenus(Cb_ApplicationPluginAbleMenus cb)
		{
			Cb_ApplicationPluginAbleMenusMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_ApplicationPluginAbleMenusMapperClass(cb);
			Generated_F8ApplicationServicesRegisterCallbackPluginAbleMenus(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnregisterCallbackPluginAbleMenus(void* mapObjPointer)
		{
			Generated_F8ApplicationServicesUnregisterCallbackPluginAbleMenus(Object,mapObjPointer);
		}
		void* RegisterCallbackOnErrorOrWarning(Cb_ApplicationOnErrorOrWarning cb)
		{
			Cb_ApplicationOnErrorOrWarningMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_ApplicationOnErrorOrWarningMapperClass(cb);
			Generated_F8ApplicationServicesRegisterCallbackOnErrorOrWarning(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnregisterCallbackOnErrorOrWarning(void* mapObjPointer)
		{
			Generated_F8ApplicationServicesUnregisterCallbackOnErrorOrWarning(Object,mapObjPointer);
		}
		void* RegisterCallbackNewProject(Cb_ApplicationNewProject cb)
		{
			Cb_ApplicationNewProjectMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_ApplicationNewProjectMapperClass(cb);
			Generated_F8ApplicationServicesRegisterCallbackNewProject(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnregisterCallbackNewProject(void* mapObjPointer)
		{
			Generated_F8ApplicationServicesUnregisterCallbackNewProject(Object,mapObjPointer);
		}
		void* RegisterCallbackBeforeSaveProject(Cb_ApplicationBeforeSaveProject cb)
		{
			Cb_ApplicationBeforeSaveProjectMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_ApplicationBeforeSaveProjectMapperClass(cb);
			Generated_F8ApplicationServicesRegisterCallbackBeforeSaveProject(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnregisterCallbackBeforeSaveProject(void* mapObjPointer)
		{
			Generated_F8ApplicationServicesUnregisterCallbackBeforeSaveProject(Object,mapObjPointer);
		}
		void* RegisterCallbackAfterSaveProject(Cb_ApplicationAfterSaveProject cb)
		{
			Cb_ApplicationAfterSaveProjectMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_ApplicationAfterSaveProjectMapperClass(cb);
			Generated_F8ApplicationServicesRegisterCallbackAfterSaveProject(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnregisterCallbackAfterSaveProject(void* mapObjPointer)
		{
			Generated_F8ApplicationServicesUnregisterCallbackAfterSaveProject(Object,mapObjPointer);
		}
		void* RegisterCallbackCloseProjectQuery(Cb_ApplicationCloseProjectQuery cb)
		{
			Cb_ApplicationCloseProjectQueryMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_ApplicationCloseProjectQueryMapperClass(cb);
			Generated_F8ApplicationServicesRegisterCallbackCloseProjectQuery(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnregisterCallbackCloseProjectQuery(void* mapObjPointer)
		{
			Generated_F8ApplicationServicesUnregisterCallbackCloseProjectQuery(Object,mapObjPointer);
		}
		void* RegisterCallbackBeforeDestroyProject(Cb_ApplicationBeforeDestroyProject cb)
		{
			Cb_ApplicationBeforeDestroyProjectMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_ApplicationBeforeDestroyProjectMapperClass(cb);
			Generated_F8ApplicationServicesRegisterCallbackBeforeDestroyProject(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnregisterCallbackBeforeDestroyProject(void* mapObjPointer)
		{
			Generated_F8ApplicationServicesUnregisterCallbackBeforeDestroyProject(Object,mapObjPointer);
		}
		void* RegisterCallbackAfterLoadProject(Cb_ApplicationAfterLoadProject cb)
		{
			Cb_ApplicationAfterLoadProjectMapperClass* callbackMappingObjPtr;
			if(cb == NULL)
				callbackMappingObjPtr =NULL;
			else
				callbackMappingObjPtr = new Cb_ApplicationAfterLoadProjectMapperClass(cb);
			Generated_F8ApplicationServicesRegisterCallbackAfterLoadProject(Object, callbackMappingObjPtr);
			return callbackMappingObjPtr;
		}
		void UnregisterCallbackAfterLoadProject(void* mapObjPointer)
		{
			Generated_F8ApplicationServicesUnregisterCallbackAfterLoadProject(Object,mapObjPointer);
		}
	};


extern F8ApplicationServices *g_applicationServices;


extern "C"
{
	DLL_API void StartProgram(void);
	DLL_API void StopProgram(void);
	DLL_API void InitAPI(void* pDll);
	DLL_API void FinalizeAPI(void);
	DLL_API void Register_Callback_GetAPI(TGetAPI P);
	DLL_API void Register_Callback_F8ProxyBaseDestroy(TF8ProxyBaseDestroy P);
	DLL_API void CPPAPIDeleteObject(void* obj);
 	DLL_API void Register_Callback_F8ObjectProxyGetProxyName(TF8ObjectProxyGetProxyName P);
 	DLL_API void Register_Callback_F8ObjectProxyGetGUID(TF8ObjectProxyGetGUID P);
 	DLL_API void Register_Callback_F8ObjectProxyIsSameAs(TF8ObjectProxyIsSameAs P);
 	DLL_API void Register_Callback_F8ObjectProxyGetPluginData(TF8ObjectProxyGetPluginData P);
 	DLL_API void Register_Callback_F8ObjectProxySetPluginData(TF8ObjectProxySetPluginData P);
 	DLL_API void Register_Callback_F8ObjectProxyGetPluginBinaryDataSize(TF8ObjectProxyGetPluginBinaryDataSize P);
 	DLL_API void Register_Callback_F8ObjectProxyGetPluginBinaryData(TF8ObjectProxyGetPluginBinaryData P);
 	DLL_API void Register_Callback_F8ObjectProxySetPluginBinaryData(TF8ObjectProxySetPluginBinaryData P);
 	DLL_API void DoCb_ObjectOnBeforeDestructionCallback(Cb_ObjectOnBeforeDestructionMapperClass *object, void* instance);
 	DLL_API void Register_Callback_F8ObjectProxyRegisterCallbackOnBeforeDestruction(TF8ObjectProxyRegisterCallbackOnBeforeDestruction P);
 	DLL_API void Register_Callback_F8ObjectProxyUnregisterCallbackOnBeforeDestruction(TF8ObjectProxyUnregisterCallbackOnBeforeDestruction P);
 	DLL_API void Register_Callback_F8ObjectProxyDestroy(TF8ObjectProxyDestroy P);
 	DLL_API void Register_Callback_F8ModelProxyGetName(TF8ModelProxyGetName P);
 	DLL_API void Register_Callback_F8ModelProxyGetModelType(TF8ModelProxyGetModelType P);
 	DLL_API void Register_Callback_F8ModelProxyDestroy(TF8ModelProxyDestroy P);
 	DLL_API void Register_Callback_F8ThreeDModelProxyDestroy(TF8ThreeDModelProxyDestroy P);
 	DLL_API void Register_Callback_F8MD3ModelProxyDestroy(TF8MD3ModelProxyDestroy P);
 	DLL_API void Register_Callback_F8ObjectInstanceProxyGetName(TF8ObjectInstanceProxyGetName P);
 	DLL_API void Register_Callback_F8ObjectInstanceProxyGetDescription(TF8ObjectInstanceProxyGetDescription P);
 	DLL_API void Register_Callback_F8ObjectInstanceProxyGetID(TF8ObjectInstanceProxyGetID P);
 	DLL_API void Register_Callback_F8ObjectInstanceProxyGetDisplayedIn(TF8ObjectInstanceProxyGetDisplayedIn P);
 	DLL_API void Register_Callback_F8ObjectInstanceProxySetDisplayedIn(TF8ObjectInstanceProxySetDisplayedIn P);
 	DLL_API void Register_Callback_F8ObjectInstanceProxyDestroy(TF8ObjectInstanceProxyDestroy P);
 	DLL_API void Register_Callback_F8ModelInstanceProxyGetPosition(TF8ModelInstanceProxyGetPosition P);
 	DLL_API void Register_Callback_F8ModelInstanceProxySetPosition(TF8ModelInstanceProxySetPosition P);
 	DLL_API void Register_Callback_F8ModelInstanceProxyGetScale(TF8ModelInstanceProxyGetScale P);
 	DLL_API void Register_Callback_F8ModelInstanceProxyGetScaleFactor(TF8ModelInstanceProxyGetScaleFactor P);
 	DLL_API void Register_Callback_F8ModelInstanceProxyGetYawAngle(TF8ModelInstanceProxyGetYawAngle P);
 	DLL_API void Register_Callback_F8ModelInstanceProxySetYawAngle(TF8ModelInstanceProxySetYawAngle P);
 	DLL_API void Register_Callback_F8ModelInstanceProxyGetPitchAngle(TF8ModelInstanceProxyGetPitchAngle P);
 	DLL_API void Register_Callback_F8ModelInstanceProxySetPitchAngle(TF8ModelInstanceProxySetPitchAngle P);
 	DLL_API void Register_Callback_F8ModelInstanceProxyGetRollAngle(TF8ModelInstanceProxyGetRollAngle P);
 	DLL_API void Register_Callback_F8ModelInstanceProxySetRollAngle(TF8ModelInstanceProxySetRollAngle P);
 	DLL_API void Register_Callback_F8ModelInstanceProxyGetCenterPosition(TF8ModelInstanceProxyGetCenterPosition P);
 	DLL_API void Register_Callback_F8ModelInstanceProxyGetRadius(TF8ModelInstanceProxyGetRadius P);
 	DLL_API void Register_Callback_F8ModelInstanceProxyGetBoundingBoxesCount(TF8ModelInstanceProxyGetBoundingBoxesCount P);
 	DLL_API void Register_Callback_F8ModelInstanceProxyGetBoundingBox(TF8ModelInstanceProxyGetBoundingBox P);
 	DLL_API void Register_Callback_F8ModelInstanceProxyDestroy(TF8ModelInstanceProxyDestroy P);
 	DLL_API void Register_Callback_F8ModelInstanceWithBasePositionProxyGetBasePosition3D(TF8ModelInstanceWithBasePositionProxyGetBasePosition3D P);
 	DLL_API void Register_Callback_F8ModelInstanceWithBasePositionProxyGetBasePosition2D(TF8ModelInstanceWithBasePositionProxyGetBasePosition2D P);
 	DLL_API void Register_Callback_F8ModelInstanceWithBasePositionProxySetBasePosition2D(TF8ModelInstanceWithBasePositionProxySetBasePosition2D P);
 	DLL_API void Register_Callback_F8ModelInstanceWithBasePositionProxyGetDeltaH(TF8ModelInstanceWithBasePositionProxyGetDeltaH P);
 	DLL_API void Register_Callback_F8ModelInstanceWithBasePositionProxySetDeltaH(TF8ModelInstanceWithBasePositionProxySetDeltaH P);
 	DLL_API void Register_Callback_F8ModelInstanceWithBasePositionProxyDestroy(TF8ModelInstanceWithBasePositionProxyDestroy P);
 	DLL_API void Register_Callback_F8ModelInstanceWithoutBasePositionProxyDestroy(TF8ModelInstanceWithoutBasePositionProxyDestroy P);
 	DLL_API void Register_Callback_F8ThreeDModelInstanceProxyActivateCommand(TF8ThreeDModelInstanceProxyActivateCommand P);
 	DLL_API void Register_Callback_F8ThreeDModelInstanceProxyDeactivateCommand(TF8ThreeDModelInstanceProxyDeactivateCommand P);
 	DLL_API void Register_Callback_F8ThreeDModelInstanceProxyGetTrafficLights(TF8ThreeDModelInstanceProxyGetTrafficLights P);
 	DLL_API void Register_Callback_F8ThreeDModelInstanceProxyGetCarLights(TF8ThreeDModelInstanceProxyGetCarLights P);
 	DLL_API void Register_Callback_F8ThreeDModelInstanceProxyDestroy(TF8ThreeDModelInstanceProxyDestroy P);
 	DLL_API void Register_Callback_F8SectionProxyGetName(TF8SectionProxyGetName P);
 	DLL_API void Register_Callback_F8SectionProxyDestroy(TF8SectionProxyDestroy P);
 	DLL_API void Register_Callback_F8RoadLaneProxyGetLength(TF8RoadLaneProxyGetLength P);
 	DLL_API void Register_Callback_F8RoadLaneProxyGetParentRoad(TF8RoadLaneProxyGetParentRoad P);
 	DLL_API void Register_Callback_F8RoadLaneProxyGetIsForward(TF8RoadLaneProxyGetIsForward P);
 	DLL_API void Register_Callback_F8RoadLaneProxyGetPosition(TF8RoadLaneProxyGetPosition P);
 	DLL_API void Register_Callback_F8RoadLaneProxyGetDirection(TF8RoadLaneProxyGetDirection P);
 	DLL_API void Register_Callback_F8RoadLaneProxyGetLaneID(TF8RoadLaneProxyGetLaneID P);
 	DLL_API void Register_Callback_F8RoadLaneProxyGetLaneWidth(TF8RoadLaneProxyGetLaneWidth P);
 	DLL_API void Register_Callback_F8RoadLaneProxyGetCurveInformation(TF8RoadLaneProxyGetCurveInformation P);
 	DLL_API void Register_Callback_F8RoadLaneProxyConvertDistance(TF8RoadLaneProxyConvertDistance P);
 	DLL_API void Register_Callback_F8RoadLaneProxyCalculateDistanceFrom(TF8RoadLaneProxyCalculateDistanceFrom P);
 	DLL_API void Register_Callback_F8RoadLaneProxyDestroy(TF8RoadLaneProxyDestroy P);
 	DLL_API void Register_Callback_F8RoadDistanceFeatureProxyGetFeatureType(TF8RoadDistanceFeatureProxyGetFeatureType P);
 	DLL_API void Register_Callback_F8RoadDistanceFeatureProxyGetDistance(TF8RoadDistanceFeatureProxyGetDistance P);
 	DLL_API void Register_Callback_F8RoadDistanceFeatureProxyDestroy(TF8RoadDistanceFeatureProxyDestroy P);
 	DLL_API void Register_Callback_F8RoadSectionChangeProxyGetSection(TF8RoadSectionChangeProxyGetSection P);
 	DLL_API void Register_Callback_F8RoadSectionChangeProxyDestroy(TF8RoadSectionChangeProxyDestroy P);
 	DLL_API void Register_Callback_F8RoadSectionTransitionProxyDestroy(TF8RoadSectionTransitionProxyDestroy P);
 	DLL_API void Register_Callback_F8RoadDistanceFeatureWithLengthProxyGetLength(TF8RoadDistanceFeatureWithLengthProxyGetLength P);
 	DLL_API void Register_Callback_F8RoadDistanceFeatureWithLengthProxyDestroy(TF8RoadDistanceFeatureWithLengthProxyDestroy P);
 	DLL_API void Register_Callback_F8RoadBridgeZoneProxyDestroy(TF8RoadBridgeZoneProxyDestroy P);
 	DLL_API void Register_Callback_F8RoadTunnelZoneProxyDestroy(TF8RoadTunnelZoneProxyDestroy P);
 	DLL_API void Register_Callback_F8RoadUnmodifiedTerrainZoneProxyDestroy(TF8RoadUnmodifiedTerrainZoneProxyDestroy P);
 	DLL_API void Register_Callback_F8RoadObstructionProxyGetDescription(TF8RoadObstructionProxyGetDescription P);
 	DLL_API void Register_Callback_F8RoadObstructionProxyGetDistance(TF8RoadObstructionProxyGetDistance P);
 	DLL_API void Register_Callback_F8RoadObstructionProxyGetLength(TF8RoadObstructionProxyGetLength P);
 	DLL_API void Register_Callback_F8RoadObstructionProxyDestroy(TF8RoadObstructionProxyDestroy P);
 	DLL_API void Register_Callback_F8RoadIntersectionInfoTypeGetIntersectionIdx(TF8RoadIntersectionInfoTypeGetIntersectionIdx P);
 	DLL_API void Register_Callback_F8RoadIntersectionInfoTypeGetStartDistance(TF8RoadIntersectionInfoTypeGetStartDistance P);
 	DLL_API void Register_Callback_F8RoadIntersectionInfoTypeGetEndDistance(TF8RoadIntersectionInfoTypeGetEndDistance P);
 	DLL_API void Register_Callback_F8RoadIntersectionInfoTypeDestroy(TF8RoadIntersectionInfoTypeDestroy P);
 	DLL_API void Register_Callback_F8RoadRampConnectionInfoTypeGetPosition(TF8RoadRampConnectionInfoTypeGetPosition P);
 	DLL_API void Register_Callback_F8RoadRampConnectionInfoTypeGetIsConnected(TF8RoadRampConnectionInfoTypeGetIsConnected P);
 	DLL_API void Register_Callback_F8RoadRampConnectionInfoTypeGetConnectedRoadName(TF8RoadRampConnectionInfoTypeGetConnectedRoadName P);
 	DLL_API void Register_Callback_F8RoadRampConnectionInfoTypeDestroy(TF8RoadRampConnectionInfoTypeDestroy P);
 	DLL_API void Register_Callback_F8RoadSectionInfoTypeDestroy(TF8RoadSectionInfoTypeDestroy P);
 	DLL_API void Register_Callback_F8RoadSectionInfoTypeGetSection1(TF8RoadSectionInfoTypeGetSection1 P);
 	DLL_API void Register_Callback_F8RoadSectionInfoTypeGetSection2(TF8RoadSectionInfoTypeGetSection2 P);
 	DLL_API void Register_Callback_F8RoadSectionInfoTypeGetMergeRatio(TF8RoadSectionInfoTypeGetMergeRatio P);
 	DLL_API void Register_Callback_F8RoadSectionInfoTypeGetInTunnel(TF8RoadSectionInfoTypeGetInTunnel P);
 	DLL_API void Register_Callback_F8RoadSectionInfoTypeGetOnBridge(TF8RoadSectionInfoTypeGetOnBridge P);
 	DLL_API void Register_Callback_F8RoadProxyGetDistanceFeaturesCount(TF8RoadProxyGetDistanceFeaturesCount P);
 	DLL_API void Register_Callback_F8RoadProxyGetDistanceFeature(TF8RoadProxyGetDistanceFeature P);
 	DLL_API void Register_Callback_F8RoadProxyGetObstructionsCount(TF8RoadProxyGetObstructionsCount P);
 	DLL_API void Register_Callback_F8RoadProxyGetObstruction(TF8RoadProxyGetObstruction P);
 	DLL_API void Register_Callback_F8RoadProxyGetName(TF8RoadProxyGetName P);
 	DLL_API void Register_Callback_F8RoadProxyGetLength(TF8RoadProxyGetLength P);
 	DLL_API void Register_Callback_F8RoadProxyGetPositionAt(TF8RoadProxyGetPositionAt P);
 	DLL_API void Register_Callback_F8RoadProxyGetDirectionAt(TF8RoadProxyGetDirectionAt P);
 	DLL_API void Register_Callback_F8RoadProxyGetCurvatureAt(TF8RoadProxyGetCurvatureAt P);
 	DLL_API void Register_Callback_F8RoadProxyGetSlopeAt(TF8RoadProxyGetSlopeAt P);
 	DLL_API void Register_Callback_F8RoadProxyGetEdgeOffsetAt(TF8RoadProxyGetEdgeOffsetAt P);
 	DLL_API void Register_Callback_F8RoadProxyGetSectionInfoAt(TF8RoadProxyGetSectionInfoAt P);
 	DLL_API void Register_Callback_F8RoadProxyGetRoadLanesCount(TF8RoadProxyGetRoadLanesCount P);
 	DLL_API void Register_Callback_F8RoadProxyGetRoadLane(TF8RoadProxyGetRoadLane P);
 	DLL_API void Register_Callback_F8RoadProxySearchRoadLane(TF8RoadProxySearchRoadLane P);
 	DLL_API void Register_Callback_F8RoadProxyGetIntersectionInfosCount(TF8RoadProxyGetIntersectionInfosCount P);
 	DLL_API void Register_Callback_F8RoadProxyGetIntersectionInfo(TF8RoadProxyGetIntersectionInfo P);
 	DLL_API void Register_Callback_F8RoadProxyGetRampConnectionInfosCount(TF8RoadProxyGetRampConnectionInfosCount P);
 	DLL_API void Register_Callback_F8RoadProxyGetRampConnectionInfo(TF8RoadProxyGetRampConnectionInfo P);
 	DLL_API void Register_Callback_F8RoadProxyCalculateDistanceFrom(TF8RoadProxyCalculateDistanceFrom P);
 	DLL_API void Register_Callback_F8RoadProxyDestroy(TF8RoadProxyDestroy P);
 	DLL_API void Register_Callback_F8OffroadStartPointProxyDestroy(TF8OffroadStartPointProxyDestroy P);
 	DLL_API void Register_Callback_F8IntersectionTerminalProxyGetDescription(TF8IntersectionTerminalProxyGetDescription P);
 	DLL_API void Register_Callback_F8IntersectionTerminalProxyGetDrivePathsCount(TF8IntersectionTerminalProxyGetDrivePathsCount P);
 	DLL_API void Register_Callback_F8IntersectionTerminalProxyGetDrivePath(TF8IntersectionTerminalProxyGetDrivePath P);
 	DLL_API void Register_Callback_F8IntersectionTerminalProxyGetRoadLanePosition(TF8IntersectionTerminalProxyGetRoadLanePosition P);
 	DLL_API void Register_Callback_F8IntersectionTerminalProxyGetRoadLaneDirection(TF8IntersectionTerminalProxyGetRoadLaneDirection P);
 	DLL_API void Register_Callback_F8IntersectionTerminalProxyDestroy(TF8IntersectionTerminalProxyDestroy P);
 	DLL_API void Register_Callback_F8IntersectionEntryPointProxyDestroy(TF8IntersectionEntryPointProxyDestroy P);
 	DLL_API void Register_Callback_F8IntersectionExitPointProxyDestroy(TF8IntersectionExitPointProxyDestroy P);
 	DLL_API void Register_Callback_F8IntersectionLaneCurveProxyGetLength(TF8IntersectionLaneCurveProxyGetLength P);
 	DLL_API void Register_Callback_F8IntersectionLaneCurveProxyGetPosition(TF8IntersectionLaneCurveProxyGetPosition P);
 	DLL_API void Register_Callback_F8IntersectionLaneCurveProxyGetDirection(TF8IntersectionLaneCurveProxyGetDirection P);
 	DLL_API void Register_Callback_F8IntersectionLaneCurveProxyDestroy(TF8IntersectionLaneCurveProxyDestroy P);
 	DLL_API void Register_Callback_F8IntersectionDrivePathProxyGetEntryPoint(TF8IntersectionDrivePathProxyGetEntryPoint P);
 	DLL_API void Register_Callback_F8IntersectionDrivePathProxyGetExitPoint(TF8IntersectionDrivePathProxyGetExitPoint P);
 	DLL_API void Register_Callback_F8IntersectionDrivePathProxyGetLaneCurve(TF8IntersectionDrivePathProxyGetLaneCurve P);
 	DLL_API void Register_Callback_F8IntersectionDrivePathProxyDestroy(TF8IntersectionDrivePathProxyDestroy P);
 	DLL_API void Register_Callback_F8TrafficSignalControllerProxyDestroy(TF8TrafficSignalControllerProxyDestroy P);
 	DLL_API void Register_Callback_F8IntersectionProxyGetName(TF8IntersectionProxyGetName P);
 	DLL_API void Register_Callback_F8IntersectionProxyGetDrivePathsCount(TF8IntersectionProxyGetDrivePathsCount P);
 	DLL_API void Register_Callback_F8IntersectionProxyGetDrivePath(TF8IntersectionProxyGetDrivePath P);
 	DLL_API void Register_Callback_F8IntersectionProxyGetEntryPointsCount(TF8IntersectionProxyGetEntryPointsCount P);
 	DLL_API void Register_Callback_F8IntersectionProxyGetEntryPoint(TF8IntersectionProxyGetEntryPoint P);
 	DLL_API void Register_Callback_F8IntersectionProxyGetExitPointsCount(TF8IntersectionProxyGetExitPointsCount P);
 	DLL_API void Register_Callback_F8IntersectionProxyGetExitPoint(TF8IntersectionProxyGetExitPoint P);
 	DLL_API void Register_Callback_F8IntersectionProxyGetTrafficSignalController(TF8IntersectionProxyGetTrafficSignalController P);
 	DLL_API void Register_Callback_F8IntersectionProxyGetTrafficControlType(TF8IntersectionProxyGetTrafficControlType P);
 	DLL_API void Register_Callback_F8IntersectionProxyDestroy(TF8IntersectionProxyDestroy P);
 	DLL_API void Register_Callback_F8FlightPathProxyGetName(TF8FlightPathProxyGetName P);
 	DLL_API void Register_Callback_F8FlightPathProxyGetLength(TF8FlightPathProxyGetLength P);
 	DLL_API void Register_Callback_F8FlightPathProxyGetPosition(TF8FlightPathProxyGetPosition P);
 	DLL_API void Register_Callback_F8FlightPathProxyGetDirection(TF8FlightPathProxyGetDirection P);
 	DLL_API void Register_Callback_F8FlightPathProxyDestroy(TF8FlightPathProxyDestroy P);
 	DLL_API void Register_Callback_F8RoadSideObjectInstanceProxyGetRoad(TF8RoadSideObjectInstanceProxyGetRoad P);
 	DLL_API void Register_Callback_F8RoadSideObjectInstanceProxyGetRoadDistance(TF8RoadSideObjectInstanceProxyGetRoadDistance P);
 	DLL_API void Register_Callback_F8RoadSideObjectInstanceProxyGetSideOfRoad(TF8RoadSideObjectInstanceProxyGetSideOfRoad P);
 	DLL_API void Register_Callback_F8RoadSideObjectInstanceProxyGetOffset(TF8RoadSideObjectInstanceProxyGetOffset P);
 	DLL_API void Register_Callback_F8RoadSideObjectInstanceProxyGetDeltaH(TF8RoadSideObjectInstanceProxyGetDeltaH P);
 	DLL_API void Register_Callback_F8RoadSideObjectInstanceProxyDestroy(TF8RoadSideObjectInstanceProxyDestroy P);
 	DLL_API void Register_Callback_F8RoadThreeDModelInstanceProxyGetThreeDModel(TF8RoadThreeDModelInstanceProxyGetThreeDModel P);
 	DLL_API void Register_Callback_F8RoadThreeDModelInstanceProxyDestroy(TF8RoadThreeDModelInstanceProxyDestroy P);
 	DLL_API void Register_Callback_F8ContextProxyGetName(TF8ContextProxyGetName P);
 	DLL_API void Register_Callback_F8ContextProxyDestroy(TF8ContextProxyDestroy P);
 	DLL_API void Register_Callback_F8ScriptProxyGetName(TF8ScriptProxyGetName P);
 	DLL_API void Register_Callback_F8ScriptProxyDestroy(TF8ScriptProxyDestroy P);
 	DLL_API void Register_Callback_F8ScriptAnimationProxyGetName(TF8ScriptAnimationProxyGetName P);
 	DLL_API void Register_Callback_F8ScriptAnimationProxyDestroy(TF8ScriptAnimationProxyDestroy P);
 	DLL_API void Register_Callback_F8EventProxyGetName(TF8EventProxyGetName P);
 	DLL_API void Register_Callback_F8EventProxyDestroy(TF8EventProxyDestroy P);
 	DLL_API void Register_Callback_F8ScenarioProxyGetName(TF8ScenarioProxyGetName P);
 	DLL_API void Register_Callback_F8ScenarioProxyGetEventsCount(TF8ScenarioProxyGetEventsCount P);
 	DLL_API void Register_Callback_F8ScenarioProxyGetEvent(TF8ScenarioProxyGetEvent P);
 	DLL_API void Register_Callback_F8ScenarioProxyDestroy(TF8ScenarioProxyDestroy P);
 	DLL_API void Register_Callback_F8CoordinateConverterProxyGetHorizontalCoordinateConvertor(TF8CoordinateConverterProxyGetHorizontalCoordinateConvertor P);
 	DLL_API void Register_Callback_F8CoordinateConverterProxyDestroy(TF8CoordinateConverterProxyDestroy P);
 	DLL_API void Register_Callback_F8HorizontalCoordinateConverterProxyConvert(TF8HorizontalCoordinateConverterProxyConvert P);
 	DLL_API void Register_Callback_F8HorizontalCoordinateConverterProxyConvertArray(TF8HorizontalCoordinateConverterProxyConvertArray P);
 	DLL_API void Register_Callback_F8HorizontalCoordinateConverterProxyDestroy(TF8HorizontalCoordinateConverterProxyDestroy P);
 	DLL_API void Register_Callback_F8ProjectProxyGetSectionsCount(TF8ProjectProxyGetSectionsCount P);
 	DLL_API void Register_Callback_F8ProjectProxyGetSection(TF8ProjectProxyGetSection P);
 	DLL_API void Register_Callback_F8ProjectProxyGetRoadsCount(TF8ProjectProxyGetRoadsCount P);
 	DLL_API void Register_Callback_F8ProjectProxyGetRoad(TF8ProjectProxyGetRoad P);
 	DLL_API void Register_Callback_F8ProjectProxyGetOffroadPointsCount(TF8ProjectProxyGetOffroadPointsCount P);
 	DLL_API void Register_Callback_F8ProjectProxyGetOffroadPoint(TF8ProjectProxyGetOffroadPoint P);
 	DLL_API void Register_Callback_F8ProjectProxyGetIntersectionsCount(TF8ProjectProxyGetIntersectionsCount P);
 	DLL_API void Register_Callback_F8ProjectProxyGetIntersection(TF8ProjectProxyGetIntersection P);
 	DLL_API void Register_Callback_F8ProjectProxyGet3DModelsCount(TF8ProjectProxyGet3DModelsCount P);
 	DLL_API void Register_Callback_F8ProjectProxyGet3DModel(TF8ProjectProxyGet3DModel P);
 	DLL_API void Register_Callback_F8ProjectProxyGet3DModelInstancesCount(TF8ProjectProxyGet3DModelInstancesCount P);
 	DLL_API void Register_Callback_F8ProjectProxyGet3DModelInstance(TF8ProjectProxyGet3DModelInstance P);
 	DLL_API void Register_Callback_F8ProjectProxyGetRoadModelInstancesCount(TF8ProjectProxyGetRoadModelInstancesCount P);
 	DLL_API void Register_Callback_F8ProjectProxyGetRoadModelInstance(TF8ProjectProxyGetRoadModelInstance P);
 	DLL_API void Register_Callback_F8ProjectProxyGetMD3ModelsCount(TF8ProjectProxyGetMD3ModelsCount P);
 	DLL_API void Register_Callback_F8ProjectProxyGetMD3Model(TF8ProjectProxyGetMD3Model P);
 	DLL_API void Register_Callback_F8ProjectProxyGetFlightPathsCount(TF8ProjectProxyGetFlightPathsCount P);
 	DLL_API void Register_Callback_F8ProjectProxyGetFlightPath(TF8ProjectProxyGetFlightPath P);
 	DLL_API void Register_Callback_F8ProjectProxyGetScriptsCount(TF8ProjectProxyGetScriptsCount P);
 	DLL_API void Register_Callback_F8ProjectProxyGetScript(TF8ProjectProxyGetScript P);
 	DLL_API void Register_Callback_F8ProjectProxyGetScriptAnimationsCount(TF8ProjectProxyGetScriptAnimationsCount P);
 	DLL_API void Register_Callback_F8ProjectProxyGetScriptAnimation(TF8ProjectProxyGetScriptAnimation P);
 	DLL_API void Register_Callback_F8ProjectProxyGetScenariosCount(TF8ProjectProxyGetScenariosCount P);
 	DLL_API void Register_Callback_F8ProjectProxyGetScenario(TF8ProjectProxyGetScenario P);
 	DLL_API void Register_Callback_F8ProjectProxyGetContextsCount(TF8ProjectProxyGetContextsCount P);
 	DLL_API void Register_Callback_F8ProjectProxyGetContext(TF8ProjectProxyGetContext P);
 	DLL_API void Register_Callback_F8ProjectProxyGetActualHeightAt(TF8ProjectProxyGetActualHeightAt P);
 	DLL_API void Register_Callback_F8ProjectProxyDestroy(TF8ProjectProxyDestroy P);
 	DLL_API void Register_Callback_F8TransientInstanceProxyGetTransientType(TF8TransientInstanceProxyGetTransientType P);
 	DLL_API void Register_Callback_F8TransientInstanceProxyGetBodyPitchAngle(TF8TransientInstanceProxyGetBodyPitchAngle P);
 	DLL_API void Register_Callback_F8TransientInstanceProxySetBodyPitchAngle(TF8TransientInstanceProxySetBodyPitchAngle P);
 	DLL_API void Register_Callback_F8TransientInstanceProxyGetBodyRollAngle(TF8TransientInstanceProxyGetBodyRollAngle P);
 	DLL_API void Register_Callback_F8TransientInstanceProxySetBodyRollAngle(TF8TransientInstanceProxySetBodyRollAngle P);
 	DLL_API void Register_Callback_F8TransientInstanceProxyGetCarLights(TF8TransientInstanceProxyGetCarLights P);
 	DLL_API void Register_Callback_F8TransientInstanceProxySetCarLights(TF8TransientInstanceProxySetCarLights P);
 	DLL_API void DoCb_TransientOnBeforeCalculateMovementCallback(Cb_TransientOnBeforeCalculateMovementMapperClass *object, double dTimeInSeconds,void* Instance);
 	DLL_API void Register_Callback_F8TransientInstanceProxyRegisterCallbackOnBeforeCalculateMovement(TF8TransientInstanceProxyRegisterCallbackOnBeforeCalculateMovement P);
 	DLL_API void Register_Callback_F8TransientInstanceProxyUnregisterCallbackOnBeforeCalculateMovement(TF8TransientInstanceProxyUnregisterCallbackOnBeforeCalculateMovement P);
 	DLL_API void DoCb_TransientOnAfterCalculateMovementCallback(Cb_TransientOnAfterCalculateMovementMapperClass *object, double dTimeInSeconds,void* Instance);
 	DLL_API void Register_Callback_F8TransientInstanceProxyRegisterCallbackOnAfterCalculateMovement(TF8TransientInstanceProxyRegisterCallbackOnAfterCalculateMovement P);
 	DLL_API void Register_Callback_F8TransientInstanceProxyUnregisterCallbackOnAfterCalculateMovement(TF8TransientInstanceProxyUnregisterCallbackOnAfterCalculateMovement P);
 	DLL_API void DoCb_TransientOnBeforeDoMovementCallback(Cb_TransientOnBeforeDoMovementMapperClass *object, double dTimeInSeconds,void* Instance);
 	DLL_API void Register_Callback_F8TransientInstanceProxyRegisterCallbackOnBeforeDoMovement(TF8TransientInstanceProxyRegisterCallbackOnBeforeDoMovement P);
 	DLL_API void Register_Callback_F8TransientInstanceProxyUnregisterCallbackOnBeforeDoMovement(TF8TransientInstanceProxyUnregisterCallbackOnBeforeDoMovement P);
 	DLL_API void DoCb_TransientOnAfterDoMovementCallback(Cb_TransientOnAfterDoMovementMapperClass *object, double dTimeInSeconds,void* Instance);
 	DLL_API void Register_Callback_F8TransientInstanceProxyRegisterCallbackOnAfterDoMovement(TF8TransientInstanceProxyRegisterCallbackOnAfterDoMovement P);
 	DLL_API void Register_Callback_F8TransientInstanceProxyUnregisterCallbackOnAfterDoMovement(TF8TransientInstanceProxyUnregisterCallbackOnAfterDoMovement P);
 	DLL_API void Register_Callback_F8TransientInstanceProxyIsSetCallbackOnCalculateMovement(TF8TransientInstanceProxyIsSetCallbackOnCalculateMovement P);
 	DLL_API void DoCb_TransientOnCalculateMovementCallback(Cb_TransientOnCalculateMovementMapperClass *object, double dTimeInSeconds,void* Instance);
 	DLL_API void Register_Callback_F8TransientInstanceProxySetCallbackOnCalculateMovement(TF8TransientInstanceProxySetCallbackOnCalculateMovement P);
 	DLL_API void Register_Callback_F8TransientInstanceProxyUnsetCallbackOnCalculateMovement(TF8TransientInstanceProxyUnsetCallbackOnCalculateMovement P);
 	DLL_API void Register_Callback_F8TransientInstanceProxyIsSetCallbackOnDoMovement(TF8TransientInstanceProxyIsSetCallbackOnDoMovement P);
 	DLL_API void DoCb_TransientOnDoMovementCallback(Cb_TransientOnDoMovementMapperClass *object, double dTimeInSeconds,void* Instance);
 	DLL_API void Register_Callback_F8TransientInstanceProxySetCallbackOnDoMovement(TF8TransientInstanceProxySetCallbackOnDoMovement P);
 	DLL_API void Register_Callback_F8TransientInstanceProxyUnsetCallbackOnDoMovement(TF8TransientInstanceProxyUnsetCallbackOnDoMovement P);
 	DLL_API void Register_Callback_F8TransientInstanceProxyDestroy(TF8TransientInstanceProxyDestroy P);
 	DLL_API void Register_Callback_F8TransientInstanceProxyListDestroy(TF8TransientInstanceProxyListDestroy P);
 	DLL_API void Register_Callback_F8TransientInstanceProxyListGetCount(TF8TransientInstanceProxyListGetCount P);
 	DLL_API void Register_Callback_F8TransientInstanceProxyListGetItem(TF8TransientInstanceProxyListGetItem P);
 	DLL_API void Register_Callback_F8TransientMovingInstanceProxyDestroy(TF8TransientMovingInstanceProxyDestroy P);
 	DLL_API void Register_Callback_F8TransientCharacterInstanceProxyDestroy(TF8TransientCharacterInstanceProxyDestroy P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetAutomaticControl(TF8TransientCarInstanceProxyGetAutomaticControl P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetDistanceTravelled(TF8TransientCarInstanceProxyGetDistanceTravelled P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetDistanceAlongDrivePath(TF8TransientCarInstanceProxyGetDistanceAlongDrivePath P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetMass(TF8TransientCarInstanceProxyGetMass P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetEngineOn(TF8TransientCarInstanceProxyGetEngineOn P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxySetEngineOn(TF8TransientCarInstanceProxySetEngineOn P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetSteering(TF8TransientCarInstanceProxyGetSteering P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxySetSteering(TF8TransientCarInstanceProxySetSteering P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetThrottle(TF8TransientCarInstanceProxyGetThrottle P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxySetThrottle(TF8TransientCarInstanceProxySetThrottle P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetBrake(TF8TransientCarInstanceProxyGetBrake P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxySetBrake(TF8TransientCarInstanceProxySetBrake P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetClutch(TF8TransientCarInstanceProxyGetClutch P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxySetClutch(TF8TransientCarInstanceProxySetClutch P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxySetPositionInTraffic(TF8TransientCarInstanceProxySetPositionInTraffic P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetDirection(TF8TransientCarInstanceProxyGetDirection P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxySetDirection(TF8TransientCarInstanceProxySetDirection P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetBodyDirection(TF8TransientCarInstanceProxyGetBodyDirection P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxySetBodyDirection(TF8TransientCarInstanceProxySetBodyDirection P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetRPM(TF8TransientCarInstanceProxyGetRPM P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxySetRPM(TF8TransientCarInstanceProxySetRPM P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetSpeedVector(TF8TransientCarInstanceProxyGetSpeedVector P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetSpeed(TF8TransientCarInstanceProxyGetSpeed P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxySetSpeed(TF8TransientCarInstanceProxySetSpeed P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetAppliedSteering(TF8TransientCarInstanceProxyGetAppliedSteering P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetAppliedThrottle(TF8TransientCarInstanceProxyGetAppliedThrottle P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetAppliedBrake(TF8TransientCarInstanceProxyGetAppliedBrake P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetAppliedClutch(TF8TransientCarInstanceProxyGetAppliedClutch P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetAcceleration(TF8TransientCarInstanceProxyGetAcceleration P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetRotAcceleration(TF8TransientCarInstanceProxyGetRotAcceleration P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetRotSpeed(TF8TransientCarInstanceProxyGetRotSpeed P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetBodyRotAcceleration(TF8TransientCarInstanceProxyGetBodyRotAcceleration P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetBodyRotSpeed(TF8TransientCarInstanceProxyGetBodyRotSpeed P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetCurrentRoad(TF8TransientCarInstanceProxyGetCurrentRoad P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetLatestRoad(TF8TransientCarInstanceProxyGetLatestRoad P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetCurrentIntersection(TF8TransientCarInstanceProxyGetCurrentIntersection P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetCurrentLane(TF8TransientCarInstanceProxyGetCurrentLane P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetDistanceAlongRoad(TF8TransientCarInstanceProxyGetDistanceAlongRoad P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetDistanceAlongLatestRoad(TF8TransientCarInstanceProxyGetDistanceAlongLatestRoad P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetLaneNumber(TF8TransientCarInstanceProxyGetLaneNumber P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetLaneWidth(TF8TransientCarInstanceProxyGetLaneWidth P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetLaneDirection(TF8TransientCarInstanceProxyGetLaneDirection P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyGetLaneCurvature(TF8TransientCarInstanceProxyGetLaneCurvature P);
 	DLL_API void Register_Callback_F8TransientCarInstanceProxyDestroy(TF8TransientCarInstanceProxyDestroy P);
 	DLL_API void Register_Callback_F8MainDriverProxyGetCurrentCar(TF8MainDriverProxyGetCurrentCar P);
 	DLL_API void Register_Callback_F8MainDriverProxyDestroy(TF8MainDriverProxyDestroy P);
 	DLL_API void Register_Callback_F8DriverDataTypeGetRoad(TF8DriverDataTypeGetRoad P);
 	DLL_API void Register_Callback_F8DriverDataTypeSetRoad(TF8DriverDataTypeSetRoad P);
 	DLL_API void Register_Callback_F8DriverDataTypeGetLane(TF8DriverDataTypeGetLane P);
 	DLL_API void Register_Callback_F8DriverDataTypeSetLane(TF8DriverDataTypeSetLane P);
 	DLL_API void Register_Callback_F8DriverDataTypeGetInitialSpeed(TF8DriverDataTypeGetInitialSpeed P);
 	DLL_API void Register_Callback_F8DriverDataTypeSetInitialSpeed(TF8DriverDataTypeSetInitialSpeed P);
 	DLL_API void Register_Callback_F8DriverDataTypeGetPosition(TF8DriverDataTypeGetPosition P);
 	DLL_API void Register_Callback_F8DriverDataTypeSetPosition(TF8DriverDataTypeSetPosition P);
 	DLL_API void Register_Callback_F8DriverDataTypeGetGoForwards(TF8DriverDataTypeGetGoForwards P);
 	DLL_API void Register_Callback_F8DriverDataTypeSetGoForwards(TF8DriverDataTypeSetGoForwards P);
 	DLL_API void Register_Callback_F8DriverDataTypeGetVehicle(TF8DriverDataTypeGetVehicle P);
 	DLL_API void Register_Callback_F8DriverDataTypeSetVehicle(TF8DriverDataTypeSetVehicle P);
 	DLL_API void Register_Callback_F8DriverDataTypeGetTrailer(TF8DriverDataTypeGetTrailer P);
 	DLL_API void Register_Callback_F8DriverDataTypeSetTrailer(TF8DriverDataTypeSetTrailer P);
 	DLL_API void Register_Callback_F8DriverDataTypeDestroy(TF8DriverDataTypeDestroy P);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyGetDriver(TF8TrafficSimulationProxyGetDriver P);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyGetTrafficState(TF8TrafficSimulationProxyGetTrafficState P);
 	DLL_API void Register_Callback_F8TrafficSimulationProxySetTrafficState(TF8TrafficSimulationProxySetTrafficState P);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyGetTransientVehiclesArround(TF8TrafficSimulationProxyGetTransientVehiclesArround P);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyGetTransientObjectsArround(TF8TrafficSimulationProxyGetTransientObjectsArround P);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyDeleteTransientObject(TF8TrafficSimulationProxyDeleteTransientObject P);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyDeleteAllTransientObjects(TF8TrafficSimulationProxyDeleteAllTransientObjects P);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyAddNewTransient(TF8TrafficSimulationProxyAddNewTransient P);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyAddNewVehicle(TF8TrafficSimulationProxyAddNewVehicle P);
 	DLL_API void DoCb_TrafficSimulationStatusChangedCallback(Cb_TrafficSimulationStatusChangedMapperClass *object);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyRegisterEventSimulationStatusChanged(TF8TrafficSimulationProxyRegisterEventSimulationStatusChanged P);
 	DLL_API void DoCb_TrafficBeforeInitializeDrivingCallback(Cb_TrafficBeforeInitializeDrivingMapperClass *object, void* driverData);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyRegisterEventBeforeInitializeDriving(TF8TrafficSimulationProxyRegisterEventBeforeInitializeDriving P);
 	DLL_API void DoCb_TrafficStartDrivingCarCallback(Cb_TrafficStartDrivingCarMapperClass *object, void* aVehicle);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyRegisterEventStartDrivingCar(TF8TrafficSimulationProxyRegisterEventStartDrivingCar P);
 	DLL_API void DoCb_TrafficStopDrivingCarCallback(Cb_TrafficStopDrivingCarMapperClass *object, void* aVehicle);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyRegisterEventStopDrivingCar(TF8TrafficSimulationProxyRegisterEventStopDrivingCar P);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyUnregisterEventSimulationStatusChanged(TF8TrafficSimulationProxyUnregisterEventSimulationStatusChanged P);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyUnregisterEventBeforeInitializeDriving(TF8TrafficSimulationProxyUnregisterEventBeforeInitializeDriving P);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyUnregisterEventStartDrivingCar(TF8TrafficSimulationProxyUnregisterEventStartDrivingCar P);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyUnregisterEventStopDrivingCar(TF8TrafficSimulationProxyUnregisterEventStopDrivingCar P);
 	DLL_API void DoCb_TrafficTransientWorldBeforeMoveCallback(Cb_TrafficTransientWorldBeforeMoveMapperClass *object, double dTimeInSeconds);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyRegisterEventTransientWorldBeforeMove(TF8TrafficSimulationProxyRegisterEventTransientWorldBeforeMove P);
 	DLL_API void DoCb_TrafficTransientWorldAfterMoveCallback(Cb_TrafficTransientWorldAfterMoveMapperClass *object, double dTimeInSeconds);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyRegisterEventTransientWorldAfterMove(TF8TrafficSimulationProxyRegisterEventTransientWorldAfterMove P);
 	DLL_API void DoCb_TrafficTransientWorldMoveCallback(Cb_TrafficTransientWorldMoveMapperClass *object, double dTimeInSeconds);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyRegisterEventTransientWorldMove(TF8TrafficSimulationProxyRegisterEventTransientWorldMove P);
 	DLL_API void DoCb_TrafficNewTransientObjectCallback(Cb_TrafficNewTransientObjectMapperClass *object, void* newTransient);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyRegisterEventNewTransientObject(TF8TrafficSimulationProxyRegisterEventNewTransientObject P);
 	DLL_API void DoCb_TrafficTransientObjectDeletedCallback(Cb_TrafficTransientObjectDeletedMapperClass *object, void* deletedTransient);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyRegisterEventTransientObjectDeleted(TF8TrafficSimulationProxyRegisterEventTransientObjectDeleted P);
 	DLL_API void DoCb_TrafficCacheSimulationDataCallback(Cb_TrafficCacheSimulationDataMapperClass *object, double dTimeInSeconds);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyRegisterEventCacheSimulationData(TF8TrafficSimulationProxyRegisterEventCacheSimulationData P);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyUnregisterEventTransientWorldBeforeMove(TF8TrafficSimulationProxyUnregisterEventTransientWorldBeforeMove P);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyUnregisterEventTransientWorldAfterMove(TF8TrafficSimulationProxyUnregisterEventTransientWorldAfterMove P);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyUnregisterEventTransientWorldMove(TF8TrafficSimulationProxyUnregisterEventTransientWorldMove P);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyUnregisterEventNewTransientObject(TF8TrafficSimulationProxyUnregisterEventNewTransientObject P);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyUnregisterEventTransientObjectDeleted(TF8TrafficSimulationProxyUnregisterEventTransientObjectDeleted P);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyUnregisterEventCacheSimulationData(TF8TrafficSimulationProxyUnregisterEventCacheSimulationData P);
 	DLL_API void Register_Callback_F8TrafficSimulationProxyDestroy(TF8TrafficSimulationProxyDestroy P);
 	DLL_API void Register_Callback_F8VisualOptionsRootProxyGetDisplayOption(TF8VisualOptionsRootProxyGetDisplayOption P);
 	DLL_API void Register_Callback_F8VisualOptionsRootProxySetDisplayOption(TF8VisualOptionsRootProxySetDisplayOption P);
 	DLL_API void Register_Callback_F8VisualOptionsRootProxyDestroy(TF8VisualOptionsRootProxyDestroy P);
 	DLL_API void Register_Callback_F8CurrentScriptInfoTypeDestroy(TF8CurrentScriptInfoTypeDestroy P);
 	DLL_API void Register_Callback_F8CurrentScriptInfoTypeGetIsExecuting(TF8CurrentScriptInfoTypeGetIsExecuting P);
 	DLL_API void Register_Callback_F8CurrentScriptInfoTypeGetIsAnimation(TF8CurrentScriptInfoTypeGetIsAnimation P);
 	DLL_API void Register_Callback_F8CurrentScriptInfoTypeGetScript(TF8CurrentScriptInfoTypeGetScript P);
 	DLL_API void Register_Callback_F8CurrentScriptInfoTypeGetScriptAnimation(TF8CurrentScriptInfoTypeGetScriptAnimation P);
 	DLL_API void Register_Callback_F8CurrentScriptInfoTypeGetTime(TF8CurrentScriptInfoTypeGetTime P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyDestroy(TF8SimulationCoreProxyDestroy P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyGetTrafficSimulation(TF8SimulationCoreProxyGetTrafficSimulation P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyGetEnvironmentState(TF8SimulationCoreProxyGetEnvironmentState P);
 	DLL_API void Register_Callback_F8SimulationCoreProxySetEnvironmentState(TF8SimulationCoreProxySetEnvironmentState P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyApplyContext(TF8SimulationCoreProxyApplyContext P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyGetVisualOptionsRoot(TF8SimulationCoreProxyGetVisualOptionsRoot P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyExecuteScript(TF8SimulationCoreProxyExecuteScript P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyExecuteScriptAnimation(TF8SimulationCoreProxyExecuteScriptAnimation P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyGetScriptStatus(TF8SimulationCoreProxyGetScriptStatus P);
 	DLL_API void Register_Callback_F8SimulationCoreProxySetScriptStatus(TF8SimulationCoreProxySetScriptStatus P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyGetCurrentScriptInfo(TF8SimulationCoreProxyGetCurrentScriptInfo P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyStartScenario(TF8SimulationCoreProxyStartScenario P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyStopAllScenarios(TF8SimulationCoreProxyStopAllScenarios P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyClearUserVariables(TF8SimulationCoreProxyClearUserVariables P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyGetUserVariables(TF8SimulationCoreProxyGetUserVariables P);
 	DLL_API void Register_Callback_F8SimulationCoreProxySetUserVariables(TF8SimulationCoreProxySetUserVariables P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyGetUserVariable(TF8SimulationCoreProxyGetUserVariable P);
 	DLL_API void Register_Callback_F8SimulationCoreProxySetUserVariable(TF8SimulationCoreProxySetUserVariable P);
 	DLL_API void DoCb_SimulationApplyContextCallback(Cb_SimulationApplyContextMapperClass *object, void* context);
 	DLL_API void Register_Callback_F8SimulationCoreProxyRegisterEventApplyContext(TF8SimulationCoreProxyRegisterEventApplyContext P);
 	DLL_API void DoCb_SimulationStartEnvironmentCallback(Cb_SimulationStartEnvironmentMapperClass *object);
 	DLL_API void Register_Callback_F8SimulationCoreProxyRegisterEventStartEnvironment(TF8SimulationCoreProxyRegisterEventStartEnvironment P);
 	DLL_API void DoCb_SimulationStopEnvironmentCallback(Cb_SimulationStopEnvironmentMapperClass *object);
 	DLL_API void Register_Callback_F8SimulationCoreProxyRegisterEventStopEnvironment(TF8SimulationCoreProxyRegisterEventStopEnvironment P);
 	DLL_API void DoCb_SimulationStartScenarioCallback(Cb_SimulationStartScenarioMapperClass *object, void* scenario);
 	DLL_API void Register_Callback_F8SimulationCoreProxyRegisterEventStartScenario(TF8SimulationCoreProxyRegisterEventStartScenario P);
 	DLL_API void DoCb_SimulationStopScenarioCallback(Cb_SimulationStopScenarioMapperClass *object, void* scenario,int runningScenarioCount);
 	DLL_API void Register_Callback_F8SimulationCoreProxyRegisterEventStopScenario(TF8SimulationCoreProxyRegisterEventStopScenario P);
 	DLL_API void DoCb_SimulationStartEventCallback(Cb_SimulationStartEventMapperClass *object, void* Event);
 	DLL_API void Register_Callback_F8SimulationCoreProxyRegisterEventStartEvent(TF8SimulationCoreProxyRegisterEventStartEvent P);
 	DLL_API void DoCb_SimulationStopEventCallback(Cb_SimulationStopEventMapperClass *object, void* Event);
 	DLL_API void Register_Callback_F8SimulationCoreProxyRegisterEventStopEvent(TF8SimulationCoreProxyRegisterEventStopEvent P);
 	DLL_API void DoCb_SimulationStartScriptCallback(Cb_SimulationStartScriptMapperClass *object);
 	DLL_API void Register_Callback_F8SimulationCoreProxyRegisterEventStartScript(TF8SimulationCoreProxyRegisterEventStartScript P);
 	DLL_API void DoCb_SimulationStopScriptCallback(Cb_SimulationStopScriptMapperClass *object);
 	DLL_API void Register_Callback_F8SimulationCoreProxyRegisterEventStopScript(TF8SimulationCoreProxyRegisterEventStopScript P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyUnregisterEventApplyContext(TF8SimulationCoreProxyUnregisterEventApplyContext P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyUnregisterEventStartEnvironment(TF8SimulationCoreProxyUnregisterEventStartEnvironment P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyUnregisterEventStopEnvironment(TF8SimulationCoreProxyUnregisterEventStopEnvironment P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyUnregisterEventStartScenario(TF8SimulationCoreProxyUnregisterEventStartScenario P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyUnregisterEventStopScenario(TF8SimulationCoreProxyUnregisterEventStopScenario P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyUnregisterEventStartEvent(TF8SimulationCoreProxyUnregisterEventStartEvent P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyUnregisterEventStopEvent(TF8SimulationCoreProxyUnregisterEventStopEvent P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyUnregisterEventStartScript(TF8SimulationCoreProxyUnregisterEventStartScript P);
 	DLL_API void Register_Callback_F8SimulationCoreProxyUnregisterEventStopScript(TF8SimulationCoreProxyUnregisterEventStopScript P);
 	DLL_API void Register_Callback_F8OpenGLProxyGetSize(TF8OpenGLProxyGetSize P);
 	DLL_API void Register_Callback_F8OpenGLProxyGetRenderingViewPort(TF8OpenGLProxyGetRenderingViewPort P);
 	DLL_API void Register_Callback_F8OpenGLProxyGetProjectionMatrix(TF8OpenGLProxyGetProjectionMatrix P);
 	DLL_API void Register_Callback_F8OpenGLProxyGetModelViewMatrix(TF8OpenGLProxyGetModelViewMatrix P);
 	DLL_API void Register_Callback_F8OpenGLProxySetFocus(TF8OpenGLProxySetFocus P);
 	DLL_API void Register_Callback_F8OpenGLProxyChanged(TF8OpenGLProxyChanged P);
 	DLL_API void Register_Callback_F8OpenGLProxyDestroy(TF8OpenGLProxyDestroy P);
 	DLL_API void DoCb_MainFormOpenGLBeforePaintCallback(Cb_MainFormOpenGLBeforePaintMapperClass *object, int mode);
 	DLL_API void Register_Callback_F8MainOpenGLProxyRegisterEventOpenGLBeforePaint(TF8MainOpenGLProxyRegisterEventOpenGLBeforePaint P);
 	DLL_API void DoCb_MainFormOpenGLAfterDrawSceneCallback(Cb_MainFormOpenGLAfterDrawSceneMapperClass *object);
 	DLL_API void Register_Callback_F8MainOpenGLProxyRegisterEventOpenGLAfterDrawScene(TF8MainOpenGLProxyRegisterEventOpenGLAfterDrawScene P);
 	DLL_API void DoCb_MainFormOpenGLAfterPaintCallback(Cb_MainFormOpenGLAfterPaintMapperClass *object);
 	DLL_API void Register_Callback_F8MainOpenGLProxyRegisterEventOpenGLAfterPaint(TF8MainOpenGLProxyRegisterEventOpenGLAfterPaint P);
 	DLL_API void Register_Callback_F8MainOpenGLProxyUnregisterEventOpenGLBeforePaint(TF8MainOpenGLProxyUnregisterEventOpenGLBeforePaint P);
 	DLL_API void Register_Callback_F8MainOpenGLProxyUnregisterEventOpenGLAfterDrawScene(TF8MainOpenGLProxyUnregisterEventOpenGLAfterDrawScene P);
 	DLL_API void Register_Callback_F8MainOpenGLProxyUnregisterEventOpenGLAfterPaint(TF8MainOpenGLProxyUnregisterEventOpenGLAfterPaint P);
 	DLL_API void DoCb_MainFormOpenGLMouseEnterCallback(Cb_MainFormOpenGLMouseEnterMapperClass *object);
 	DLL_API void Register_Callback_F8MainOpenGLProxyRegisterEventOpenGLMouseEnter(TF8MainOpenGLProxyRegisterEventOpenGLMouseEnter P);
 	DLL_API void DoCb_MainFormOpenGLMouseLeaveCallback(Cb_MainFormOpenGLMouseLeaveMapperClass *object);
 	DLL_API void Register_Callback_F8MainOpenGLProxyRegisterEventOpenGLMouseLeave(TF8MainOpenGLProxyRegisterEventOpenGLMouseLeave P);
 	DLL_API void DoCb_MainFormOpenGLMouseUpCallback(Cb_MainFormOpenGLMouseUpMapperClass *object, F8MouseButton Button,F8ShiftState Shift,int X,int Y);
 	DLL_API void Register_Callback_F8MainOpenGLProxyRegisterEventOpenGLMouseUp(TF8MainOpenGLProxyRegisterEventOpenGLMouseUp P);
 	DLL_API void DoCb_MainFormOpenGLMouseDownCallback(Cb_MainFormOpenGLMouseDownMapperClass *object, F8MouseButton Button,F8ShiftState Shift,int X,int Y);
 	DLL_API void Register_Callback_F8MainOpenGLProxyRegisterEventOpenGLMouseDown(TF8MainOpenGLProxyRegisterEventOpenGLMouseDown P);
 	DLL_API void DoCb_MainFormOpenGLMouseMoveCallback(Cb_MainFormOpenGLMouseMoveMapperClass *object, F8ShiftState Shift,int X,int Y);
 	DLL_API void Register_Callback_F8MainOpenGLProxyRegisterEventOpenGLMouseMove(TF8MainOpenGLProxyRegisterEventOpenGLMouseMove P);
 	DLL_API void DoCb_MainFormOpenGLMouseWheelCallback(Cb_MainFormOpenGLMouseWheelMapperClass *object, F8ShiftState Shift,int WheelDelta,F8iVec2 MousePos,bool& Handled);
 	DLL_API void Register_Callback_F8MainOpenGLProxyRegisterEventOpenGLMouseWheel(TF8MainOpenGLProxyRegisterEventOpenGLMouseWheel P);
 	DLL_API void Register_Callback_F8MainOpenGLProxyUnregisterEventOpenGLMouseEnter(TF8MainOpenGLProxyUnregisterEventOpenGLMouseEnter P);
 	DLL_API void Register_Callback_F8MainOpenGLProxyUnregisterEventOpenGLMouseLeave(TF8MainOpenGLProxyUnregisterEventOpenGLMouseLeave P);
 	DLL_API void Register_Callback_F8MainOpenGLProxyUnregisterEventOpenGLMouseUp(TF8MainOpenGLProxyUnregisterEventOpenGLMouseUp P);
 	DLL_API void Register_Callback_F8MainOpenGLProxyUnregisterEventOpenGLMouseDown(TF8MainOpenGLProxyUnregisterEventOpenGLMouseDown P);
 	DLL_API void Register_Callback_F8MainOpenGLProxyUnregisterEventOpenGLMouseMove(TF8MainOpenGLProxyUnregisterEventOpenGLMouseMove P);
 	DLL_API void Register_Callback_F8MainOpenGLProxyUnregisterEventOpenGLMouseWheel(TF8MainOpenGLProxyUnregisterEventOpenGLMouseWheel P);
 	DLL_API void Register_Callback_F8MainOpenGLProxyDestroy(TF8MainOpenGLProxyDestroy P);
 	DLL_API void Register_Callback_F8MainRibbonControlProxyGetName(TF8MainRibbonControlProxyGetName P);
 	DLL_API void Register_Callback_F8MainRibbonControlProxyGetControlType(TF8MainRibbonControlProxyGetControlType P);
 	DLL_API void Register_Callback_F8MainRibbonControlProxyGetEnabled(TF8MainRibbonControlProxyGetEnabled P);
 	DLL_API void Register_Callback_F8MainRibbonControlProxySetEnabled(TF8MainRibbonControlProxySetEnabled P);
 	DLL_API void Register_Callback_F8MainRibbonControlProxyGetVisible(TF8MainRibbonControlProxyGetVisible P);
 	DLL_API void Register_Callback_F8MainRibbonControlProxySetVisible(TF8MainRibbonControlProxySetVisible P);
 	DLL_API void Register_Callback_F8MainRibbonControlProxyGetLeft(TF8MainRibbonControlProxyGetLeft P);
 	DLL_API void Register_Callback_F8MainRibbonControlProxySetLeft(TF8MainRibbonControlProxySetLeft P);
 	DLL_API void Register_Callback_F8MainRibbonControlProxyGetTop(TF8MainRibbonControlProxyGetTop P);
 	DLL_API void Register_Callback_F8MainRibbonControlProxySetTop(TF8MainRibbonControlProxySetTop P);
 	DLL_API void Register_Callback_F8MainRibbonControlProxyGetWidth(TF8MainRibbonControlProxyGetWidth P);
 	DLL_API void Register_Callback_F8MainRibbonControlProxySetWidth(TF8MainRibbonControlProxySetWidth P);
 	DLL_API void Register_Callback_F8MainRibbonControlProxyGetHeight(TF8MainRibbonControlProxyGetHeight P);
 	DLL_API void Register_Callback_F8MainRibbonControlProxySetHeight(TF8MainRibbonControlProxySetHeight P);
 	DLL_API void Register_Callback_F8MainRibbonControlProxyDestroy(TF8MainRibbonControlProxyDestroy P);
 	DLL_API void Register_Callback_F8MainRibbonButtonProxyGetCaption(TF8MainRibbonButtonProxyGetCaption P);
 	DLL_API void Register_Callback_F8MainRibbonButtonProxySetCaption(TF8MainRibbonButtonProxySetCaption P);
 	DLL_API void Register_Callback_F8MainRibbonButtonProxyIsSetCallbackOnClick(TF8MainRibbonButtonProxyIsSetCallbackOnClick P);
 	DLL_API void DoCb_RibbonMenuItemOnClickCallback(Cb_RibbonMenuItemOnClickMapperClass *object);
 	DLL_API void Register_Callback_F8MainRibbonButtonProxySetCallbackOnClick(TF8MainRibbonButtonProxySetCallbackOnClick P);
 	DLL_API void Register_Callback_F8MainRibbonButtonProxyUnsetCallbackOnClick(TF8MainRibbonButtonProxyUnsetCallbackOnClick P);
 	DLL_API void Register_Callback_F8MainRibbonButtonProxyDestroy(TF8MainRibbonButtonProxyDestroy P);
 	DLL_API void Register_Callback_F8MainRibbonEditProxyGetText(TF8MainRibbonEditProxyGetText P);
 	DLL_API void Register_Callback_F8MainRibbonEditProxySetText(TF8MainRibbonEditProxySetText P);
 	DLL_API void Register_Callback_F8MainRibbonEditProxyIsSetCallbackOnChange(TF8MainRibbonEditProxyIsSetCallbackOnChange P);
 	DLL_API void DoCb_RibbonMenuItemOnChangeCallback(Cb_RibbonMenuItemOnChangeMapperClass *object);
 	DLL_API void Register_Callback_F8MainRibbonEditProxySetCallbackOnChange(TF8MainRibbonEditProxySetCallbackOnChange P);
 	DLL_API void Register_Callback_F8MainRibbonEditProxyUnsetCallbackOnChange(TF8MainRibbonEditProxyUnsetCallbackOnChange P);
 	DLL_API void Register_Callback_F8MainRibbonEditProxyDestroy(TF8MainRibbonEditProxyDestroy P);
 	DLL_API void Register_Callback_F8MainRibbonLabelProxyGetCaption(TF8MainRibbonLabelProxyGetCaption P);
 	DLL_API void Register_Callback_F8MainRibbonLabelProxySetCaption(TF8MainRibbonLabelProxySetCaption P);
 	DLL_API void Register_Callback_F8MainRibbonLabelProxyDestroy(TF8MainRibbonLabelProxyDestroy P);
 	DLL_API void Register_Callback_F8MainRibbonCheckBoxProxyGetCaption(TF8MainRibbonCheckBoxProxyGetCaption P);
 	DLL_API void Register_Callback_F8MainRibbonCheckBoxProxySetCaption(TF8MainRibbonCheckBoxProxySetCaption P);
 	DLL_API void Register_Callback_F8MainRibbonCheckBoxProxyGetChecked(TF8MainRibbonCheckBoxProxyGetChecked P);
 	DLL_API void Register_Callback_F8MainRibbonCheckBoxProxySetChecked(TF8MainRibbonCheckBoxProxySetChecked P);
 	DLL_API void Register_Callback_F8MainRibbonCheckBoxProxyIsSetCallbackOnClick(TF8MainRibbonCheckBoxProxyIsSetCallbackOnClick P);
 	DLL_API void Register_Callback_F8MainRibbonCheckBoxProxySetCallbackOnClick(TF8MainRibbonCheckBoxProxySetCallbackOnClick P);
 	DLL_API void Register_Callback_F8MainRibbonCheckBoxProxyUnsetCallbackOnClick(TF8MainRibbonCheckBoxProxyUnsetCallbackOnClick P);
 	DLL_API void Register_Callback_F8MainRibbonCheckBoxProxyDestroy(TF8MainRibbonCheckBoxProxyDestroy P);
 	DLL_API void Register_Callback_F8MainRibbonGroupProxyCreateButton(TF8MainRibbonGroupProxyCreateButton P);
 	DLL_API void Register_Callback_F8MainRibbonGroupProxyCreateEdit(TF8MainRibbonGroupProxyCreateEdit P);
 	DLL_API void Register_Callback_F8MainRibbonGroupProxyCreateCheckBox(TF8MainRibbonGroupProxyCreateCheckBox P);
 	DLL_API void Register_Callback_F8MainRibbonGroupProxyCreateLabel(TF8MainRibbonGroupProxyCreateLabel P);
 	DLL_API void Register_Callback_F8MainRibbonGroupProxyCreatePanel(TF8MainRibbonGroupProxyCreatePanel P);
 	DLL_API void Register_Callback_F8MainRibbonGroupProxyGetControlByName(TF8MainRibbonGroupProxyGetControlByName P);
 	DLL_API void Register_Callback_F8MainRibbonGroupProxyDeleteControl(TF8MainRibbonGroupProxyDeleteControl P);
 	DLL_API void Register_Callback_F8MainRibbonGroupProxyGetRibbonControlsCount(TF8MainRibbonGroupProxyGetRibbonControlsCount P);
 	DLL_API void Register_Callback_F8MainRibbonGroupProxyGetRibbonControl(TF8MainRibbonGroupProxyGetRibbonControl P);
 	DLL_API void Register_Callback_F8MainRibbonGroupProxyGetName(TF8MainRibbonGroupProxyGetName P);
 	DLL_API void Register_Callback_F8MainRibbonGroupProxyGetCaption(TF8MainRibbonGroupProxyGetCaption P);
 	DLL_API void Register_Callback_F8MainRibbonGroupProxySetCaption(TF8MainRibbonGroupProxySetCaption P);
 	DLL_API void Register_Callback_F8MainRibbonGroupProxyGetEnabled(TF8MainRibbonGroupProxyGetEnabled P);
 	DLL_API void Register_Callback_F8MainRibbonGroupProxyGetVisible(TF8MainRibbonGroupProxyGetVisible P);
 	DLL_API void Register_Callback_F8MainRibbonGroupProxyDestroy(TF8MainRibbonGroupProxyDestroy P);
 	DLL_API void Register_Callback_F8MainRibbonPanelProxyCreateButton(TF8MainRibbonPanelProxyCreateButton P);
 	DLL_API void Register_Callback_F8MainRibbonPanelProxyCreateEdit(TF8MainRibbonPanelProxyCreateEdit P);
 	DLL_API void Register_Callback_F8MainRibbonPanelProxyCreateCheckBox(TF8MainRibbonPanelProxyCreateCheckBox P);
 	DLL_API void Register_Callback_F8MainRibbonPanelProxyCreateLabel(TF8MainRibbonPanelProxyCreateLabel P);
 	DLL_API void Register_Callback_F8MainRibbonPanelProxyGetControlsCount(TF8MainRibbonPanelProxyGetControlsCount P);
 	DLL_API void Register_Callback_F8MainRibbonPanelProxyGetControl(TF8MainRibbonPanelProxyGetControl P);
 	DLL_API void Register_Callback_F8MainRibbonPanelProxyGetControlByName(TF8MainRibbonPanelProxyGetControlByName P);
 	DLL_API void Register_Callback_F8MainRibbonPanelProxyDeleteControl(TF8MainRibbonPanelProxyDeleteControl P);
 	DLL_API void Register_Callback_F8MainRibbonPanelProxyDestroy(TF8MainRibbonPanelProxyDestroy P);
 	DLL_API void Register_Callback_F8MainRibbonTabProxyCreateGroup(TF8MainRibbonTabProxyCreateGroup P);
 	DLL_API void Register_Callback_F8MainRibbonTabProxyGetGroupByName(TF8MainRibbonTabProxyGetGroupByName P);
 	DLL_API void Register_Callback_F8MainRibbonTabProxyDeleteGroup(TF8MainRibbonTabProxyDeleteGroup P);
 	DLL_API void Register_Callback_F8MainRibbonTabProxyGetRibbonGroupsCount(TF8MainRibbonTabProxyGetRibbonGroupsCount P);
 	DLL_API void Register_Callback_F8MainRibbonTabProxyGetRibbonGroup(TF8MainRibbonTabProxyGetRibbonGroup P);
 	DLL_API void Register_Callback_F8MainRibbonTabProxyGetName(TF8MainRibbonTabProxyGetName P);
 	DLL_API void Register_Callback_F8MainRibbonTabProxyGetCaption(TF8MainRibbonTabProxyGetCaption P);
 	DLL_API void Register_Callback_F8MainRibbonTabProxySetCaption(TF8MainRibbonTabProxySetCaption P);
 	DLL_API void Register_Callback_F8MainRibbonTabProxyDestroy(TF8MainRibbonTabProxyDestroy P);
 	DLL_API void Register_Callback_F8MainRibbonProxyCreateTab(TF8MainRibbonProxyCreateTab P);
 	DLL_API void Register_Callback_F8MainRibbonProxyGetTabByCategory(TF8MainRibbonProxyGetTabByCategory P);
 	DLL_API void Register_Callback_F8MainRibbonProxyGetTabByName(TF8MainRibbonProxyGetTabByName P);
 	DLL_API void Register_Callback_F8MainRibbonProxyDeleteTab(TF8MainRibbonProxyDeleteTab P);
 	DLL_API void Register_Callback_F8MainRibbonProxyGetRibbonTabsCount(TF8MainRibbonProxyGetRibbonTabsCount P);
 	DLL_API void Register_Callback_F8MainRibbonProxyGetRibbonTab(TF8MainRibbonProxyGetRibbonTab P);
 	DLL_API void Register_Callback_F8MainRibbonProxyDestroy(TF8MainRibbonProxyDestroy P);
 	DLL_API void Register_Callback_F8MainCameraProxyGetMainCameraState(TF8MainCameraProxyGetMainCameraState P);
 	DLL_API void Register_Callback_F8MainCameraProxySetMainCameraState(TF8MainCameraProxySetMainCameraState P);
 	DLL_API void Register_Callback_F8MainCameraProxyMoveMainCameraTo(TF8MainCameraProxyMoveMainCameraTo P);
 	DLL_API void Register_Callback_F8MainCameraProxyDestroy(TF8MainCameraProxyDestroy P);
 	DLL_API void Register_Callback_F8SimulationScreenProxyGetSettings(TF8SimulationScreenProxyGetSettings P);
 	DLL_API void Register_Callback_F8SimulationScreenProxySetSettings(TF8SimulationScreenProxySetSettings P);
 	DLL_API void Register_Callback_F8SimulationScreenProxyDestroy(TF8SimulationScreenProxyDestroy P);
 	DLL_API void Register_Callback_F8NavigationStateTypeGetMode(TF8NavigationStateTypeGetMode P);
 	DLL_API void Register_Callback_F8NavigationStateTypeSetMode(TF8NavigationStateTypeSetMode P);
 	DLL_API void Register_Callback_F8NavigationStateTypeGetCommonParameter(TF8NavigationStateTypeGetCommonParameter P);
 	DLL_API void Register_Callback_F8NavigationStateTypeSetCommonParameter(TF8NavigationStateTypeSetCommonParameter P);
 	DLL_API void Register_Callback_F8NavigationStateTypeSetRoad(TF8NavigationStateTypeSetRoad P);
 	DLL_API void Register_Callback_F8NavigationStateTypeSetVehicle(TF8NavigationStateTypeSetVehicle P);
 	DLL_API void Register_Callback_F8NavigationStateTypeSetTrailer(TF8NavigationStateTypeSetTrailer P);
 	DLL_API void Register_Callback_F8NavigationStateTypeSetOffRoadStartPoint(TF8NavigationStateTypeSetOffRoadStartPoint P);
 	DLL_API void Register_Callback_F8NavigationStateTypeGetWalkParameter(TF8NavigationStateTypeGetWalkParameter P);
 	DLL_API void Register_Callback_F8NavigationStateTypeSetCharacter(TF8NavigationStateTypeSetCharacter P);
 	DLL_API void Register_Callback_F8NavigationStateTypeGetDriveParameter(TF8NavigationStateTypeGetDriveParameter P);
 	DLL_API void Register_Callback_F8NavigationStateTypeSetDriveParameter(TF8NavigationStateTypeSetDriveParameter P);
 	DLL_API void Register_Callback_F8NavigationStateTypeSetNewCar(TF8NavigationStateTypeSetNewCar P);
 	DLL_API void Register_Callback_F8NavigationStateTypeGetFlyParameter(TF8NavigationStateTypeGetFlyParameter P);
 	DLL_API void Register_Callback_F8NavigationStateTypeSetFlyParameter(TF8NavigationStateTypeSetFlyParameter P);
 	DLL_API void Register_Callback_F8NavigationStateTypeSetFlightPath(TF8NavigationStateTypeSetFlightPath P);
 	DLL_API void Register_Callback_F8NavigationStateTypeGetBikeParameter(TF8NavigationStateTypeGetBikeParameter P);
 	DLL_API void Register_Callback_F8NavigationStateTypeSetBikeParameter(TF8NavigationStateTypeSetBikeParameter P);
 	DLL_API void Register_Callback_F8NavigationStateTypeSetBikeCharacter(TF8NavigationStateTypeSetBikeCharacter P);
 	DLL_API void Register_Callback_F8NavigationStateTypeSetBikeFlightPath(TF8NavigationStateTypeSetBikeFlightPath P);
 	DLL_API void Register_Callback_F8NavigationStateTypeDestroy(TF8NavigationStateTypeDestroy P);
 	DLL_API void Register_Callback_F8MainFormProxyGetCameraMoveMode(TF8MainFormProxyGetCameraMoveMode P);
 	DLL_API void Register_Callback_F8MainFormProxySetCameraMoveMode(TF8MainFormProxySetCameraMoveMode P);
 	DLL_API void Register_Callback_F8MainFormProxyGetMainCamera(TF8MainFormProxyGetMainCamera P);
 	DLL_API void Register_Callback_F8MainFormProxyGetMainSimulationScreen(TF8MainFormProxyGetMainSimulationScreen P);
 	DLL_API void Register_Callback_F8MainFormProxyGetNavigationMode(TF8MainFormProxyGetNavigationMode P);
 	DLL_API void Register_Callback_F8MainFormProxyGetInitialNavigationState(TF8MainFormProxyGetInitialNavigationState P);
 	DLL_API void Register_Callback_F8MainFormProxySetNavigationState(TF8MainFormProxySetNavigationState P);
 	DLL_API void Register_Callback_F8MainFormProxyGetMainOpenGL(TF8MainFormProxyGetMainOpenGL P);
 	DLL_API void Register_Callback_F8MainFormProxyGetMainRibbonMenu(TF8MainFormProxyGetMainRibbonMenu P);
 	DLL_API void Register_Callback_F8MainFormProxyGetWindowHandle(TF8MainFormProxyGetWindowHandle P);
 	DLL_API void DoCb_MainFormNavigationModeChangeCallback(Cb_MainFormNavigationModeChangeMapperClass *object);
 	DLL_API void Register_Callback_F8MainFormProxyRegisterEventNavigationModeChange(TF8MainFormProxyRegisterEventNavigationModeChange P);
 	DLL_API void DoCb_MainFormMoveModeChangeCallback(Cb_MainFormMoveModeChangeMapperClass *object);
 	DLL_API void Register_Callback_F8MainFormProxyRegisterEventMoveModeChange(TF8MainFormProxyRegisterEventMoveModeChange P);
 	DLL_API void DoCb_MainFormModelClickCallback(Cb_MainFormModelClickMapperClass *object, void* instance,F8ModelSelectionEnum& command);
 	DLL_API void Register_Callback_F8MainFormProxyRegisterEventModelClick(TF8MainFormProxyRegisterEventModelClick P);
 	DLL_API void DoCb_MainFormJoystickMoveCallback(Cb_MainFormJoystickMoveMapperClass *object, int X,int Y,int Z,int rX,int rY,int rZ,int throttle,int clutch);
 	DLL_API void Register_Callback_F8MainFormProxyRegisterEventJoystickMove(TF8MainFormProxyRegisterEventJoystickMove P);
 	DLL_API void DoCb_MainFormJoystickButtonDownCallback(Cb_MainFormJoystickButtonDownMapperClass *object, int button);
 	DLL_API void Register_Callback_F8MainFormProxyRegisterEventJoystickButtonDown(TF8MainFormProxyRegisterEventJoystickButtonDown P);
 	DLL_API void DoCb_MainFormJoystickButtonUpCallback(Cb_MainFormJoystickButtonUpMapperClass *object, int button);
 	DLL_API void Register_Callback_F8MainFormProxyRegisterEventJoystickButtonUp(TF8MainFormProxyRegisterEventJoystickButtonUp P);
 	DLL_API void DoCb_MainFormJoystickHatCallback(Cb_MainFormJoystickHatMapperClass *object, unsigned angle);
 	DLL_API void Register_Callback_F8MainFormProxyRegisterEventJoystickHat(TF8MainFormProxyRegisterEventJoystickHat P);
 	DLL_API void DoCb_MainFormKeyUpCallback(Cb_MainFormKeyUpMapperClass *object, unsigned short& Key,F8ShiftState Shift);
 	DLL_API void Register_Callback_F8MainFormProxyRegisterEventKeyUp(TF8MainFormProxyRegisterEventKeyUp P);
 	DLL_API void DoCb_MainFormKeyDownCallback(Cb_MainFormKeyDownMapperClass *object, unsigned short& Key,F8ShiftState Shift);
 	DLL_API void Register_Callback_F8MainFormProxyRegisterEventKeyDown(TF8MainFormProxyRegisterEventKeyDown P);
 	DLL_API void Register_Callback_F8MainFormProxyUnregisterEventNavigationModeChange(TF8MainFormProxyUnregisterEventNavigationModeChange P);
 	DLL_API void Register_Callback_F8MainFormProxyUnregisterEventMoveModeChange(TF8MainFormProxyUnregisterEventMoveModeChange P);
 	DLL_API void Register_Callback_F8MainFormProxyUnregisterEventModelClick(TF8MainFormProxyUnregisterEventModelClick P);
 	DLL_API void Register_Callback_F8MainFormProxyUnregisterEventJoystickMove(TF8MainFormProxyUnregisterEventJoystickMove P);
 	DLL_API void Register_Callback_F8MainFormProxyUnregisterEventJoystickButtonDown(TF8MainFormProxyUnregisterEventJoystickButtonDown P);
 	DLL_API void Register_Callback_F8MainFormProxyUnregisterEventJoystickButtonUp(TF8MainFormProxyUnregisterEventJoystickButtonUp P);
 	DLL_API void Register_Callback_F8MainFormProxyUnregisterEventJoystickHat(TF8MainFormProxyUnregisterEventJoystickHat P);
 	DLL_API void Register_Callback_F8MainFormProxyUnregisterEventKeyUp(TF8MainFormProxyUnregisterEventKeyUp P);
 	DLL_API void Register_Callback_F8MainFormProxyUnregisterEventKeyDown(TF8MainFormProxyUnregisterEventKeyDown P);
 	DLL_API void Register_Callback_F8MainFormProxyDestroy(TF8MainFormProxyDestroy P);
 	DLL_API void Register_Callback_F8GazeTrackingPluginProxyGetCurrentGazeData(TF8GazeTrackingPluginProxyGetCurrentGazeData P);
 	DLL_API void Register_Callback_F8GazeTrackingPluginProxyPushGazeData(TF8GazeTrackingPluginProxyPushGazeData P);
 	DLL_API void DoCb_GazeTrackingPluginGazeDataUpdatedCallback(Cb_GazeTrackingPluginGazeDataUpdatedMapperClass *object);
 	DLL_API void Register_Callback_F8GazeTrackingPluginProxyRegisterCallbackGazeDataUpdated(TF8GazeTrackingPluginProxyRegisterCallbackGazeDataUpdated P);
 	DLL_API void Register_Callback_F8GazeTrackingPluginProxyUnregisterCallbackGazeDataUpdated(TF8GazeTrackingPluginProxyUnregisterCallbackGazeDataUpdated P);
 	DLL_API void Register_Callback_F8GazeTrackingPluginProxyDestroy(TF8GazeTrackingPluginProxyDestroy P);
 	DLL_API void Register_Callback_F8ApplicationServicesGetSimulationCore(TF8ApplicationServicesGetSimulationCore P);
 	DLL_API void Register_Callback_F8ApplicationServicesGetGazeTrackingPlugin(TF8ApplicationServicesGetGazeTrackingPlugin P);
 	DLL_API void Register_Callback_F8ApplicationServicesGetProject(TF8ApplicationServicesGetProject P);
 	DLL_API void Register_Callback_F8ApplicationServicesGetMainForm(TF8ApplicationServicesGetMainForm P);
 	DLL_API void Register_Callback_F8ApplicationServicesGetCoordinateConverter(TF8ApplicationServicesGetCoordinateConverter P);
 	DLL_API void Register_Callback_F8ApplicationServicesGetWorkingDirectory(TF8ApplicationServicesGetWorkingDirectory P);
 	DLL_API void Register_Callback_F8ApplicationServicesGetUserDirectory(TF8ApplicationServicesGetUserDirectory P);
 	DLL_API void Register_Callback_F8ApplicationServicesGetHomeDirectory(TF8ApplicationServicesGetHomeDirectory P);
 	DLL_API void Register_Callback_F8ApplicationServicesProcessMessages(TF8ApplicationServicesProcessMessages P);
 	DLL_API void DoCb_ApplicationPluginAbleMenusCallback(Cb_ApplicationPluginAbleMenusMapperClass *object, bool enable);
 	DLL_API void Register_Callback_F8ApplicationServicesRegisterCallbackPluginAbleMenus(TF8ApplicationServicesRegisterCallbackPluginAbleMenus P);
 	DLL_API void Register_Callback_F8ApplicationServicesUnregisterCallbackPluginAbleMenus(TF8ApplicationServicesUnregisterCallbackPluginAbleMenus P);
 	DLL_API void DoCb_ApplicationOnErrorOrWarningCallback(Cb_ApplicationOnErrorOrWarningMapperClass *object, F8ApplicationErrorTypeEnum errorType,unsigned short errorCode,const wchar_t* errorMessage);
 	DLL_API void Register_Callback_F8ApplicationServicesRegisterCallbackOnErrorOrWarning(TF8ApplicationServicesRegisterCallbackOnErrorOrWarning P);
 	DLL_API void Register_Callback_F8ApplicationServicesUnregisterCallbackOnErrorOrWarning(TF8ApplicationServicesUnregisterCallbackOnErrorOrWarning P);
 	DLL_API void DoCb_ApplicationNewProjectCallback(Cb_ApplicationNewProjectMapperClass *object);
 	DLL_API void Register_Callback_F8ApplicationServicesRegisterCallbackNewProject(TF8ApplicationServicesRegisterCallbackNewProject P);
 	DLL_API void Register_Callback_F8ApplicationServicesUnregisterCallbackNewProject(TF8ApplicationServicesUnregisterCallbackNewProject P);
 	DLL_API void DoCb_ApplicationBeforeSaveProjectCallback(Cb_ApplicationBeforeSaveProjectMapperClass *object, const wchar_t* name);
 	DLL_API void Register_Callback_F8ApplicationServicesRegisterCallbackBeforeSaveProject(TF8ApplicationServicesRegisterCallbackBeforeSaveProject P);
 	DLL_API void Register_Callback_F8ApplicationServicesUnregisterCallbackBeforeSaveProject(TF8ApplicationServicesUnregisterCallbackBeforeSaveProject P);
 	DLL_API void DoCb_ApplicationAfterSaveProjectCallback(Cb_ApplicationAfterSaveProjectMapperClass *object);
 	DLL_API void Register_Callback_F8ApplicationServicesRegisterCallbackAfterSaveProject(TF8ApplicationServicesRegisterCallbackAfterSaveProject P);
 	DLL_API void Register_Callback_F8ApplicationServicesUnregisterCallbackAfterSaveProject(TF8ApplicationServicesUnregisterCallbackAfterSaveProject P);
 	DLL_API void DoCb_ApplicationCloseProjectQueryCallback(Cb_ApplicationCloseProjectQueryMapperClass *object, bool& Allow);
 	DLL_API void Register_Callback_F8ApplicationServicesRegisterCallbackCloseProjectQuery(TF8ApplicationServicesRegisterCallbackCloseProjectQuery P);
 	DLL_API void Register_Callback_F8ApplicationServicesUnregisterCallbackCloseProjectQuery(TF8ApplicationServicesUnregisterCallbackCloseProjectQuery P);
 	DLL_API void DoCb_ApplicationBeforeDestroyProjectCallback(Cb_ApplicationBeforeDestroyProjectMapperClass *object);
 	DLL_API void Register_Callback_F8ApplicationServicesRegisterCallbackBeforeDestroyProject(TF8ApplicationServicesRegisterCallbackBeforeDestroyProject P);
 	DLL_API void Register_Callback_F8ApplicationServicesUnregisterCallbackBeforeDestroyProject(TF8ApplicationServicesUnregisterCallbackBeforeDestroyProject P);
 	DLL_API void DoCb_ApplicationAfterLoadProjectCallback(Cb_ApplicationAfterLoadProjectMapperClass *object);
 	DLL_API void Register_Callback_F8ApplicationServicesRegisterCallbackAfterLoadProject(TF8ApplicationServicesRegisterCallbackAfterLoadProject P);
 	DLL_API void Register_Callback_F8ApplicationServicesUnregisterCallbackAfterLoadProject(TF8ApplicationServicesUnregisterCallbackAfterLoadProject P);
 	DLL_API void Register_Callback_F8ApplicationServicesDestroy(TF8ApplicationServicesDestroy P);

}

inline void Register_Callback_GetAPI(TGetAPI P)
{
	GetApplicationServices = P;
}
inline void CPPAPIDeleteObject(void* obj)
{
	delete obj;
}
inline void InitAPI(void* pDll)
{
	g_applicationServices = new F8ApplicationServices(GetApplicationServices(pDll));
}
inline void FinalizeAPI(void)
{
	delete g_applicationServices;
}
inline void Register_Callback_F8ObjectProxyGetProxyName(TF8ObjectProxyGetProxyName P)
{
	Generated_F8ObjectProxyGetProxyName = P;
}
inline void Register_Callback_F8ObjectProxyGetGUID(TF8ObjectProxyGetGUID P)
{
	Generated_F8ObjectProxyGetGUID = P;
}
inline void Register_Callback_F8ObjectProxyIsSameAs(TF8ObjectProxyIsSameAs P)
{
	Generated_F8ObjectProxyIsSameAs = P;
}
inline void Register_Callback_F8ObjectProxyGetPluginData(TF8ObjectProxyGetPluginData P)
{
	Generated_F8ObjectProxyGetPluginData = P;
}
inline void Register_Callback_F8ObjectProxySetPluginData(TF8ObjectProxySetPluginData P)
{
	Generated_F8ObjectProxySetPluginData = P;
}
inline void Register_Callback_F8ObjectProxyGetPluginBinaryDataSize(TF8ObjectProxyGetPluginBinaryDataSize P)
{
	Generated_F8ObjectProxyGetPluginBinaryDataSize = P;
}
inline void Register_Callback_F8ObjectProxyGetPluginBinaryData(TF8ObjectProxyGetPluginBinaryData P)
{
	Generated_F8ObjectProxyGetPluginBinaryData = P;
}
inline void Register_Callback_F8ObjectProxySetPluginBinaryData(TF8ObjectProxySetPluginBinaryData P)
{
	Generated_F8ObjectProxySetPluginBinaryData = P;
}
inline void DoCb_ObjectOnBeforeDestructionCallback(Cb_ObjectOnBeforeDestructionMapperClass *object, void* instance)
{
	object->DoCb_ObjectOnBeforeDestructionCallback(std::make_shared<F8ObjectProxy_Class>(instance));
}
inline void Register_Callback_F8ObjectProxyRegisterCallbackOnBeforeDestruction(TF8ObjectProxyRegisterCallbackOnBeforeDestruction P)
{
	Generated_F8ObjectProxyRegisterCallbackOnBeforeDestruction = P;
}
inline void Register_Callback_F8ObjectProxyUnregisterCallbackOnBeforeDestruction(TF8ObjectProxyUnregisterCallbackOnBeforeDestruction P)
{
	Generated_F8ObjectProxyUnregisterCallbackOnBeforeDestruction = P;
}
inline void Register_Callback_F8ObjectProxyDestroy(TF8ObjectProxyDestroy P)
{
	Generated_F8ObjectProxyDestroy = P;
}
inline void Register_Callback_F8ModelProxyGetName(TF8ModelProxyGetName P)
{
	Generated_F8ModelProxyGetName = P;
}
inline void Register_Callback_F8ModelProxyGetModelType(TF8ModelProxyGetModelType P)
{
	Generated_F8ModelProxyGetModelType = P;
}
inline void Register_Callback_F8ModelProxyDestroy(TF8ModelProxyDestroy P)
{
	Generated_F8ModelProxyDestroy = P;
}
inline void Register_Callback_F8ThreeDModelProxyDestroy(TF8ThreeDModelProxyDestroy P)
{
	Generated_F8ThreeDModelProxyDestroy = P;
}
inline void Register_Callback_F8MD3ModelProxyDestroy(TF8MD3ModelProxyDestroy P)
{
	Generated_F8MD3ModelProxyDestroy = P;
}
inline void Register_Callback_F8ObjectInstanceProxyGetName(TF8ObjectInstanceProxyGetName P)
{
	Generated_F8ObjectInstanceProxyGetName = P;
}
inline void Register_Callback_F8ObjectInstanceProxyGetDescription(TF8ObjectInstanceProxyGetDescription P)
{
	Generated_F8ObjectInstanceProxyGetDescription = P;
}
inline void Register_Callback_F8ObjectInstanceProxyGetID(TF8ObjectInstanceProxyGetID P)
{
	Generated_F8ObjectInstanceProxyGetID = P;
}
inline void Register_Callback_F8ObjectInstanceProxyGetDisplayedIn(TF8ObjectInstanceProxyGetDisplayedIn P)
{
	Generated_F8ObjectInstanceProxyGetDisplayedIn = P;
}
inline void Register_Callback_F8ObjectInstanceProxySetDisplayedIn(TF8ObjectInstanceProxySetDisplayedIn P)
{
	Generated_F8ObjectInstanceProxySetDisplayedIn = P;
}
inline void Register_Callback_F8ObjectInstanceProxyDestroy(TF8ObjectInstanceProxyDestroy P)
{
	Generated_F8ObjectInstanceProxyDestroy = P;
}
inline void Register_Callback_F8ModelInstanceProxyGetPosition(TF8ModelInstanceProxyGetPosition P)
{
	Generated_F8ModelInstanceProxyGetPosition = P;
}
inline void Register_Callback_F8ModelInstanceProxySetPosition(TF8ModelInstanceProxySetPosition P)
{
	Generated_F8ModelInstanceProxySetPosition = P;
}
inline void Register_Callback_F8ModelInstanceProxyGetScale(TF8ModelInstanceProxyGetScale P)
{
	Generated_F8ModelInstanceProxyGetScale = P;
}
inline void Register_Callback_F8ModelInstanceProxyGetScaleFactor(TF8ModelInstanceProxyGetScaleFactor P)
{
	Generated_F8ModelInstanceProxyGetScaleFactor = P;
}
inline void Register_Callback_F8ModelInstanceProxyGetYawAngle(TF8ModelInstanceProxyGetYawAngle P)
{
	Generated_F8ModelInstanceProxyGetYawAngle = P;
}
inline void Register_Callback_F8ModelInstanceProxySetYawAngle(TF8ModelInstanceProxySetYawAngle P)
{
	Generated_F8ModelInstanceProxySetYawAngle = P;
}
inline void Register_Callback_F8ModelInstanceProxyGetPitchAngle(TF8ModelInstanceProxyGetPitchAngle P)
{
	Generated_F8ModelInstanceProxyGetPitchAngle = P;
}
inline void Register_Callback_F8ModelInstanceProxySetPitchAngle(TF8ModelInstanceProxySetPitchAngle P)
{
	Generated_F8ModelInstanceProxySetPitchAngle = P;
}
inline void Register_Callback_F8ModelInstanceProxyGetRollAngle(TF8ModelInstanceProxyGetRollAngle P)
{
	Generated_F8ModelInstanceProxyGetRollAngle = P;
}
inline void Register_Callback_F8ModelInstanceProxySetRollAngle(TF8ModelInstanceProxySetRollAngle P)
{
	Generated_F8ModelInstanceProxySetRollAngle = P;
}
inline void Register_Callback_F8ModelInstanceProxyGetCenterPosition(TF8ModelInstanceProxyGetCenterPosition P)
{
	Generated_F8ModelInstanceProxyGetCenterPosition = P;
}
inline void Register_Callback_F8ModelInstanceProxyGetRadius(TF8ModelInstanceProxyGetRadius P)
{
	Generated_F8ModelInstanceProxyGetRadius = P;
}
inline void Register_Callback_F8ModelInstanceProxyGetBoundingBoxesCount(TF8ModelInstanceProxyGetBoundingBoxesCount P)
{
	Generated_F8ModelInstanceProxyGetBoundingBoxesCount = P;
}
inline void Register_Callback_F8ModelInstanceProxyGetBoundingBox(TF8ModelInstanceProxyGetBoundingBox P)
{
	Generated_F8ModelInstanceProxyGetBoundingBox = P;
}
inline void Register_Callback_F8ModelInstanceProxyDestroy(TF8ModelInstanceProxyDestroy P)
{
	Generated_F8ModelInstanceProxyDestroy = P;
}
inline void Register_Callback_F8ModelInstanceWithBasePositionProxyGetBasePosition3D(TF8ModelInstanceWithBasePositionProxyGetBasePosition3D P)
{
	Generated_F8ModelInstanceWithBasePositionProxyGetBasePosition3D = P;
}
inline void Register_Callback_F8ModelInstanceWithBasePositionProxyGetBasePosition2D(TF8ModelInstanceWithBasePositionProxyGetBasePosition2D P)
{
	Generated_F8ModelInstanceWithBasePositionProxyGetBasePosition2D = P;
}
inline void Register_Callback_F8ModelInstanceWithBasePositionProxySetBasePosition2D(TF8ModelInstanceWithBasePositionProxySetBasePosition2D P)
{
	Generated_F8ModelInstanceWithBasePositionProxySetBasePosition2D = P;
}
inline void Register_Callback_F8ModelInstanceWithBasePositionProxyGetDeltaH(TF8ModelInstanceWithBasePositionProxyGetDeltaH P)
{
	Generated_F8ModelInstanceWithBasePositionProxyGetDeltaH = P;
}
inline void Register_Callback_F8ModelInstanceWithBasePositionProxySetDeltaH(TF8ModelInstanceWithBasePositionProxySetDeltaH P)
{
	Generated_F8ModelInstanceWithBasePositionProxySetDeltaH = P;
}
inline void Register_Callback_F8ModelInstanceWithBasePositionProxyDestroy(TF8ModelInstanceWithBasePositionProxyDestroy P)
{
	Generated_F8ModelInstanceWithBasePositionProxyDestroy = P;
}
inline void Register_Callback_F8ModelInstanceWithoutBasePositionProxyDestroy(TF8ModelInstanceWithoutBasePositionProxyDestroy P)
{
	Generated_F8ModelInstanceWithoutBasePositionProxyDestroy = P;
}
inline void Register_Callback_F8ThreeDModelInstanceProxyActivateCommand(TF8ThreeDModelInstanceProxyActivateCommand P)
{
	Generated_F8ThreeDModelInstanceProxyActivateCommand = P;
}
inline void Register_Callback_F8ThreeDModelInstanceProxyDeactivateCommand(TF8ThreeDModelInstanceProxyDeactivateCommand P)
{
	Generated_F8ThreeDModelInstanceProxyDeactivateCommand = P;
}
inline void Register_Callback_F8ThreeDModelInstanceProxyGetTrafficLights(TF8ThreeDModelInstanceProxyGetTrafficLights P)
{
	Generated_F8ThreeDModelInstanceProxyGetTrafficLights = P;
}
inline void Register_Callback_F8ThreeDModelInstanceProxyGetCarLights(TF8ThreeDModelInstanceProxyGetCarLights P)
{
	Generated_F8ThreeDModelInstanceProxyGetCarLights = P;
}
inline void Register_Callback_F8ThreeDModelInstanceProxyDestroy(TF8ThreeDModelInstanceProxyDestroy P)
{
	Generated_F8ThreeDModelInstanceProxyDestroy = P;
}
inline void Register_Callback_F8SectionProxyGetName(TF8SectionProxyGetName P)
{
	Generated_F8SectionProxyGetName = P;
}
inline void Register_Callback_F8SectionProxyDestroy(TF8SectionProxyDestroy P)
{
	Generated_F8SectionProxyDestroy = P;
}
inline void Register_Callback_F8RoadLaneProxyGetLength(TF8RoadLaneProxyGetLength P)
{
	Generated_F8RoadLaneProxyGetLength = P;
}
inline void Register_Callback_F8RoadLaneProxyGetParentRoad(TF8RoadLaneProxyGetParentRoad P)
{
	Generated_F8RoadLaneProxyGetParentRoad = P;
}
inline void Register_Callback_F8RoadLaneProxyGetIsForward(TF8RoadLaneProxyGetIsForward P)
{
	Generated_F8RoadLaneProxyGetIsForward = P;
}
inline void Register_Callback_F8RoadLaneProxyGetPosition(TF8RoadLaneProxyGetPosition P)
{
	Generated_F8RoadLaneProxyGetPosition = P;
}
inline void Register_Callback_F8RoadLaneProxyGetDirection(TF8RoadLaneProxyGetDirection P)
{
	Generated_F8RoadLaneProxyGetDirection = P;
}
inline void Register_Callback_F8RoadLaneProxyGetLaneID(TF8RoadLaneProxyGetLaneID P)
{
	Generated_F8RoadLaneProxyGetLaneID = P;
}
inline void Register_Callback_F8RoadLaneProxyGetLaneWidth(TF8RoadLaneProxyGetLaneWidth P)
{
	Generated_F8RoadLaneProxyGetLaneWidth = P;
}
inline void Register_Callback_F8RoadLaneProxyGetCurveInformation(TF8RoadLaneProxyGetCurveInformation P)
{
	Generated_F8RoadLaneProxyGetCurveInformation = P;
}
inline void Register_Callback_F8RoadLaneProxyConvertDistance(TF8RoadLaneProxyConvertDistance P)
{
	Generated_F8RoadLaneProxyConvertDistance = P;
}
inline void Register_Callback_F8RoadLaneProxyCalculateDistanceFrom(TF8RoadLaneProxyCalculateDistanceFrom P)
{
	Generated_F8RoadLaneProxyCalculateDistanceFrom = P;
}
inline void Register_Callback_F8RoadLaneProxyDestroy(TF8RoadLaneProxyDestroy P)
{
	Generated_F8RoadLaneProxyDestroy = P;
}
inline void Register_Callback_F8RoadDistanceFeatureProxyGetFeatureType(TF8RoadDistanceFeatureProxyGetFeatureType P)
{
	Generated_F8RoadDistanceFeatureProxyGetFeatureType = P;
}
inline void Register_Callback_F8RoadDistanceFeatureProxyGetDistance(TF8RoadDistanceFeatureProxyGetDistance P)
{
	Generated_F8RoadDistanceFeatureProxyGetDistance = P;
}
inline void Register_Callback_F8RoadDistanceFeatureProxyDestroy(TF8RoadDistanceFeatureProxyDestroy P)
{
	Generated_F8RoadDistanceFeatureProxyDestroy = P;
}
inline void Register_Callback_F8RoadSectionChangeProxyGetSection(TF8RoadSectionChangeProxyGetSection P)
{
	Generated_F8RoadSectionChangeProxyGetSection = P;
}
inline void Register_Callback_F8RoadSectionChangeProxyDestroy(TF8RoadSectionChangeProxyDestroy P)
{
	Generated_F8RoadSectionChangeProxyDestroy = P;
}
inline void Register_Callback_F8RoadSectionTransitionProxyDestroy(TF8RoadSectionTransitionProxyDestroy P)
{
	Generated_F8RoadSectionTransitionProxyDestroy = P;
}
inline void Register_Callback_F8RoadDistanceFeatureWithLengthProxyGetLength(TF8RoadDistanceFeatureWithLengthProxyGetLength P)
{
	Generated_F8RoadDistanceFeatureWithLengthProxyGetLength = P;
}
inline void Register_Callback_F8RoadDistanceFeatureWithLengthProxyDestroy(TF8RoadDistanceFeatureWithLengthProxyDestroy P)
{
	Generated_F8RoadDistanceFeatureWithLengthProxyDestroy = P;
}
inline void Register_Callback_F8RoadBridgeZoneProxyDestroy(TF8RoadBridgeZoneProxyDestroy P)
{
	Generated_F8RoadBridgeZoneProxyDestroy = P;
}
inline void Register_Callback_F8RoadTunnelZoneProxyDestroy(TF8RoadTunnelZoneProxyDestroy P)
{
	Generated_F8RoadTunnelZoneProxyDestroy = P;
}
inline void Register_Callback_F8RoadUnmodifiedTerrainZoneProxyDestroy(TF8RoadUnmodifiedTerrainZoneProxyDestroy P)
{
	Generated_F8RoadUnmodifiedTerrainZoneProxyDestroy = P;
}
inline void Register_Callback_F8RoadObstructionProxyGetDescription(TF8RoadObstructionProxyGetDescription P)
{
	Generated_F8RoadObstructionProxyGetDescription = P;
}
inline void Register_Callback_F8RoadObstructionProxyGetDistance(TF8RoadObstructionProxyGetDistance P)
{
	Generated_F8RoadObstructionProxyGetDistance = P;
}
inline void Register_Callback_F8RoadObstructionProxyGetLength(TF8RoadObstructionProxyGetLength P)
{
	Generated_F8RoadObstructionProxyGetLength = P;
}
inline void Register_Callback_F8RoadObstructionProxyDestroy(TF8RoadObstructionProxyDestroy P)
{
	Generated_F8RoadObstructionProxyDestroy = P;
}
inline void Register_Callback_F8RoadIntersectionInfoTypeGetIntersectionIdx(TF8RoadIntersectionInfoTypeGetIntersectionIdx P)
{
	Generated_F8RoadIntersectionInfoTypeGetIntersectionIdx = P;
}
inline void Register_Callback_F8RoadIntersectionInfoTypeGetStartDistance(TF8RoadIntersectionInfoTypeGetStartDistance P)
{
	Generated_F8RoadIntersectionInfoTypeGetStartDistance = P;
}
inline void Register_Callback_F8RoadIntersectionInfoTypeGetEndDistance(TF8RoadIntersectionInfoTypeGetEndDistance P)
{
	Generated_F8RoadIntersectionInfoTypeGetEndDistance = P;
}
inline void Register_Callback_F8RoadIntersectionInfoTypeDestroy(TF8RoadIntersectionInfoTypeDestroy P)
{
	Generated_F8RoadIntersectionInfoTypeDestroy = P;
}
inline void Register_Callback_F8RoadRampConnectionInfoTypeGetPosition(TF8RoadRampConnectionInfoTypeGetPosition P)
{
	Generated_F8RoadRampConnectionInfoTypeGetPosition = P;
}
inline void Register_Callback_F8RoadRampConnectionInfoTypeGetIsConnected(TF8RoadRampConnectionInfoTypeGetIsConnected P)
{
	Generated_F8RoadRampConnectionInfoTypeGetIsConnected = P;
}
inline void Register_Callback_F8RoadRampConnectionInfoTypeGetConnectedRoadName(TF8RoadRampConnectionInfoTypeGetConnectedRoadName P)
{
	Generated_F8RoadRampConnectionInfoTypeGetConnectedRoadName = P;
}
inline void Register_Callback_F8RoadRampConnectionInfoTypeDestroy(TF8RoadRampConnectionInfoTypeDestroy P)
{
	Generated_F8RoadRampConnectionInfoTypeDestroy = P;
}
inline void Register_Callback_F8RoadSectionInfoTypeDestroy(TF8RoadSectionInfoTypeDestroy P)
{
	Generated_F8RoadSectionInfoTypeDestroy = P;
}
inline void Register_Callback_F8RoadSectionInfoTypeGetSection1(TF8RoadSectionInfoTypeGetSection1 P)
{
	Generated_F8RoadSectionInfoTypeGetSection1 = P;
}
inline void Register_Callback_F8RoadSectionInfoTypeGetSection2(TF8RoadSectionInfoTypeGetSection2 P)
{
	Generated_F8RoadSectionInfoTypeGetSection2 = P;
}
inline void Register_Callback_F8RoadSectionInfoTypeGetMergeRatio(TF8RoadSectionInfoTypeGetMergeRatio P)
{
	Generated_F8RoadSectionInfoTypeGetMergeRatio = P;
}
inline void Register_Callback_F8RoadSectionInfoTypeGetInTunnel(TF8RoadSectionInfoTypeGetInTunnel P)
{
	Generated_F8RoadSectionInfoTypeGetInTunnel = P;
}
inline void Register_Callback_F8RoadSectionInfoTypeGetOnBridge(TF8RoadSectionInfoTypeGetOnBridge P)
{
	Generated_F8RoadSectionInfoTypeGetOnBridge = P;
}
inline void Register_Callback_F8RoadProxyGetDistanceFeaturesCount(TF8RoadProxyGetDistanceFeaturesCount P)
{
	Generated_F8RoadProxyGetDistanceFeaturesCount = P;
}
inline void Register_Callback_F8RoadProxyGetDistanceFeature(TF8RoadProxyGetDistanceFeature P)
{
	Generated_F8RoadProxyGetDistanceFeature = P;
}
inline void Register_Callback_F8RoadProxyGetObstructionsCount(TF8RoadProxyGetObstructionsCount P)
{
	Generated_F8RoadProxyGetObstructionsCount = P;
}
inline void Register_Callback_F8RoadProxyGetObstruction(TF8RoadProxyGetObstruction P)
{
	Generated_F8RoadProxyGetObstruction = P;
}
inline void Register_Callback_F8RoadProxyGetName(TF8RoadProxyGetName P)
{
	Generated_F8RoadProxyGetName = P;
}
inline void Register_Callback_F8RoadProxyGetLength(TF8RoadProxyGetLength P)
{
	Generated_F8RoadProxyGetLength = P;
}
inline void Register_Callback_F8RoadProxyGetPositionAt(TF8RoadProxyGetPositionAt P)
{
	Generated_F8RoadProxyGetPositionAt = P;
}
inline void Register_Callback_F8RoadProxyGetDirectionAt(TF8RoadProxyGetDirectionAt P)
{
	Generated_F8RoadProxyGetDirectionAt = P;
}
inline void Register_Callback_F8RoadProxyGetCurvatureAt(TF8RoadProxyGetCurvatureAt P)
{
	Generated_F8RoadProxyGetCurvatureAt = P;
}
inline void Register_Callback_F8RoadProxyGetSlopeAt(TF8RoadProxyGetSlopeAt P)
{
	Generated_F8RoadProxyGetSlopeAt = P;
}
inline void Register_Callback_F8RoadProxyGetEdgeOffsetAt(TF8RoadProxyGetEdgeOffsetAt P)
{
	Generated_F8RoadProxyGetEdgeOffsetAt = P;
}
inline void Register_Callback_F8RoadProxyGetSectionInfoAt(TF8RoadProxyGetSectionInfoAt P)
{
	Generated_F8RoadProxyGetSectionInfoAt = P;
}
inline void Register_Callback_F8RoadProxyGetRoadLanesCount(TF8RoadProxyGetRoadLanesCount P)
{
	Generated_F8RoadProxyGetRoadLanesCount = P;
}
inline void Register_Callback_F8RoadProxyGetRoadLane(TF8RoadProxyGetRoadLane P)
{
	Generated_F8RoadProxyGetRoadLane = P;
}
inline void Register_Callback_F8RoadProxySearchRoadLane(TF8RoadProxySearchRoadLane P)
{
	Generated_F8RoadProxySearchRoadLane = P;
}
inline void Register_Callback_F8RoadProxyGetIntersectionInfosCount(TF8RoadProxyGetIntersectionInfosCount P)
{
	Generated_F8RoadProxyGetIntersectionInfosCount = P;
}
inline void Register_Callback_F8RoadProxyGetIntersectionInfo(TF8RoadProxyGetIntersectionInfo P)
{
	Generated_F8RoadProxyGetIntersectionInfo = P;
}
inline void Register_Callback_F8RoadProxyGetRampConnectionInfosCount(TF8RoadProxyGetRampConnectionInfosCount P)
{
	Generated_F8RoadProxyGetRampConnectionInfosCount = P;
}
inline void Register_Callback_F8RoadProxyGetRampConnectionInfo(TF8RoadProxyGetRampConnectionInfo P)
{
	Generated_F8RoadProxyGetRampConnectionInfo = P;
}
inline void Register_Callback_F8RoadProxyCalculateDistanceFrom(TF8RoadProxyCalculateDistanceFrom P)
{
	Generated_F8RoadProxyCalculateDistanceFrom = P;
}
inline void Register_Callback_F8RoadProxyDestroy(TF8RoadProxyDestroy P)
{
	Generated_F8RoadProxyDestroy = P;
}
inline void Register_Callback_F8OffroadStartPointProxyDestroy(TF8OffroadStartPointProxyDestroy P)
{
	Generated_F8OffroadStartPointProxyDestroy = P;
}
inline void Register_Callback_F8IntersectionTerminalProxyGetDescription(TF8IntersectionTerminalProxyGetDescription P)
{
	Generated_F8IntersectionTerminalProxyGetDescription = P;
}
inline void Register_Callback_F8IntersectionTerminalProxyGetDrivePathsCount(TF8IntersectionTerminalProxyGetDrivePathsCount P)
{
	Generated_F8IntersectionTerminalProxyGetDrivePathsCount = P;
}
inline void Register_Callback_F8IntersectionTerminalProxyGetDrivePath(TF8IntersectionTerminalProxyGetDrivePath P)
{
	Generated_F8IntersectionTerminalProxyGetDrivePath = P;
}
inline void Register_Callback_F8IntersectionTerminalProxyGetRoadLanePosition(TF8IntersectionTerminalProxyGetRoadLanePosition P)
{
	Generated_F8IntersectionTerminalProxyGetRoadLanePosition = P;
}
inline void Register_Callback_F8IntersectionTerminalProxyGetRoadLaneDirection(TF8IntersectionTerminalProxyGetRoadLaneDirection P)
{
	Generated_F8IntersectionTerminalProxyGetRoadLaneDirection = P;
}
inline void Register_Callback_F8IntersectionTerminalProxyDestroy(TF8IntersectionTerminalProxyDestroy P)
{
	Generated_F8IntersectionTerminalProxyDestroy = P;
}
inline void Register_Callback_F8IntersectionEntryPointProxyDestroy(TF8IntersectionEntryPointProxyDestroy P)
{
	Generated_F8IntersectionEntryPointProxyDestroy = P;
}
inline void Register_Callback_F8IntersectionExitPointProxyDestroy(TF8IntersectionExitPointProxyDestroy P)
{
	Generated_F8IntersectionExitPointProxyDestroy = P;
}
inline void Register_Callback_F8IntersectionLaneCurveProxyGetLength(TF8IntersectionLaneCurveProxyGetLength P)
{
	Generated_F8IntersectionLaneCurveProxyGetLength = P;
}
inline void Register_Callback_F8IntersectionLaneCurveProxyGetPosition(TF8IntersectionLaneCurveProxyGetPosition P)
{
	Generated_F8IntersectionLaneCurveProxyGetPosition = P;
}
inline void Register_Callback_F8IntersectionLaneCurveProxyGetDirection(TF8IntersectionLaneCurveProxyGetDirection P)
{
	Generated_F8IntersectionLaneCurveProxyGetDirection = P;
}
inline void Register_Callback_F8IntersectionLaneCurveProxyDestroy(TF8IntersectionLaneCurveProxyDestroy P)
{
	Generated_F8IntersectionLaneCurveProxyDestroy = P;
}
inline void Register_Callback_F8IntersectionDrivePathProxyGetEntryPoint(TF8IntersectionDrivePathProxyGetEntryPoint P)
{
	Generated_F8IntersectionDrivePathProxyGetEntryPoint = P;
}
inline void Register_Callback_F8IntersectionDrivePathProxyGetExitPoint(TF8IntersectionDrivePathProxyGetExitPoint P)
{
	Generated_F8IntersectionDrivePathProxyGetExitPoint = P;
}
inline void Register_Callback_F8IntersectionDrivePathProxyGetLaneCurve(TF8IntersectionDrivePathProxyGetLaneCurve P)
{
	Generated_F8IntersectionDrivePathProxyGetLaneCurve = P;
}
inline void Register_Callback_F8IntersectionDrivePathProxyDestroy(TF8IntersectionDrivePathProxyDestroy P)
{
	Generated_F8IntersectionDrivePathProxyDestroy = P;
}
inline void Register_Callback_F8TrafficSignalControllerProxyDestroy(TF8TrafficSignalControllerProxyDestroy P)
{
	Generated_F8TrafficSignalControllerProxyDestroy = P;
}
inline void Register_Callback_F8IntersectionProxyGetName(TF8IntersectionProxyGetName P)
{
	Generated_F8IntersectionProxyGetName = P;
}
inline void Register_Callback_F8IntersectionProxyGetDrivePathsCount(TF8IntersectionProxyGetDrivePathsCount P)
{
	Generated_F8IntersectionProxyGetDrivePathsCount = P;
}
inline void Register_Callback_F8IntersectionProxyGetDrivePath(TF8IntersectionProxyGetDrivePath P)
{
	Generated_F8IntersectionProxyGetDrivePath = P;
}
inline void Register_Callback_F8IntersectionProxyGetEntryPointsCount(TF8IntersectionProxyGetEntryPointsCount P)
{
	Generated_F8IntersectionProxyGetEntryPointsCount = P;
}
inline void Register_Callback_F8IntersectionProxyGetEntryPoint(TF8IntersectionProxyGetEntryPoint P)
{
	Generated_F8IntersectionProxyGetEntryPoint = P;
}
inline void Register_Callback_F8IntersectionProxyGetExitPointsCount(TF8IntersectionProxyGetExitPointsCount P)
{
	Generated_F8IntersectionProxyGetExitPointsCount = P;
}
inline void Register_Callback_F8IntersectionProxyGetExitPoint(TF8IntersectionProxyGetExitPoint P)
{
	Generated_F8IntersectionProxyGetExitPoint = P;
}
inline void Register_Callback_F8IntersectionProxyGetTrafficSignalController(TF8IntersectionProxyGetTrafficSignalController P)
{
	Generated_F8IntersectionProxyGetTrafficSignalController = P;
}
inline void Register_Callback_F8IntersectionProxyGetTrafficControlType(TF8IntersectionProxyGetTrafficControlType P)
{
	Generated_F8IntersectionProxyGetTrafficControlType = P;
}
inline void Register_Callback_F8IntersectionProxyDestroy(TF8IntersectionProxyDestroy P)
{
	Generated_F8IntersectionProxyDestroy = P;
}
inline void Register_Callback_F8FlightPathProxyGetName(TF8FlightPathProxyGetName P)
{
	Generated_F8FlightPathProxyGetName = P;
}
inline void Register_Callback_F8FlightPathProxyGetLength(TF8FlightPathProxyGetLength P)
{
	Generated_F8FlightPathProxyGetLength = P;
}
inline void Register_Callback_F8FlightPathProxyGetPosition(TF8FlightPathProxyGetPosition P)
{
	Generated_F8FlightPathProxyGetPosition = P;
}
inline void Register_Callback_F8FlightPathProxyGetDirection(TF8FlightPathProxyGetDirection P)
{
	Generated_F8FlightPathProxyGetDirection = P;
}
inline void Register_Callback_F8FlightPathProxyDestroy(TF8FlightPathProxyDestroy P)
{
	Generated_F8FlightPathProxyDestroy = P;
}
inline void Register_Callback_F8RoadSideObjectInstanceProxyGetRoad(TF8RoadSideObjectInstanceProxyGetRoad P)
{
	Generated_F8RoadSideObjectInstanceProxyGetRoad = P;
}
inline void Register_Callback_F8RoadSideObjectInstanceProxyGetRoadDistance(TF8RoadSideObjectInstanceProxyGetRoadDistance P)
{
	Generated_F8RoadSideObjectInstanceProxyGetRoadDistance = P;
}
inline void Register_Callback_F8RoadSideObjectInstanceProxyGetSideOfRoad(TF8RoadSideObjectInstanceProxyGetSideOfRoad P)
{
	Generated_F8RoadSideObjectInstanceProxyGetSideOfRoad = P;
}
inline void Register_Callback_F8RoadSideObjectInstanceProxyGetOffset(TF8RoadSideObjectInstanceProxyGetOffset P)
{
	Generated_F8RoadSideObjectInstanceProxyGetOffset = P;
}
inline void Register_Callback_F8RoadSideObjectInstanceProxyGetDeltaH(TF8RoadSideObjectInstanceProxyGetDeltaH P)
{
	Generated_F8RoadSideObjectInstanceProxyGetDeltaH = P;
}
inline void Register_Callback_F8RoadSideObjectInstanceProxyDestroy(TF8RoadSideObjectInstanceProxyDestroy P)
{
	Generated_F8RoadSideObjectInstanceProxyDestroy = P;
}
inline void Register_Callback_F8RoadThreeDModelInstanceProxyGetThreeDModel(TF8RoadThreeDModelInstanceProxyGetThreeDModel P)
{
	Generated_F8RoadThreeDModelInstanceProxyGetThreeDModel = P;
}
inline void Register_Callback_F8RoadThreeDModelInstanceProxyDestroy(TF8RoadThreeDModelInstanceProxyDestroy P)
{
	Generated_F8RoadThreeDModelInstanceProxyDestroy = P;
}
inline void Register_Callback_F8ContextProxyGetName(TF8ContextProxyGetName P)
{
	Generated_F8ContextProxyGetName = P;
}
inline void Register_Callback_F8ContextProxyDestroy(TF8ContextProxyDestroy P)
{
	Generated_F8ContextProxyDestroy = P;
}
inline void Register_Callback_F8ScriptProxyGetName(TF8ScriptProxyGetName P)
{
	Generated_F8ScriptProxyGetName = P;
}
inline void Register_Callback_F8ScriptProxyDestroy(TF8ScriptProxyDestroy P)
{
	Generated_F8ScriptProxyDestroy = P;
}
inline void Register_Callback_F8ScriptAnimationProxyGetName(TF8ScriptAnimationProxyGetName P)
{
	Generated_F8ScriptAnimationProxyGetName = P;
}
inline void Register_Callback_F8ScriptAnimationProxyDestroy(TF8ScriptAnimationProxyDestroy P)
{
	Generated_F8ScriptAnimationProxyDestroy = P;
}
inline void Register_Callback_F8EventProxyGetName(TF8EventProxyGetName P)
{
	Generated_F8EventProxyGetName = P;
}
inline void Register_Callback_F8EventProxyDestroy(TF8EventProxyDestroy P)
{
	Generated_F8EventProxyDestroy = P;
}
inline void Register_Callback_F8ScenarioProxyGetName(TF8ScenarioProxyGetName P)
{
	Generated_F8ScenarioProxyGetName = P;
}
inline void Register_Callback_F8ScenarioProxyGetEventsCount(TF8ScenarioProxyGetEventsCount P)
{
	Generated_F8ScenarioProxyGetEventsCount = P;
}
inline void Register_Callback_F8ScenarioProxyGetEvent(TF8ScenarioProxyGetEvent P)
{
	Generated_F8ScenarioProxyGetEvent = P;
}
inline void Register_Callback_F8ScenarioProxyDestroy(TF8ScenarioProxyDestroy P)
{
	Generated_F8ScenarioProxyDestroy = P;
}
inline void Register_Callback_F8CoordinateConverterProxyGetHorizontalCoordinateConvertor(TF8CoordinateConverterProxyGetHorizontalCoordinateConvertor P)
{
	Generated_F8CoordinateConverterProxyGetHorizontalCoordinateConvertor = P;
}
inline void Register_Callback_F8CoordinateConverterProxyDestroy(TF8CoordinateConverterProxyDestroy P)
{
	Generated_F8CoordinateConverterProxyDestroy = P;
}
inline void Register_Callback_F8HorizontalCoordinateConverterProxyConvert(TF8HorizontalCoordinateConverterProxyConvert P)
{
	Generated_F8HorizontalCoordinateConverterProxyConvert = P;
}
inline void Register_Callback_F8HorizontalCoordinateConverterProxyConvertArray(TF8HorizontalCoordinateConverterProxyConvertArray P)
{
	Generated_F8HorizontalCoordinateConverterProxyConvertArray = P;
}
inline void Register_Callback_F8HorizontalCoordinateConverterProxyDestroy(TF8HorizontalCoordinateConverterProxyDestroy P)
{
	Generated_F8HorizontalCoordinateConverterProxyDestroy = P;
}
inline void Register_Callback_F8ProjectProxyGetSectionsCount(TF8ProjectProxyGetSectionsCount P)
{
	Generated_F8ProjectProxyGetSectionsCount = P;
}
inline void Register_Callback_F8ProjectProxyGetSection(TF8ProjectProxyGetSection P)
{
	Generated_F8ProjectProxyGetSection = P;
}
inline void Register_Callback_F8ProjectProxyGetRoadsCount(TF8ProjectProxyGetRoadsCount P)
{
	Generated_F8ProjectProxyGetRoadsCount = P;
}
inline void Register_Callback_F8ProjectProxyGetRoad(TF8ProjectProxyGetRoad P)
{
	Generated_F8ProjectProxyGetRoad = P;
}
inline void Register_Callback_F8ProjectProxyGetOffroadPointsCount(TF8ProjectProxyGetOffroadPointsCount P)
{
	Generated_F8ProjectProxyGetOffroadPointsCount = P;
}
inline void Register_Callback_F8ProjectProxyGetOffroadPoint(TF8ProjectProxyGetOffroadPoint P)
{
	Generated_F8ProjectProxyGetOffroadPoint = P;
}
inline void Register_Callback_F8ProjectProxyGetIntersectionsCount(TF8ProjectProxyGetIntersectionsCount P)
{
	Generated_F8ProjectProxyGetIntersectionsCount = P;
}
inline void Register_Callback_F8ProjectProxyGetIntersection(TF8ProjectProxyGetIntersection P)
{
	Generated_F8ProjectProxyGetIntersection = P;
}
inline void Register_Callback_F8ProjectProxyGet3DModelsCount(TF8ProjectProxyGet3DModelsCount P)
{
	Generated_F8ProjectProxyGet3DModelsCount = P;
}
inline void Register_Callback_F8ProjectProxyGet3DModel(TF8ProjectProxyGet3DModel P)
{
	Generated_F8ProjectProxyGet3DModel = P;
}
inline void Register_Callback_F8ProjectProxyGet3DModelInstancesCount(TF8ProjectProxyGet3DModelInstancesCount P)
{
	Generated_F8ProjectProxyGet3DModelInstancesCount = P;
}
inline void Register_Callback_F8ProjectProxyGet3DModelInstance(TF8ProjectProxyGet3DModelInstance P)
{
	Generated_F8ProjectProxyGet3DModelInstance = P;
}
inline void Register_Callback_F8ProjectProxyGetRoadModelInstancesCount(TF8ProjectProxyGetRoadModelInstancesCount P)
{
	Generated_F8ProjectProxyGetRoadModelInstancesCount = P;
}
inline void Register_Callback_F8ProjectProxyGetRoadModelInstance(TF8ProjectProxyGetRoadModelInstance P)
{
	Generated_F8ProjectProxyGetRoadModelInstance = P;
}
inline void Register_Callback_F8ProjectProxyGetMD3ModelsCount(TF8ProjectProxyGetMD3ModelsCount P)
{
	Generated_F8ProjectProxyGetMD3ModelsCount = P;
}
inline void Register_Callback_F8ProjectProxyGetMD3Model(TF8ProjectProxyGetMD3Model P)
{
	Generated_F8ProjectProxyGetMD3Model = P;
}
inline void Register_Callback_F8ProjectProxyGetFlightPathsCount(TF8ProjectProxyGetFlightPathsCount P)
{
	Generated_F8ProjectProxyGetFlightPathsCount = P;
}
inline void Register_Callback_F8ProjectProxyGetFlightPath(TF8ProjectProxyGetFlightPath P)
{
	Generated_F8ProjectProxyGetFlightPath = P;
}
inline void Register_Callback_F8ProjectProxyGetScriptsCount(TF8ProjectProxyGetScriptsCount P)
{
	Generated_F8ProjectProxyGetScriptsCount = P;
}
inline void Register_Callback_F8ProjectProxyGetScript(TF8ProjectProxyGetScript P)
{
	Generated_F8ProjectProxyGetScript = P;
}
inline void Register_Callback_F8ProjectProxyGetScriptAnimationsCount(TF8ProjectProxyGetScriptAnimationsCount P)
{
	Generated_F8ProjectProxyGetScriptAnimationsCount = P;
}
inline void Register_Callback_F8ProjectProxyGetScriptAnimation(TF8ProjectProxyGetScriptAnimation P)
{
	Generated_F8ProjectProxyGetScriptAnimation = P;
}
inline void Register_Callback_F8ProjectProxyGetScenariosCount(TF8ProjectProxyGetScenariosCount P)
{
	Generated_F8ProjectProxyGetScenariosCount = P;
}
inline void Register_Callback_F8ProjectProxyGetScenario(TF8ProjectProxyGetScenario P)
{
	Generated_F8ProjectProxyGetScenario = P;
}
inline void Register_Callback_F8ProjectProxyGetContextsCount(TF8ProjectProxyGetContextsCount P)
{
	Generated_F8ProjectProxyGetContextsCount = P;
}
inline void Register_Callback_F8ProjectProxyGetContext(TF8ProjectProxyGetContext P)
{
	Generated_F8ProjectProxyGetContext = P;
}
inline void Register_Callback_F8ProjectProxyGetActualHeightAt(TF8ProjectProxyGetActualHeightAt P)
{
	Generated_F8ProjectProxyGetActualHeightAt = P;
}
inline void Register_Callback_F8ProjectProxyDestroy(TF8ProjectProxyDestroy P)
{
	Generated_F8ProjectProxyDestroy = P;
}
inline void Register_Callback_F8TransientInstanceProxyGetTransientType(TF8TransientInstanceProxyGetTransientType P)
{
	Generated_F8TransientInstanceProxyGetTransientType = P;
}
inline void Register_Callback_F8TransientInstanceProxyGetBodyPitchAngle(TF8TransientInstanceProxyGetBodyPitchAngle P)
{
	Generated_F8TransientInstanceProxyGetBodyPitchAngle = P;
}
inline void Register_Callback_F8TransientInstanceProxySetBodyPitchAngle(TF8TransientInstanceProxySetBodyPitchAngle P)
{
	Generated_F8TransientInstanceProxySetBodyPitchAngle = P;
}
inline void Register_Callback_F8TransientInstanceProxyGetBodyRollAngle(TF8TransientInstanceProxyGetBodyRollAngle P)
{
	Generated_F8TransientInstanceProxyGetBodyRollAngle = P;
}
inline void Register_Callback_F8TransientInstanceProxySetBodyRollAngle(TF8TransientInstanceProxySetBodyRollAngle P)
{
	Generated_F8TransientInstanceProxySetBodyRollAngle = P;
}
inline void Register_Callback_F8TransientInstanceProxyGetCarLights(TF8TransientInstanceProxyGetCarLights P)
{
	Generated_F8TransientInstanceProxyGetCarLights = P;
}
inline void Register_Callback_F8TransientInstanceProxySetCarLights(TF8TransientInstanceProxySetCarLights P)
{
	Generated_F8TransientInstanceProxySetCarLights = P;
}
inline void DoCb_TransientOnBeforeCalculateMovementCallback(Cb_TransientOnBeforeCalculateMovementMapperClass *object, double dTimeInSeconds,void* Instance)
{
	object->DoCb_TransientOnBeforeCalculateMovementCallback(dTimeInSeconds,std::make_shared<F8TransientInstanceProxy_Class>(Instance));
}
inline void Register_Callback_F8TransientInstanceProxyRegisterCallbackOnBeforeCalculateMovement(TF8TransientInstanceProxyRegisterCallbackOnBeforeCalculateMovement P)
{
	Generated_F8TransientInstanceProxyRegisterCallbackOnBeforeCalculateMovement = P;
}
inline void Register_Callback_F8TransientInstanceProxyUnregisterCallbackOnBeforeCalculateMovement(TF8TransientInstanceProxyUnregisterCallbackOnBeforeCalculateMovement P)
{
	Generated_F8TransientInstanceProxyUnregisterCallbackOnBeforeCalculateMovement = P;
}
inline void DoCb_TransientOnAfterCalculateMovementCallback(Cb_TransientOnAfterCalculateMovementMapperClass *object, double dTimeInSeconds,void* Instance)
{
	object->DoCb_TransientOnAfterCalculateMovementCallback(dTimeInSeconds,std::make_shared<F8TransientInstanceProxy_Class>(Instance));
}
inline void Register_Callback_F8TransientInstanceProxyRegisterCallbackOnAfterCalculateMovement(TF8TransientInstanceProxyRegisterCallbackOnAfterCalculateMovement P)
{
	Generated_F8TransientInstanceProxyRegisterCallbackOnAfterCalculateMovement = P;
}
inline void Register_Callback_F8TransientInstanceProxyUnregisterCallbackOnAfterCalculateMovement(TF8TransientInstanceProxyUnregisterCallbackOnAfterCalculateMovement P)
{
	Generated_F8TransientInstanceProxyUnregisterCallbackOnAfterCalculateMovement = P;
}
inline void DoCb_TransientOnBeforeDoMovementCallback(Cb_TransientOnBeforeDoMovementMapperClass *object, double dTimeInSeconds,void* Instance)
{
	object->DoCb_TransientOnBeforeDoMovementCallback(dTimeInSeconds,std::make_shared<F8TransientInstanceProxy_Class>(Instance));
}
inline void Register_Callback_F8TransientInstanceProxyRegisterCallbackOnBeforeDoMovement(TF8TransientInstanceProxyRegisterCallbackOnBeforeDoMovement P)
{
	Generated_F8TransientInstanceProxyRegisterCallbackOnBeforeDoMovement = P;
}
inline void Register_Callback_F8TransientInstanceProxyUnregisterCallbackOnBeforeDoMovement(TF8TransientInstanceProxyUnregisterCallbackOnBeforeDoMovement P)
{
	Generated_F8TransientInstanceProxyUnregisterCallbackOnBeforeDoMovement = P;
}
inline void DoCb_TransientOnAfterDoMovementCallback(Cb_TransientOnAfterDoMovementMapperClass *object, double dTimeInSeconds,void* Instance)
{
	object->DoCb_TransientOnAfterDoMovementCallback(dTimeInSeconds,std::make_shared<F8TransientInstanceProxy_Class>(Instance));
}
inline void Register_Callback_F8TransientInstanceProxyRegisterCallbackOnAfterDoMovement(TF8TransientInstanceProxyRegisterCallbackOnAfterDoMovement P)
{
	Generated_F8TransientInstanceProxyRegisterCallbackOnAfterDoMovement = P;
}
inline void Register_Callback_F8TransientInstanceProxyUnregisterCallbackOnAfterDoMovement(TF8TransientInstanceProxyUnregisterCallbackOnAfterDoMovement P)
{
	Generated_F8TransientInstanceProxyUnregisterCallbackOnAfterDoMovement = P;
}
inline void Register_Callback_F8TransientInstanceProxyIsSetCallbackOnCalculateMovement(TF8TransientInstanceProxyIsSetCallbackOnCalculateMovement P)
{
	Generated_F8TransientInstanceProxyIsSetCallbackOnCalculateMovement = P;
}
inline void DoCb_TransientOnCalculateMovementCallback(Cb_TransientOnCalculateMovementMapperClass *object, double dTimeInSeconds,void* Instance)
{
	object->DoCb_TransientOnCalculateMovementCallback(dTimeInSeconds,std::make_shared<F8TransientInstanceProxy_Class>(Instance));
}
inline void Register_Callback_F8TransientInstanceProxySetCallbackOnCalculateMovement(TF8TransientInstanceProxySetCallbackOnCalculateMovement P)
{
	Generated_F8TransientInstanceProxySetCallbackOnCalculateMovement = P;
}
inline void Register_Callback_F8TransientInstanceProxyUnsetCallbackOnCalculateMovement(TF8TransientInstanceProxyUnsetCallbackOnCalculateMovement P)
{
	Generated_F8TransientInstanceProxyUnsetCallbackOnCalculateMovement = P;
}
inline void Register_Callback_F8TransientInstanceProxyIsSetCallbackOnDoMovement(TF8TransientInstanceProxyIsSetCallbackOnDoMovement P)
{
	Generated_F8TransientInstanceProxyIsSetCallbackOnDoMovement = P;
}
inline void DoCb_TransientOnDoMovementCallback(Cb_TransientOnDoMovementMapperClass *object, double dTimeInSeconds,void* Instance)
{
	object->DoCb_TransientOnDoMovementCallback(dTimeInSeconds,std::make_shared<F8TransientInstanceProxy_Class>(Instance));
}
inline void Register_Callback_F8TransientInstanceProxySetCallbackOnDoMovement(TF8TransientInstanceProxySetCallbackOnDoMovement P)
{
	Generated_F8TransientInstanceProxySetCallbackOnDoMovement = P;
}
inline void Register_Callback_F8TransientInstanceProxyUnsetCallbackOnDoMovement(TF8TransientInstanceProxyUnsetCallbackOnDoMovement P)
{
	Generated_F8TransientInstanceProxyUnsetCallbackOnDoMovement = P;
}
inline void Register_Callback_F8TransientInstanceProxyDestroy(TF8TransientInstanceProxyDestroy P)
{
	Generated_F8TransientInstanceProxyDestroy = P;
}
inline void Register_Callback_F8TransientInstanceProxyListDestroy(TF8TransientInstanceProxyListDestroy P)
{
	Generated_F8TransientInstanceProxyListDestroy = P;
}
inline void Register_Callback_F8TransientInstanceProxyListGetCount(TF8TransientInstanceProxyListGetCount P)
{
	Generated_F8TransientInstanceProxyListGetCount = P;
}
inline void Register_Callback_F8TransientInstanceProxyListGetItem(TF8TransientInstanceProxyListGetItem P)
{
	Generated_F8TransientInstanceProxyListGetItem = P;
}
inline void Register_Callback_F8TransientMovingInstanceProxyDestroy(TF8TransientMovingInstanceProxyDestroy P)
{
	Generated_F8TransientMovingInstanceProxyDestroy = P;
}
inline void Register_Callback_F8TransientCharacterInstanceProxyDestroy(TF8TransientCharacterInstanceProxyDestroy P)
{
	Generated_F8TransientCharacterInstanceProxyDestroy = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetAutomaticControl(TF8TransientCarInstanceProxyGetAutomaticControl P)
{
	Generated_F8TransientCarInstanceProxyGetAutomaticControl = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetDistanceTravelled(TF8TransientCarInstanceProxyGetDistanceTravelled P)
{
	Generated_F8TransientCarInstanceProxyGetDistanceTravelled = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetDistanceAlongDrivePath(TF8TransientCarInstanceProxyGetDistanceAlongDrivePath P)
{
	Generated_F8TransientCarInstanceProxyGetDistanceAlongDrivePath = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetMass(TF8TransientCarInstanceProxyGetMass P)
{
	Generated_F8TransientCarInstanceProxyGetMass = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetEngineOn(TF8TransientCarInstanceProxyGetEngineOn P)
{
	Generated_F8TransientCarInstanceProxyGetEngineOn = P;
}
inline void Register_Callback_F8TransientCarInstanceProxySetEngineOn(TF8TransientCarInstanceProxySetEngineOn P)
{
	Generated_F8TransientCarInstanceProxySetEngineOn = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetSteering(TF8TransientCarInstanceProxyGetSteering P)
{
	Generated_F8TransientCarInstanceProxyGetSteering = P;
}
inline void Register_Callback_F8TransientCarInstanceProxySetSteering(TF8TransientCarInstanceProxySetSteering P)
{
	Generated_F8TransientCarInstanceProxySetSteering = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetThrottle(TF8TransientCarInstanceProxyGetThrottle P)
{
	Generated_F8TransientCarInstanceProxyGetThrottle = P;
}
inline void Register_Callback_F8TransientCarInstanceProxySetThrottle(TF8TransientCarInstanceProxySetThrottle P)
{
	Generated_F8TransientCarInstanceProxySetThrottle = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetBrake(TF8TransientCarInstanceProxyGetBrake P)
{
	Generated_F8TransientCarInstanceProxyGetBrake = P;
}
inline void Register_Callback_F8TransientCarInstanceProxySetBrake(TF8TransientCarInstanceProxySetBrake P)
{
	Generated_F8TransientCarInstanceProxySetBrake = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetClutch(TF8TransientCarInstanceProxyGetClutch P)
{
	Generated_F8TransientCarInstanceProxyGetClutch = P;
}
inline void Register_Callback_F8TransientCarInstanceProxySetClutch(TF8TransientCarInstanceProxySetClutch P)
{
	Generated_F8TransientCarInstanceProxySetClutch = P;
}
inline void Register_Callback_F8TransientCarInstanceProxySetPositionInTraffic(TF8TransientCarInstanceProxySetPositionInTraffic P)
{
	Generated_F8TransientCarInstanceProxySetPositionInTraffic = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetDirection(TF8TransientCarInstanceProxyGetDirection P)
{
	Generated_F8TransientCarInstanceProxyGetDirection = P;
}
inline void Register_Callback_F8TransientCarInstanceProxySetDirection(TF8TransientCarInstanceProxySetDirection P)
{
	Generated_F8TransientCarInstanceProxySetDirection = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetBodyDirection(TF8TransientCarInstanceProxyGetBodyDirection P)
{
	Generated_F8TransientCarInstanceProxyGetBodyDirection = P;
}
inline void Register_Callback_F8TransientCarInstanceProxySetBodyDirection(TF8TransientCarInstanceProxySetBodyDirection P)
{
	Generated_F8TransientCarInstanceProxySetBodyDirection = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetRPM(TF8TransientCarInstanceProxyGetRPM P)
{
	Generated_F8TransientCarInstanceProxyGetRPM = P;
}
inline void Register_Callback_F8TransientCarInstanceProxySetRPM(TF8TransientCarInstanceProxySetRPM P)
{
	Generated_F8TransientCarInstanceProxySetRPM = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetSpeedVector(TF8TransientCarInstanceProxyGetSpeedVector P)
{
	Generated_F8TransientCarInstanceProxyGetSpeedVector = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetSpeed(TF8TransientCarInstanceProxyGetSpeed P)
{
	Generated_F8TransientCarInstanceProxyGetSpeed = P;
}
inline void Register_Callback_F8TransientCarInstanceProxySetSpeed(TF8TransientCarInstanceProxySetSpeed P)
{
	Generated_F8TransientCarInstanceProxySetSpeed = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetAppliedSteering(TF8TransientCarInstanceProxyGetAppliedSteering P)
{
	Generated_F8TransientCarInstanceProxyGetAppliedSteering = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetAppliedThrottle(TF8TransientCarInstanceProxyGetAppliedThrottle P)
{
	Generated_F8TransientCarInstanceProxyGetAppliedThrottle = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetAppliedBrake(TF8TransientCarInstanceProxyGetAppliedBrake P)
{
	Generated_F8TransientCarInstanceProxyGetAppliedBrake = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetAppliedClutch(TF8TransientCarInstanceProxyGetAppliedClutch P)
{
	Generated_F8TransientCarInstanceProxyGetAppliedClutch = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetAcceleration(TF8TransientCarInstanceProxyGetAcceleration P)
{
	Generated_F8TransientCarInstanceProxyGetAcceleration = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetRotAcceleration(TF8TransientCarInstanceProxyGetRotAcceleration P)
{
	Generated_F8TransientCarInstanceProxyGetRotAcceleration = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetRotSpeed(TF8TransientCarInstanceProxyGetRotSpeed P)
{
	Generated_F8TransientCarInstanceProxyGetRotSpeed = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetBodyRotAcceleration(TF8TransientCarInstanceProxyGetBodyRotAcceleration P)
{
	Generated_F8TransientCarInstanceProxyGetBodyRotAcceleration = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetBodyRotSpeed(TF8TransientCarInstanceProxyGetBodyRotSpeed P)
{
	Generated_F8TransientCarInstanceProxyGetBodyRotSpeed = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetCurrentRoad(TF8TransientCarInstanceProxyGetCurrentRoad P)
{
	Generated_F8TransientCarInstanceProxyGetCurrentRoad = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetLatestRoad(TF8TransientCarInstanceProxyGetLatestRoad P)
{
	Generated_F8TransientCarInstanceProxyGetLatestRoad = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetCurrentIntersection(TF8TransientCarInstanceProxyGetCurrentIntersection P)
{
	Generated_F8TransientCarInstanceProxyGetCurrentIntersection = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetCurrentLane(TF8TransientCarInstanceProxyGetCurrentLane P)
{
	Generated_F8TransientCarInstanceProxyGetCurrentLane = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetDistanceAlongRoad(TF8TransientCarInstanceProxyGetDistanceAlongRoad P)
{
	Generated_F8TransientCarInstanceProxyGetDistanceAlongRoad = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetDistanceAlongLatestRoad(TF8TransientCarInstanceProxyGetDistanceAlongLatestRoad P)
{
	Generated_F8TransientCarInstanceProxyGetDistanceAlongLatestRoad = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetLaneNumber(TF8TransientCarInstanceProxyGetLaneNumber P)
{
	Generated_F8TransientCarInstanceProxyGetLaneNumber = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetLaneWidth(TF8TransientCarInstanceProxyGetLaneWidth P)
{
	Generated_F8TransientCarInstanceProxyGetLaneWidth = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetLaneDirection(TF8TransientCarInstanceProxyGetLaneDirection P)
{
	Generated_F8TransientCarInstanceProxyGetLaneDirection = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyGetLaneCurvature(TF8TransientCarInstanceProxyGetLaneCurvature P)
{
	Generated_F8TransientCarInstanceProxyGetLaneCurvature = P;
}
inline void Register_Callback_F8TransientCarInstanceProxyDestroy(TF8TransientCarInstanceProxyDestroy P)
{
	Generated_F8TransientCarInstanceProxyDestroy = P;
}
inline void Register_Callback_F8MainDriverProxyGetCurrentCar(TF8MainDriverProxyGetCurrentCar P)
{
	Generated_F8MainDriverProxyGetCurrentCar = P;
}
inline void Register_Callback_F8MainDriverProxyDestroy(TF8MainDriverProxyDestroy P)
{
	Generated_F8MainDriverProxyDestroy = P;
}
inline void Register_Callback_F8DriverDataTypeGetRoad(TF8DriverDataTypeGetRoad P)
{
	Generated_F8DriverDataTypeGetRoad = P;
}
inline void Register_Callback_F8DriverDataTypeSetRoad(TF8DriverDataTypeSetRoad P)
{
	Generated_F8DriverDataTypeSetRoad = P;
}
inline void Register_Callback_F8DriverDataTypeGetLane(TF8DriverDataTypeGetLane P)
{
	Generated_F8DriverDataTypeGetLane = P;
}
inline void Register_Callback_F8DriverDataTypeSetLane(TF8DriverDataTypeSetLane P)
{
	Generated_F8DriverDataTypeSetLane = P;
}
inline void Register_Callback_F8DriverDataTypeGetInitialSpeed(TF8DriverDataTypeGetInitialSpeed P)
{
	Generated_F8DriverDataTypeGetInitialSpeed = P;
}
inline void Register_Callback_F8DriverDataTypeSetInitialSpeed(TF8DriverDataTypeSetInitialSpeed P)
{
	Generated_F8DriverDataTypeSetInitialSpeed = P;
}
inline void Register_Callback_F8DriverDataTypeGetPosition(TF8DriverDataTypeGetPosition P)
{
	Generated_F8DriverDataTypeGetPosition = P;
}
inline void Register_Callback_F8DriverDataTypeSetPosition(TF8DriverDataTypeSetPosition P)
{
	Generated_F8DriverDataTypeSetPosition = P;
}
inline void Register_Callback_F8DriverDataTypeGetGoForwards(TF8DriverDataTypeGetGoForwards P)
{
	Generated_F8DriverDataTypeGetGoForwards = P;
}
inline void Register_Callback_F8DriverDataTypeSetGoForwards(TF8DriverDataTypeSetGoForwards P)
{
	Generated_F8DriverDataTypeSetGoForwards = P;
}
inline void Register_Callback_F8DriverDataTypeGetVehicle(TF8DriverDataTypeGetVehicle P)
{
	Generated_F8DriverDataTypeGetVehicle = P;
}
inline void Register_Callback_F8DriverDataTypeSetVehicle(TF8DriverDataTypeSetVehicle P)
{
	Generated_F8DriverDataTypeSetVehicle = P;
}
inline void Register_Callback_F8DriverDataTypeGetTrailer(TF8DriverDataTypeGetTrailer P)
{
	Generated_F8DriverDataTypeGetTrailer = P;
}
inline void Register_Callback_F8DriverDataTypeSetTrailer(TF8DriverDataTypeSetTrailer P)
{
	Generated_F8DriverDataTypeSetTrailer = P;
}
inline void Register_Callback_F8DriverDataTypeDestroy(TF8DriverDataTypeDestroy P)
{
	Generated_F8DriverDataTypeDestroy = P;
}
inline void Register_Callback_F8TrafficSimulationProxyGetDriver(TF8TrafficSimulationProxyGetDriver P)
{
	Generated_F8TrafficSimulationProxyGetDriver = P;
}
inline void Register_Callback_F8TrafficSimulationProxyGetTrafficState(TF8TrafficSimulationProxyGetTrafficState P)
{
	Generated_F8TrafficSimulationProxyGetTrafficState = P;
}
inline void Register_Callback_F8TrafficSimulationProxySetTrafficState(TF8TrafficSimulationProxySetTrafficState P)
{
	Generated_F8TrafficSimulationProxySetTrafficState = P;
}
inline void Register_Callback_F8TrafficSimulationProxyGetTransientVehiclesArround(TF8TrafficSimulationProxyGetTransientVehiclesArround P)
{
	Generated_F8TrafficSimulationProxyGetTransientVehiclesArround = P;
}
inline void Register_Callback_F8TrafficSimulationProxyGetTransientObjectsArround(TF8TrafficSimulationProxyGetTransientObjectsArround P)
{
	Generated_F8TrafficSimulationProxyGetTransientObjectsArround = P;
}
inline void Register_Callback_F8TrafficSimulationProxyDeleteTransientObject(TF8TrafficSimulationProxyDeleteTransientObject P)
{
	Generated_F8TrafficSimulationProxyDeleteTransientObject = P;
}
inline void Register_Callback_F8TrafficSimulationProxyDeleteAllTransientObjects(TF8TrafficSimulationProxyDeleteAllTransientObjects P)
{
	Generated_F8TrafficSimulationProxyDeleteAllTransientObjects = P;
}
inline void Register_Callback_F8TrafficSimulationProxyAddNewTransient(TF8TrafficSimulationProxyAddNewTransient P)
{
	Generated_F8TrafficSimulationProxyAddNewTransient = P;
}
inline void Register_Callback_F8TrafficSimulationProxyAddNewVehicle(TF8TrafficSimulationProxyAddNewVehicle P)
{
	Generated_F8TrafficSimulationProxyAddNewVehicle = P;
}
inline void DoCb_TrafficSimulationStatusChangedCallback(Cb_TrafficSimulationStatusChangedMapperClass *object)
{
	object->DoCb_TrafficSimulationStatusChangedCallback();
}
inline void Register_Callback_F8TrafficSimulationProxyRegisterEventSimulationStatusChanged(TF8TrafficSimulationProxyRegisterEventSimulationStatusChanged P)
{
	Generated_F8TrafficSimulationProxyRegisterEventSimulationStatusChanged = P;
}
inline void DoCb_TrafficBeforeInitializeDrivingCallback(Cb_TrafficBeforeInitializeDrivingMapperClass *object, void* driverData)
{
	object->DoCb_TrafficBeforeInitializeDrivingCallback(std::make_shared<F8DriverDataType_Class>(driverData));
}
inline void Register_Callback_F8TrafficSimulationProxyRegisterEventBeforeInitializeDriving(TF8TrafficSimulationProxyRegisterEventBeforeInitializeDriving P)
{
	Generated_F8TrafficSimulationProxyRegisterEventBeforeInitializeDriving = P;
}
inline void DoCb_TrafficStartDrivingCarCallback(Cb_TrafficStartDrivingCarMapperClass *object, void* aVehicle)
{
	object->DoCb_TrafficStartDrivingCarCallback(std::make_shared<F8TransientCarInstanceProxy_Class>(aVehicle));
}
inline void Register_Callback_F8TrafficSimulationProxyRegisterEventStartDrivingCar(TF8TrafficSimulationProxyRegisterEventStartDrivingCar P)
{
	Generated_F8TrafficSimulationProxyRegisterEventStartDrivingCar = P;
}
inline void DoCb_TrafficStopDrivingCarCallback(Cb_TrafficStopDrivingCarMapperClass *object, void* aVehicle)
{
	object->DoCb_TrafficStopDrivingCarCallback(std::make_shared<F8TransientCarInstanceProxy_Class>(aVehicle));
}
inline void Register_Callback_F8TrafficSimulationProxyRegisterEventStopDrivingCar(TF8TrafficSimulationProxyRegisterEventStopDrivingCar P)
{
	Generated_F8TrafficSimulationProxyRegisterEventStopDrivingCar = P;
}
inline void Register_Callback_F8TrafficSimulationProxyUnregisterEventSimulationStatusChanged(TF8TrafficSimulationProxyUnregisterEventSimulationStatusChanged P)
{
	Generated_F8TrafficSimulationProxyUnregisterEventSimulationStatusChanged = P;
}
inline void Register_Callback_F8TrafficSimulationProxyUnregisterEventBeforeInitializeDriving(TF8TrafficSimulationProxyUnregisterEventBeforeInitializeDriving P)
{
	Generated_F8TrafficSimulationProxyUnregisterEventBeforeInitializeDriving = P;
}
inline void Register_Callback_F8TrafficSimulationProxyUnregisterEventStartDrivingCar(TF8TrafficSimulationProxyUnregisterEventStartDrivingCar P)
{
	Generated_F8TrafficSimulationProxyUnregisterEventStartDrivingCar = P;
}
inline void Register_Callback_F8TrafficSimulationProxyUnregisterEventStopDrivingCar(TF8TrafficSimulationProxyUnregisterEventStopDrivingCar P)
{
	Generated_F8TrafficSimulationProxyUnregisterEventStopDrivingCar = P;
}
inline void DoCb_TrafficTransientWorldBeforeMoveCallback(Cb_TrafficTransientWorldBeforeMoveMapperClass *object, double dTimeInSeconds)
{
	object->DoCb_TrafficTransientWorldBeforeMoveCallback(dTimeInSeconds);
}
inline void Register_Callback_F8TrafficSimulationProxyRegisterEventTransientWorldBeforeMove(TF8TrafficSimulationProxyRegisterEventTransientWorldBeforeMove P)
{
	Generated_F8TrafficSimulationProxyRegisterEventTransientWorldBeforeMove = P;
}
inline void DoCb_TrafficTransientWorldAfterMoveCallback(Cb_TrafficTransientWorldAfterMoveMapperClass *object, double dTimeInSeconds)
{
	object->DoCb_TrafficTransientWorldAfterMoveCallback(dTimeInSeconds);
}
inline void Register_Callback_F8TrafficSimulationProxyRegisterEventTransientWorldAfterMove(TF8TrafficSimulationProxyRegisterEventTransientWorldAfterMove P)
{
	Generated_F8TrafficSimulationProxyRegisterEventTransientWorldAfterMove = P;
}
inline void DoCb_TrafficTransientWorldMoveCallback(Cb_TrafficTransientWorldMoveMapperClass *object, double dTimeInSeconds)
{
	object->DoCb_TrafficTransientWorldMoveCallback(dTimeInSeconds);
}
inline void Register_Callback_F8TrafficSimulationProxyRegisterEventTransientWorldMove(TF8TrafficSimulationProxyRegisterEventTransientWorldMove P)
{
	Generated_F8TrafficSimulationProxyRegisterEventTransientWorldMove = P;
}
inline void DoCb_TrafficNewTransientObjectCallback(Cb_TrafficNewTransientObjectMapperClass *object, void* newTransient)
{
	object->DoCb_TrafficNewTransientObjectCallback(std::make_shared<F8TransientInstanceProxy_Class>(newTransient));
}
inline void Register_Callback_F8TrafficSimulationProxyRegisterEventNewTransientObject(TF8TrafficSimulationProxyRegisterEventNewTransientObject P)
{
	Generated_F8TrafficSimulationProxyRegisterEventNewTransientObject = P;
}
inline void DoCb_TrafficTransientObjectDeletedCallback(Cb_TrafficTransientObjectDeletedMapperClass *object, void* deletedTransient)
{
	object->DoCb_TrafficTransientObjectDeletedCallback(std::make_shared<F8TransientInstanceProxy_Class>(deletedTransient));
}
inline void Register_Callback_F8TrafficSimulationProxyRegisterEventTransientObjectDeleted(TF8TrafficSimulationProxyRegisterEventTransientObjectDeleted P)
{
	Generated_F8TrafficSimulationProxyRegisterEventTransientObjectDeleted = P;
}
inline void DoCb_TrafficCacheSimulationDataCallback(Cb_TrafficCacheSimulationDataMapperClass *object, double dTimeInSeconds)
{
	object->DoCb_TrafficCacheSimulationDataCallback(dTimeInSeconds);
}
inline void Register_Callback_F8TrafficSimulationProxyRegisterEventCacheSimulationData(TF8TrafficSimulationProxyRegisterEventCacheSimulationData P)
{
	Generated_F8TrafficSimulationProxyRegisterEventCacheSimulationData = P;
}
inline void Register_Callback_F8TrafficSimulationProxyUnregisterEventTransientWorldBeforeMove(TF8TrafficSimulationProxyUnregisterEventTransientWorldBeforeMove P)
{
	Generated_F8TrafficSimulationProxyUnregisterEventTransientWorldBeforeMove = P;
}
inline void Register_Callback_F8TrafficSimulationProxyUnregisterEventTransientWorldAfterMove(TF8TrafficSimulationProxyUnregisterEventTransientWorldAfterMove P)
{
	Generated_F8TrafficSimulationProxyUnregisterEventTransientWorldAfterMove = P;
}
inline void Register_Callback_F8TrafficSimulationProxyUnregisterEventTransientWorldMove(TF8TrafficSimulationProxyUnregisterEventTransientWorldMove P)
{
	Generated_F8TrafficSimulationProxyUnregisterEventTransientWorldMove = P;
}
inline void Register_Callback_F8TrafficSimulationProxyUnregisterEventNewTransientObject(TF8TrafficSimulationProxyUnregisterEventNewTransientObject P)
{
	Generated_F8TrafficSimulationProxyUnregisterEventNewTransientObject = P;
}
inline void Register_Callback_F8TrafficSimulationProxyUnregisterEventTransientObjectDeleted(TF8TrafficSimulationProxyUnregisterEventTransientObjectDeleted P)
{
	Generated_F8TrafficSimulationProxyUnregisterEventTransientObjectDeleted = P;
}
inline void Register_Callback_F8TrafficSimulationProxyUnregisterEventCacheSimulationData(TF8TrafficSimulationProxyUnregisterEventCacheSimulationData P)
{
	Generated_F8TrafficSimulationProxyUnregisterEventCacheSimulationData = P;
}
inline void Register_Callback_F8TrafficSimulationProxyDestroy(TF8TrafficSimulationProxyDestroy P)
{
	Generated_F8TrafficSimulationProxyDestroy = P;
}
inline void Register_Callback_F8VisualOptionsRootProxyGetDisplayOption(TF8VisualOptionsRootProxyGetDisplayOption P)
{
	Generated_F8VisualOptionsRootProxyGetDisplayOption = P;
}
inline void Register_Callback_F8VisualOptionsRootProxySetDisplayOption(TF8VisualOptionsRootProxySetDisplayOption P)
{
	Generated_F8VisualOptionsRootProxySetDisplayOption = P;
}
inline void Register_Callback_F8VisualOptionsRootProxyDestroy(TF8VisualOptionsRootProxyDestroy P)
{
	Generated_F8VisualOptionsRootProxyDestroy = P;
}
inline void Register_Callback_F8CurrentScriptInfoTypeDestroy(TF8CurrentScriptInfoTypeDestroy P)
{
	Generated_F8CurrentScriptInfoTypeDestroy = P;
}
inline void Register_Callback_F8CurrentScriptInfoTypeGetIsExecuting(TF8CurrentScriptInfoTypeGetIsExecuting P)
{
	Generated_F8CurrentScriptInfoTypeGetIsExecuting = P;
}
inline void Register_Callback_F8CurrentScriptInfoTypeGetIsAnimation(TF8CurrentScriptInfoTypeGetIsAnimation P)
{
	Generated_F8CurrentScriptInfoTypeGetIsAnimation = P;
}
inline void Register_Callback_F8CurrentScriptInfoTypeGetScript(TF8CurrentScriptInfoTypeGetScript P)
{
	Generated_F8CurrentScriptInfoTypeGetScript = P;
}
inline void Register_Callback_F8CurrentScriptInfoTypeGetScriptAnimation(TF8CurrentScriptInfoTypeGetScriptAnimation P)
{
	Generated_F8CurrentScriptInfoTypeGetScriptAnimation = P;
}
inline void Register_Callback_F8CurrentScriptInfoTypeGetTime(TF8CurrentScriptInfoTypeGetTime P)
{
	Generated_F8CurrentScriptInfoTypeGetTime = P;
}
inline void Register_Callback_F8SimulationCoreProxyDestroy(TF8SimulationCoreProxyDestroy P)
{
	Generated_F8SimulationCoreProxyDestroy = P;
}
inline void Register_Callback_F8SimulationCoreProxyGetTrafficSimulation(TF8SimulationCoreProxyGetTrafficSimulation P)
{
	Generated_F8SimulationCoreProxyGetTrafficSimulation = P;
}
inline void Register_Callback_F8SimulationCoreProxyGetEnvironmentState(TF8SimulationCoreProxyGetEnvironmentState P)
{
	Generated_F8SimulationCoreProxyGetEnvironmentState = P;
}
inline void Register_Callback_F8SimulationCoreProxySetEnvironmentState(TF8SimulationCoreProxySetEnvironmentState P)
{
	Generated_F8SimulationCoreProxySetEnvironmentState = P;
}
inline void Register_Callback_F8SimulationCoreProxyApplyContext(TF8SimulationCoreProxyApplyContext P)
{
	Generated_F8SimulationCoreProxyApplyContext = P;
}
inline void Register_Callback_F8SimulationCoreProxyGetVisualOptionsRoot(TF8SimulationCoreProxyGetVisualOptionsRoot P)
{
	Generated_F8SimulationCoreProxyGetVisualOptionsRoot = P;
}
inline void Register_Callback_F8SimulationCoreProxyExecuteScript(TF8SimulationCoreProxyExecuteScript P)
{
	Generated_F8SimulationCoreProxyExecuteScript = P;
}
inline void Register_Callback_F8SimulationCoreProxyExecuteScriptAnimation(TF8SimulationCoreProxyExecuteScriptAnimation P)
{
	Generated_F8SimulationCoreProxyExecuteScriptAnimation = P;
}
inline void Register_Callback_F8SimulationCoreProxyGetScriptStatus(TF8SimulationCoreProxyGetScriptStatus P)
{
	Generated_F8SimulationCoreProxyGetScriptStatus = P;
}
inline void Register_Callback_F8SimulationCoreProxySetScriptStatus(TF8SimulationCoreProxySetScriptStatus P)
{
	Generated_F8SimulationCoreProxySetScriptStatus = P;
}
inline void Register_Callback_F8SimulationCoreProxyGetCurrentScriptInfo(TF8SimulationCoreProxyGetCurrentScriptInfo P)
{
	Generated_F8SimulationCoreProxyGetCurrentScriptInfo = P;
}
inline void Register_Callback_F8SimulationCoreProxyStartScenario(TF8SimulationCoreProxyStartScenario P)
{
	Generated_F8SimulationCoreProxyStartScenario = P;
}
inline void Register_Callback_F8SimulationCoreProxyStopAllScenarios(TF8SimulationCoreProxyStopAllScenarios P)
{
	Generated_F8SimulationCoreProxyStopAllScenarios = P;
}
inline void Register_Callback_F8SimulationCoreProxyClearUserVariables(TF8SimulationCoreProxyClearUserVariables P)
{
	Generated_F8SimulationCoreProxyClearUserVariables = P;
}
inline void Register_Callback_F8SimulationCoreProxyGetUserVariables(TF8SimulationCoreProxyGetUserVariables P)
{
	Generated_F8SimulationCoreProxyGetUserVariables = P;
}
inline void Register_Callback_F8SimulationCoreProxySetUserVariables(TF8SimulationCoreProxySetUserVariables P)
{
	Generated_F8SimulationCoreProxySetUserVariables = P;
}
inline void Register_Callback_F8SimulationCoreProxyGetUserVariable(TF8SimulationCoreProxyGetUserVariable P)
{
	Generated_F8SimulationCoreProxyGetUserVariable = P;
}
inline void Register_Callback_F8SimulationCoreProxySetUserVariable(TF8SimulationCoreProxySetUserVariable P)
{
	Generated_F8SimulationCoreProxySetUserVariable = P;
}
inline void DoCb_SimulationApplyContextCallback(Cb_SimulationApplyContextMapperClass *object, void* context)
{
	object->DoCb_SimulationApplyContextCallback(std::make_shared<F8ContextProxy_Class>(context));
}
inline void Register_Callback_F8SimulationCoreProxyRegisterEventApplyContext(TF8SimulationCoreProxyRegisterEventApplyContext P)
{
	Generated_F8SimulationCoreProxyRegisterEventApplyContext = P;
}
inline void DoCb_SimulationStartEnvironmentCallback(Cb_SimulationStartEnvironmentMapperClass *object)
{
	object->DoCb_SimulationStartEnvironmentCallback();
}
inline void Register_Callback_F8SimulationCoreProxyRegisterEventStartEnvironment(TF8SimulationCoreProxyRegisterEventStartEnvironment P)
{
	Generated_F8SimulationCoreProxyRegisterEventStartEnvironment = P;
}
inline void DoCb_SimulationStopEnvironmentCallback(Cb_SimulationStopEnvironmentMapperClass *object)
{
	object->DoCb_SimulationStopEnvironmentCallback();
}
inline void Register_Callback_F8SimulationCoreProxyRegisterEventStopEnvironment(TF8SimulationCoreProxyRegisterEventStopEnvironment P)
{
	Generated_F8SimulationCoreProxyRegisterEventStopEnvironment = P;
}
inline void DoCb_SimulationStartScenarioCallback(Cb_SimulationStartScenarioMapperClass *object, void* scenario)
{
	object->DoCb_SimulationStartScenarioCallback(std::make_shared<F8ScenarioProxy_Class>(scenario));
}
inline void Register_Callback_F8SimulationCoreProxyRegisterEventStartScenario(TF8SimulationCoreProxyRegisterEventStartScenario P)
{
	Generated_F8SimulationCoreProxyRegisterEventStartScenario = P;
}
inline void DoCb_SimulationStopScenarioCallback(Cb_SimulationStopScenarioMapperClass *object, void* scenario,int runningScenarioCount)
{
	object->DoCb_SimulationStopScenarioCallback(std::make_shared<F8ScenarioProxy_Class>(scenario),runningScenarioCount);
}
inline void Register_Callback_F8SimulationCoreProxyRegisterEventStopScenario(TF8SimulationCoreProxyRegisterEventStopScenario P)
{
	Generated_F8SimulationCoreProxyRegisterEventStopScenario = P;
}
inline void DoCb_SimulationStartEventCallback(Cb_SimulationStartEventMapperClass *object, void* Event)
{
	object->DoCb_SimulationStartEventCallback(std::make_shared<F8EventProxy_Class>(Event));
}
inline void Register_Callback_F8SimulationCoreProxyRegisterEventStartEvent(TF8SimulationCoreProxyRegisterEventStartEvent P)
{
	Generated_F8SimulationCoreProxyRegisterEventStartEvent = P;
}
inline void DoCb_SimulationStopEventCallback(Cb_SimulationStopEventMapperClass *object, void* Event)
{
	object->DoCb_SimulationStopEventCallback(std::make_shared<F8EventProxy_Class>(Event));
}
inline void Register_Callback_F8SimulationCoreProxyRegisterEventStopEvent(TF8SimulationCoreProxyRegisterEventStopEvent P)
{
	Generated_F8SimulationCoreProxyRegisterEventStopEvent = P;
}
inline void DoCb_SimulationStartScriptCallback(Cb_SimulationStartScriptMapperClass *object)
{
	object->DoCb_SimulationStartScriptCallback();
}
inline void Register_Callback_F8SimulationCoreProxyRegisterEventStartScript(TF8SimulationCoreProxyRegisterEventStartScript P)
{
	Generated_F8SimulationCoreProxyRegisterEventStartScript = P;
}
inline void DoCb_SimulationStopScriptCallback(Cb_SimulationStopScriptMapperClass *object)
{
	object->DoCb_SimulationStopScriptCallback();
}
inline void Register_Callback_F8SimulationCoreProxyRegisterEventStopScript(TF8SimulationCoreProxyRegisterEventStopScript P)
{
	Generated_F8SimulationCoreProxyRegisterEventStopScript = P;
}
inline void Register_Callback_F8SimulationCoreProxyUnregisterEventApplyContext(TF8SimulationCoreProxyUnregisterEventApplyContext P)
{
	Generated_F8SimulationCoreProxyUnregisterEventApplyContext = P;
}
inline void Register_Callback_F8SimulationCoreProxyUnregisterEventStartEnvironment(TF8SimulationCoreProxyUnregisterEventStartEnvironment P)
{
	Generated_F8SimulationCoreProxyUnregisterEventStartEnvironment = P;
}
inline void Register_Callback_F8SimulationCoreProxyUnregisterEventStopEnvironment(TF8SimulationCoreProxyUnregisterEventStopEnvironment P)
{
	Generated_F8SimulationCoreProxyUnregisterEventStopEnvironment = P;
}
inline void Register_Callback_F8SimulationCoreProxyUnregisterEventStartScenario(TF8SimulationCoreProxyUnregisterEventStartScenario P)
{
	Generated_F8SimulationCoreProxyUnregisterEventStartScenario = P;
}
inline void Register_Callback_F8SimulationCoreProxyUnregisterEventStopScenario(TF8SimulationCoreProxyUnregisterEventStopScenario P)
{
	Generated_F8SimulationCoreProxyUnregisterEventStopScenario = P;
}
inline void Register_Callback_F8SimulationCoreProxyUnregisterEventStartEvent(TF8SimulationCoreProxyUnregisterEventStartEvent P)
{
	Generated_F8SimulationCoreProxyUnregisterEventStartEvent = P;
}
inline void Register_Callback_F8SimulationCoreProxyUnregisterEventStopEvent(TF8SimulationCoreProxyUnregisterEventStopEvent P)
{
	Generated_F8SimulationCoreProxyUnregisterEventStopEvent = P;
}
inline void Register_Callback_F8SimulationCoreProxyUnregisterEventStartScript(TF8SimulationCoreProxyUnregisterEventStartScript P)
{
	Generated_F8SimulationCoreProxyUnregisterEventStartScript = P;
}
inline void Register_Callback_F8SimulationCoreProxyUnregisterEventStopScript(TF8SimulationCoreProxyUnregisterEventStopScript P)
{
	Generated_F8SimulationCoreProxyUnregisterEventStopScript = P;
}
inline void Register_Callback_F8OpenGLProxyGetSize(TF8OpenGLProxyGetSize P)
{
	Generated_F8OpenGLProxyGetSize = P;
}
inline void Register_Callback_F8OpenGLProxyGetRenderingViewPort(TF8OpenGLProxyGetRenderingViewPort P)
{
	Generated_F8OpenGLProxyGetRenderingViewPort = P;
}
inline void Register_Callback_F8OpenGLProxyGetProjectionMatrix(TF8OpenGLProxyGetProjectionMatrix P)
{
	Generated_F8OpenGLProxyGetProjectionMatrix = P;
}
inline void Register_Callback_F8OpenGLProxyGetModelViewMatrix(TF8OpenGLProxyGetModelViewMatrix P)
{
	Generated_F8OpenGLProxyGetModelViewMatrix = P;
}
inline void Register_Callback_F8OpenGLProxySetFocus(TF8OpenGLProxySetFocus P)
{
	Generated_F8OpenGLProxySetFocus = P;
}
inline void Register_Callback_F8OpenGLProxyChanged(TF8OpenGLProxyChanged P)
{
	Generated_F8OpenGLProxyChanged = P;
}
inline void Register_Callback_F8OpenGLProxyDestroy(TF8OpenGLProxyDestroy P)
{
	Generated_F8OpenGLProxyDestroy = P;
}
inline void DoCb_MainFormOpenGLBeforePaintCallback(Cb_MainFormOpenGLBeforePaintMapperClass *object, int mode)
{
	object->DoCb_MainFormOpenGLBeforePaintCallback(mode);
}
inline void Register_Callback_F8MainOpenGLProxyRegisterEventOpenGLBeforePaint(TF8MainOpenGLProxyRegisterEventOpenGLBeforePaint P)
{
	Generated_F8MainOpenGLProxyRegisterEventOpenGLBeforePaint = P;
}
inline void DoCb_MainFormOpenGLAfterDrawSceneCallback(Cb_MainFormOpenGLAfterDrawSceneMapperClass *object)
{
	object->DoCb_MainFormOpenGLAfterDrawSceneCallback();
}
inline void Register_Callback_F8MainOpenGLProxyRegisterEventOpenGLAfterDrawScene(TF8MainOpenGLProxyRegisterEventOpenGLAfterDrawScene P)
{
	Generated_F8MainOpenGLProxyRegisterEventOpenGLAfterDrawScene = P;
}
inline void DoCb_MainFormOpenGLAfterPaintCallback(Cb_MainFormOpenGLAfterPaintMapperClass *object)
{
	object->DoCb_MainFormOpenGLAfterPaintCallback();
}
inline void Register_Callback_F8MainOpenGLProxyRegisterEventOpenGLAfterPaint(TF8MainOpenGLProxyRegisterEventOpenGLAfterPaint P)
{
	Generated_F8MainOpenGLProxyRegisterEventOpenGLAfterPaint = P;
}
inline void Register_Callback_F8MainOpenGLProxyUnregisterEventOpenGLBeforePaint(TF8MainOpenGLProxyUnregisterEventOpenGLBeforePaint P)
{
	Generated_F8MainOpenGLProxyUnregisterEventOpenGLBeforePaint = P;
}
inline void Register_Callback_F8MainOpenGLProxyUnregisterEventOpenGLAfterDrawScene(TF8MainOpenGLProxyUnregisterEventOpenGLAfterDrawScene P)
{
	Generated_F8MainOpenGLProxyUnregisterEventOpenGLAfterDrawScene = P;
}
inline void Register_Callback_F8MainOpenGLProxyUnregisterEventOpenGLAfterPaint(TF8MainOpenGLProxyUnregisterEventOpenGLAfterPaint P)
{
	Generated_F8MainOpenGLProxyUnregisterEventOpenGLAfterPaint = P;
}
inline void DoCb_MainFormOpenGLMouseEnterCallback(Cb_MainFormOpenGLMouseEnterMapperClass *object)
{
	object->DoCb_MainFormOpenGLMouseEnterCallback();
}
inline void Register_Callback_F8MainOpenGLProxyRegisterEventOpenGLMouseEnter(TF8MainOpenGLProxyRegisterEventOpenGLMouseEnter P)
{
	Generated_F8MainOpenGLProxyRegisterEventOpenGLMouseEnter = P;
}
inline void DoCb_MainFormOpenGLMouseLeaveCallback(Cb_MainFormOpenGLMouseLeaveMapperClass *object)
{
	object->DoCb_MainFormOpenGLMouseLeaveCallback();
}
inline void Register_Callback_F8MainOpenGLProxyRegisterEventOpenGLMouseLeave(TF8MainOpenGLProxyRegisterEventOpenGLMouseLeave P)
{
	Generated_F8MainOpenGLProxyRegisterEventOpenGLMouseLeave = P;
}
inline void DoCb_MainFormOpenGLMouseUpCallback(Cb_MainFormOpenGLMouseUpMapperClass *object, F8MouseButton Button,F8ShiftState Shift,int X,int Y)
{
	object->DoCb_MainFormOpenGLMouseUpCallback(Button,Shift,X,Y);
}
inline void Register_Callback_F8MainOpenGLProxyRegisterEventOpenGLMouseUp(TF8MainOpenGLProxyRegisterEventOpenGLMouseUp P)
{
	Generated_F8MainOpenGLProxyRegisterEventOpenGLMouseUp = P;
}
inline void DoCb_MainFormOpenGLMouseDownCallback(Cb_MainFormOpenGLMouseDownMapperClass *object, F8MouseButton Button,F8ShiftState Shift,int X,int Y)
{
	object->DoCb_MainFormOpenGLMouseDownCallback(Button,Shift,X,Y);
}
inline void Register_Callback_F8MainOpenGLProxyRegisterEventOpenGLMouseDown(TF8MainOpenGLProxyRegisterEventOpenGLMouseDown P)
{
	Generated_F8MainOpenGLProxyRegisterEventOpenGLMouseDown = P;
}
inline void DoCb_MainFormOpenGLMouseMoveCallback(Cb_MainFormOpenGLMouseMoveMapperClass *object, F8ShiftState Shift,int X,int Y)
{
	object->DoCb_MainFormOpenGLMouseMoveCallback(Shift,X,Y);
}
inline void Register_Callback_F8MainOpenGLProxyRegisterEventOpenGLMouseMove(TF8MainOpenGLProxyRegisterEventOpenGLMouseMove P)
{
	Generated_F8MainOpenGLProxyRegisterEventOpenGLMouseMove = P;
}
inline void DoCb_MainFormOpenGLMouseWheelCallback(Cb_MainFormOpenGLMouseWheelMapperClass *object, F8ShiftState Shift,int WheelDelta,F8iVec2 MousePos,bool& Handled)
{
	object->DoCb_MainFormOpenGLMouseWheelCallback(Shift,WheelDelta,MousePos,Handled);
}
inline void Register_Callback_F8MainOpenGLProxyRegisterEventOpenGLMouseWheel(TF8MainOpenGLProxyRegisterEventOpenGLMouseWheel P)
{
	Generated_F8MainOpenGLProxyRegisterEventOpenGLMouseWheel = P;
}
inline void Register_Callback_F8MainOpenGLProxyUnregisterEventOpenGLMouseEnter(TF8MainOpenGLProxyUnregisterEventOpenGLMouseEnter P)
{
	Generated_F8MainOpenGLProxyUnregisterEventOpenGLMouseEnter = P;
}
inline void Register_Callback_F8MainOpenGLProxyUnregisterEventOpenGLMouseLeave(TF8MainOpenGLProxyUnregisterEventOpenGLMouseLeave P)
{
	Generated_F8MainOpenGLProxyUnregisterEventOpenGLMouseLeave = P;
}
inline void Register_Callback_F8MainOpenGLProxyUnregisterEventOpenGLMouseUp(TF8MainOpenGLProxyUnregisterEventOpenGLMouseUp P)
{
	Generated_F8MainOpenGLProxyUnregisterEventOpenGLMouseUp = P;
}
inline void Register_Callback_F8MainOpenGLProxyUnregisterEventOpenGLMouseDown(TF8MainOpenGLProxyUnregisterEventOpenGLMouseDown P)
{
	Generated_F8MainOpenGLProxyUnregisterEventOpenGLMouseDown = P;
}
inline void Register_Callback_F8MainOpenGLProxyUnregisterEventOpenGLMouseMove(TF8MainOpenGLProxyUnregisterEventOpenGLMouseMove P)
{
	Generated_F8MainOpenGLProxyUnregisterEventOpenGLMouseMove = P;
}
inline void Register_Callback_F8MainOpenGLProxyUnregisterEventOpenGLMouseWheel(TF8MainOpenGLProxyUnregisterEventOpenGLMouseWheel P)
{
	Generated_F8MainOpenGLProxyUnregisterEventOpenGLMouseWheel = P;
}
inline void Register_Callback_F8MainOpenGLProxyDestroy(TF8MainOpenGLProxyDestroy P)
{
	Generated_F8MainOpenGLProxyDestroy = P;
}
inline void Register_Callback_F8MainRibbonControlProxyGetName(TF8MainRibbonControlProxyGetName P)
{
	Generated_F8MainRibbonControlProxyGetName = P;
}
inline void Register_Callback_F8MainRibbonControlProxyGetControlType(TF8MainRibbonControlProxyGetControlType P)
{
	Generated_F8MainRibbonControlProxyGetControlType = P;
}
inline void Register_Callback_F8MainRibbonControlProxyGetEnabled(TF8MainRibbonControlProxyGetEnabled P)
{
	Generated_F8MainRibbonControlProxyGetEnabled = P;
}
inline void Register_Callback_F8MainRibbonControlProxySetEnabled(TF8MainRibbonControlProxySetEnabled P)
{
	Generated_F8MainRibbonControlProxySetEnabled = P;
}
inline void Register_Callback_F8MainRibbonControlProxyGetVisible(TF8MainRibbonControlProxyGetVisible P)
{
	Generated_F8MainRibbonControlProxyGetVisible = P;
}
inline void Register_Callback_F8MainRibbonControlProxySetVisible(TF8MainRibbonControlProxySetVisible P)
{
	Generated_F8MainRibbonControlProxySetVisible = P;
}
inline void Register_Callback_F8MainRibbonControlProxyGetLeft(TF8MainRibbonControlProxyGetLeft P)
{
	Generated_F8MainRibbonControlProxyGetLeft = P;
}
inline void Register_Callback_F8MainRibbonControlProxySetLeft(TF8MainRibbonControlProxySetLeft P)
{
	Generated_F8MainRibbonControlProxySetLeft = P;
}
inline void Register_Callback_F8MainRibbonControlProxyGetTop(TF8MainRibbonControlProxyGetTop P)
{
	Generated_F8MainRibbonControlProxyGetTop = P;
}
inline void Register_Callback_F8MainRibbonControlProxySetTop(TF8MainRibbonControlProxySetTop P)
{
	Generated_F8MainRibbonControlProxySetTop = P;
}
inline void Register_Callback_F8MainRibbonControlProxyGetWidth(TF8MainRibbonControlProxyGetWidth P)
{
	Generated_F8MainRibbonControlProxyGetWidth = P;
}
inline void Register_Callback_F8MainRibbonControlProxySetWidth(TF8MainRibbonControlProxySetWidth P)
{
	Generated_F8MainRibbonControlProxySetWidth = P;
}
inline void Register_Callback_F8MainRibbonControlProxyGetHeight(TF8MainRibbonControlProxyGetHeight P)
{
	Generated_F8MainRibbonControlProxyGetHeight = P;
}
inline void Register_Callback_F8MainRibbonControlProxySetHeight(TF8MainRibbonControlProxySetHeight P)
{
	Generated_F8MainRibbonControlProxySetHeight = P;
}
inline void Register_Callback_F8MainRibbonControlProxyDestroy(TF8MainRibbonControlProxyDestroy P)
{
	Generated_F8MainRibbonControlProxyDestroy = P;
}
inline void Register_Callback_F8MainRibbonButtonProxyGetCaption(TF8MainRibbonButtonProxyGetCaption P)
{
	Generated_F8MainRibbonButtonProxyGetCaption = P;
}
inline void Register_Callback_F8MainRibbonButtonProxySetCaption(TF8MainRibbonButtonProxySetCaption P)
{
	Generated_F8MainRibbonButtonProxySetCaption = P;
}
inline void Register_Callback_F8MainRibbonButtonProxyIsSetCallbackOnClick(TF8MainRibbonButtonProxyIsSetCallbackOnClick P)
{
	Generated_F8MainRibbonButtonProxyIsSetCallbackOnClick = P;
}
inline void DoCb_RibbonMenuItemOnClickCallback(Cb_RibbonMenuItemOnClickMapperClass *object)
{
	object->DoCb_RibbonMenuItemOnClickCallback();
}
inline void Register_Callback_F8MainRibbonButtonProxySetCallbackOnClick(TF8MainRibbonButtonProxySetCallbackOnClick P)
{
	Generated_F8MainRibbonButtonProxySetCallbackOnClick = P;
}
inline void Register_Callback_F8MainRibbonButtonProxyUnsetCallbackOnClick(TF8MainRibbonButtonProxyUnsetCallbackOnClick P)
{
	Generated_F8MainRibbonButtonProxyUnsetCallbackOnClick = P;
}
inline void Register_Callback_F8MainRibbonButtonProxyDestroy(TF8MainRibbonButtonProxyDestroy P)
{
	Generated_F8MainRibbonButtonProxyDestroy = P;
}
inline void Register_Callback_F8MainRibbonEditProxyGetText(TF8MainRibbonEditProxyGetText P)
{
	Generated_F8MainRibbonEditProxyGetText = P;
}
inline void Register_Callback_F8MainRibbonEditProxySetText(TF8MainRibbonEditProxySetText P)
{
	Generated_F8MainRibbonEditProxySetText = P;
}
inline void Register_Callback_F8MainRibbonEditProxyIsSetCallbackOnChange(TF8MainRibbonEditProxyIsSetCallbackOnChange P)
{
	Generated_F8MainRibbonEditProxyIsSetCallbackOnChange = P;
}
inline void DoCb_RibbonMenuItemOnChangeCallback(Cb_RibbonMenuItemOnChangeMapperClass *object)
{
	object->DoCb_RibbonMenuItemOnChangeCallback();
}
inline void Register_Callback_F8MainRibbonEditProxySetCallbackOnChange(TF8MainRibbonEditProxySetCallbackOnChange P)
{
	Generated_F8MainRibbonEditProxySetCallbackOnChange = P;
}
inline void Register_Callback_F8MainRibbonEditProxyUnsetCallbackOnChange(TF8MainRibbonEditProxyUnsetCallbackOnChange P)
{
	Generated_F8MainRibbonEditProxyUnsetCallbackOnChange = P;
}
inline void Register_Callback_F8MainRibbonEditProxyDestroy(TF8MainRibbonEditProxyDestroy P)
{
	Generated_F8MainRibbonEditProxyDestroy = P;
}
inline void Register_Callback_F8MainRibbonLabelProxyGetCaption(TF8MainRibbonLabelProxyGetCaption P)
{
	Generated_F8MainRibbonLabelProxyGetCaption = P;
}
inline void Register_Callback_F8MainRibbonLabelProxySetCaption(TF8MainRibbonLabelProxySetCaption P)
{
	Generated_F8MainRibbonLabelProxySetCaption = P;
}
inline void Register_Callback_F8MainRibbonLabelProxyDestroy(TF8MainRibbonLabelProxyDestroy P)
{
	Generated_F8MainRibbonLabelProxyDestroy = P;
}
inline void Register_Callback_F8MainRibbonCheckBoxProxyGetCaption(TF8MainRibbonCheckBoxProxyGetCaption P)
{
	Generated_F8MainRibbonCheckBoxProxyGetCaption = P;
}
inline void Register_Callback_F8MainRibbonCheckBoxProxySetCaption(TF8MainRibbonCheckBoxProxySetCaption P)
{
	Generated_F8MainRibbonCheckBoxProxySetCaption = P;
}
inline void Register_Callback_F8MainRibbonCheckBoxProxyGetChecked(TF8MainRibbonCheckBoxProxyGetChecked P)
{
	Generated_F8MainRibbonCheckBoxProxyGetChecked = P;
}
inline void Register_Callback_F8MainRibbonCheckBoxProxySetChecked(TF8MainRibbonCheckBoxProxySetChecked P)
{
	Generated_F8MainRibbonCheckBoxProxySetChecked = P;
}
inline void Register_Callback_F8MainRibbonCheckBoxProxyIsSetCallbackOnClick(TF8MainRibbonCheckBoxProxyIsSetCallbackOnClick P)
{
	Generated_F8MainRibbonCheckBoxProxyIsSetCallbackOnClick = P;
}
inline void Register_Callback_F8MainRibbonCheckBoxProxySetCallbackOnClick(TF8MainRibbonCheckBoxProxySetCallbackOnClick P)
{
	Generated_F8MainRibbonCheckBoxProxySetCallbackOnClick = P;
}
inline void Register_Callback_F8MainRibbonCheckBoxProxyUnsetCallbackOnClick(TF8MainRibbonCheckBoxProxyUnsetCallbackOnClick P)
{
	Generated_F8MainRibbonCheckBoxProxyUnsetCallbackOnClick = P;
}
inline void Register_Callback_F8MainRibbonCheckBoxProxyDestroy(TF8MainRibbonCheckBoxProxyDestroy P)
{
	Generated_F8MainRibbonCheckBoxProxyDestroy = P;
}
inline void Register_Callback_F8MainRibbonGroupProxyCreateButton(TF8MainRibbonGroupProxyCreateButton P)
{
	Generated_F8MainRibbonGroupProxyCreateButton = P;
}
inline void Register_Callback_F8MainRibbonGroupProxyCreateEdit(TF8MainRibbonGroupProxyCreateEdit P)
{
	Generated_F8MainRibbonGroupProxyCreateEdit = P;
}
inline void Register_Callback_F8MainRibbonGroupProxyCreateCheckBox(TF8MainRibbonGroupProxyCreateCheckBox P)
{
	Generated_F8MainRibbonGroupProxyCreateCheckBox = P;
}
inline void Register_Callback_F8MainRibbonGroupProxyCreateLabel(TF8MainRibbonGroupProxyCreateLabel P)
{
	Generated_F8MainRibbonGroupProxyCreateLabel = P;
}
inline void Register_Callback_F8MainRibbonGroupProxyCreatePanel(TF8MainRibbonGroupProxyCreatePanel P)
{
	Generated_F8MainRibbonGroupProxyCreatePanel = P;
}
inline void Register_Callback_F8MainRibbonGroupProxyGetControlByName(TF8MainRibbonGroupProxyGetControlByName P)
{
	Generated_F8MainRibbonGroupProxyGetControlByName = P;
}
inline void Register_Callback_F8MainRibbonGroupProxyDeleteControl(TF8MainRibbonGroupProxyDeleteControl P)
{
	Generated_F8MainRibbonGroupProxyDeleteControl = P;
}
inline void Register_Callback_F8MainRibbonGroupProxyGetRibbonControlsCount(TF8MainRibbonGroupProxyGetRibbonControlsCount P)
{
	Generated_F8MainRibbonGroupProxyGetRibbonControlsCount = P;
}
inline void Register_Callback_F8MainRibbonGroupProxyGetRibbonControl(TF8MainRibbonGroupProxyGetRibbonControl P)
{
	Generated_F8MainRibbonGroupProxyGetRibbonControl = P;
}
inline void Register_Callback_F8MainRibbonGroupProxyGetName(TF8MainRibbonGroupProxyGetName P)
{
	Generated_F8MainRibbonGroupProxyGetName = P;
}
inline void Register_Callback_F8MainRibbonGroupProxyGetCaption(TF8MainRibbonGroupProxyGetCaption P)
{
	Generated_F8MainRibbonGroupProxyGetCaption = P;
}
inline void Register_Callback_F8MainRibbonGroupProxySetCaption(TF8MainRibbonGroupProxySetCaption P)
{
	Generated_F8MainRibbonGroupProxySetCaption = P;
}
inline void Register_Callback_F8MainRibbonGroupProxyGetEnabled(TF8MainRibbonGroupProxyGetEnabled P)
{
	Generated_F8MainRibbonGroupProxyGetEnabled = P;
}
inline void Register_Callback_F8MainRibbonGroupProxyGetVisible(TF8MainRibbonGroupProxyGetVisible P)
{
	Generated_F8MainRibbonGroupProxyGetVisible = P;
}
inline void Register_Callback_F8MainRibbonGroupProxyDestroy(TF8MainRibbonGroupProxyDestroy P)
{
	Generated_F8MainRibbonGroupProxyDestroy = P;
}
inline void Register_Callback_F8MainRibbonPanelProxyCreateButton(TF8MainRibbonPanelProxyCreateButton P)
{
	Generated_F8MainRibbonPanelProxyCreateButton = P;
}
inline void Register_Callback_F8MainRibbonPanelProxyCreateEdit(TF8MainRibbonPanelProxyCreateEdit P)
{
	Generated_F8MainRibbonPanelProxyCreateEdit = P;
}
inline void Register_Callback_F8MainRibbonPanelProxyCreateCheckBox(TF8MainRibbonPanelProxyCreateCheckBox P)
{
	Generated_F8MainRibbonPanelProxyCreateCheckBox = P;
}
inline void Register_Callback_F8MainRibbonPanelProxyCreateLabel(TF8MainRibbonPanelProxyCreateLabel P)
{
	Generated_F8MainRibbonPanelProxyCreateLabel = P;
}
inline void Register_Callback_F8MainRibbonPanelProxyGetControlsCount(TF8MainRibbonPanelProxyGetControlsCount P)
{
	Generated_F8MainRibbonPanelProxyGetControlsCount = P;
}
inline void Register_Callback_F8MainRibbonPanelProxyGetControl(TF8MainRibbonPanelProxyGetControl P)
{
	Generated_F8MainRibbonPanelProxyGetControl = P;
}
inline void Register_Callback_F8MainRibbonPanelProxyGetControlByName(TF8MainRibbonPanelProxyGetControlByName P)
{
	Generated_F8MainRibbonPanelProxyGetControlByName = P;
}
inline void Register_Callback_F8MainRibbonPanelProxyDeleteControl(TF8MainRibbonPanelProxyDeleteControl P)
{
	Generated_F8MainRibbonPanelProxyDeleteControl = P;
}
inline void Register_Callback_F8MainRibbonPanelProxyDestroy(TF8MainRibbonPanelProxyDestroy P)
{
	Generated_F8MainRibbonPanelProxyDestroy = P;
}
inline void Register_Callback_F8MainRibbonTabProxyCreateGroup(TF8MainRibbonTabProxyCreateGroup P)
{
	Generated_F8MainRibbonTabProxyCreateGroup = P;
}
inline void Register_Callback_F8MainRibbonTabProxyGetGroupByName(TF8MainRibbonTabProxyGetGroupByName P)
{
	Generated_F8MainRibbonTabProxyGetGroupByName = P;
}
inline void Register_Callback_F8MainRibbonTabProxyDeleteGroup(TF8MainRibbonTabProxyDeleteGroup P)
{
	Generated_F8MainRibbonTabProxyDeleteGroup = P;
}
inline void Register_Callback_F8MainRibbonTabProxyGetRibbonGroupsCount(TF8MainRibbonTabProxyGetRibbonGroupsCount P)
{
	Generated_F8MainRibbonTabProxyGetRibbonGroupsCount = P;
}
inline void Register_Callback_F8MainRibbonTabProxyGetRibbonGroup(TF8MainRibbonTabProxyGetRibbonGroup P)
{
	Generated_F8MainRibbonTabProxyGetRibbonGroup = P;
}
inline void Register_Callback_F8MainRibbonTabProxyGetName(TF8MainRibbonTabProxyGetName P)
{
	Generated_F8MainRibbonTabProxyGetName = P;
}
inline void Register_Callback_F8MainRibbonTabProxyGetCaption(TF8MainRibbonTabProxyGetCaption P)
{
	Generated_F8MainRibbonTabProxyGetCaption = P;
}
inline void Register_Callback_F8MainRibbonTabProxySetCaption(TF8MainRibbonTabProxySetCaption P)
{
	Generated_F8MainRibbonTabProxySetCaption = P;
}
inline void Register_Callback_F8MainRibbonTabProxyDestroy(TF8MainRibbonTabProxyDestroy P)
{
	Generated_F8MainRibbonTabProxyDestroy = P;
}
inline void Register_Callback_F8MainRibbonProxyCreateTab(TF8MainRibbonProxyCreateTab P)
{
	Generated_F8MainRibbonProxyCreateTab = P;
}
inline void Register_Callback_F8MainRibbonProxyGetTabByCategory(TF8MainRibbonProxyGetTabByCategory P)
{
	Generated_F8MainRibbonProxyGetTabByCategory = P;
}
inline void Register_Callback_F8MainRibbonProxyGetTabByName(TF8MainRibbonProxyGetTabByName P)
{
	Generated_F8MainRibbonProxyGetTabByName = P;
}
inline void Register_Callback_F8MainRibbonProxyDeleteTab(TF8MainRibbonProxyDeleteTab P)
{
	Generated_F8MainRibbonProxyDeleteTab = P;
}
inline void Register_Callback_F8MainRibbonProxyGetRibbonTabsCount(TF8MainRibbonProxyGetRibbonTabsCount P)
{
	Generated_F8MainRibbonProxyGetRibbonTabsCount = P;
}
inline void Register_Callback_F8MainRibbonProxyGetRibbonTab(TF8MainRibbonProxyGetRibbonTab P)
{
	Generated_F8MainRibbonProxyGetRibbonTab = P;
}
inline void Register_Callback_F8MainRibbonProxyDestroy(TF8MainRibbonProxyDestroy P)
{
	Generated_F8MainRibbonProxyDestroy = P;
}
inline void Register_Callback_F8MainCameraProxyGetMainCameraState(TF8MainCameraProxyGetMainCameraState P)
{
	Generated_F8MainCameraProxyGetMainCameraState = P;
}
inline void Register_Callback_F8MainCameraProxySetMainCameraState(TF8MainCameraProxySetMainCameraState P)
{
	Generated_F8MainCameraProxySetMainCameraState = P;
}
inline void Register_Callback_F8MainCameraProxyMoveMainCameraTo(TF8MainCameraProxyMoveMainCameraTo P)
{
	Generated_F8MainCameraProxyMoveMainCameraTo = P;
}
inline void Register_Callback_F8MainCameraProxyDestroy(TF8MainCameraProxyDestroy P)
{
	Generated_F8MainCameraProxyDestroy = P;
}
inline void Register_Callback_F8SimulationScreenProxyGetSettings(TF8SimulationScreenProxyGetSettings P)
{
	Generated_F8SimulationScreenProxyGetSettings = P;
}
inline void Register_Callback_F8SimulationScreenProxySetSettings(TF8SimulationScreenProxySetSettings P)
{
	Generated_F8SimulationScreenProxySetSettings = P;
}
inline void Register_Callback_F8SimulationScreenProxyDestroy(TF8SimulationScreenProxyDestroy P)
{
	Generated_F8SimulationScreenProxyDestroy = P;
}
inline void Register_Callback_F8NavigationStateTypeGetMode(TF8NavigationStateTypeGetMode P)
{
	Generated_F8NavigationStateTypeGetMode = P;
}
inline void Register_Callback_F8NavigationStateTypeSetMode(TF8NavigationStateTypeSetMode P)
{
	Generated_F8NavigationStateTypeSetMode = P;
}
inline void Register_Callback_F8NavigationStateTypeGetCommonParameter(TF8NavigationStateTypeGetCommonParameter P)
{
	Generated_F8NavigationStateTypeGetCommonParameter = P;
}
inline void Register_Callback_F8NavigationStateTypeSetCommonParameter(TF8NavigationStateTypeSetCommonParameter P)
{
	Generated_F8NavigationStateTypeSetCommonParameter = P;
}
inline void Register_Callback_F8NavigationStateTypeSetRoad(TF8NavigationStateTypeSetRoad P)
{
	Generated_F8NavigationStateTypeSetRoad = P;
}
inline void Register_Callback_F8NavigationStateTypeSetVehicle(TF8NavigationStateTypeSetVehicle P)
{
	Generated_F8NavigationStateTypeSetVehicle = P;
}
inline void Register_Callback_F8NavigationStateTypeSetTrailer(TF8NavigationStateTypeSetTrailer P)
{
	Generated_F8NavigationStateTypeSetTrailer = P;
}
inline void Register_Callback_F8NavigationStateTypeSetOffRoadStartPoint(TF8NavigationStateTypeSetOffRoadStartPoint P)
{
	Generated_F8NavigationStateTypeSetOffRoadStartPoint = P;
}
inline void Register_Callback_F8NavigationStateTypeGetWalkParameter(TF8NavigationStateTypeGetWalkParameter P)
{
	Generated_F8NavigationStateTypeGetWalkParameter = P;
}
inline void Register_Callback_F8NavigationStateTypeSetCharacter(TF8NavigationStateTypeSetCharacter P)
{
	Generated_F8NavigationStateTypeSetCharacter = P;
}
inline void Register_Callback_F8NavigationStateTypeGetDriveParameter(TF8NavigationStateTypeGetDriveParameter P)
{
	Generated_F8NavigationStateTypeGetDriveParameter = P;
}
inline void Register_Callback_F8NavigationStateTypeSetDriveParameter(TF8NavigationStateTypeSetDriveParameter P)
{
	Generated_F8NavigationStateTypeSetDriveParameter = P;
}
inline void Register_Callback_F8NavigationStateTypeSetNewCar(TF8NavigationStateTypeSetNewCar P)
{
	Generated_F8NavigationStateTypeSetNewCar = P;
}
inline void Register_Callback_F8NavigationStateTypeGetFlyParameter(TF8NavigationStateTypeGetFlyParameter P)
{
	Generated_F8NavigationStateTypeGetFlyParameter = P;
}
inline void Register_Callback_F8NavigationStateTypeSetFlyParameter(TF8NavigationStateTypeSetFlyParameter P)
{
	Generated_F8NavigationStateTypeSetFlyParameter = P;
}
inline void Register_Callback_F8NavigationStateTypeSetFlightPath(TF8NavigationStateTypeSetFlightPath P)
{
	Generated_F8NavigationStateTypeSetFlightPath = P;
}
inline void Register_Callback_F8NavigationStateTypeGetBikeParameter(TF8NavigationStateTypeGetBikeParameter P)
{
	Generated_F8NavigationStateTypeGetBikeParameter = P;
}
inline void Register_Callback_F8NavigationStateTypeSetBikeParameter(TF8NavigationStateTypeSetBikeParameter P)
{
	Generated_F8NavigationStateTypeSetBikeParameter = P;
}
inline void Register_Callback_F8NavigationStateTypeSetBikeCharacter(TF8NavigationStateTypeSetBikeCharacter P)
{
	Generated_F8NavigationStateTypeSetBikeCharacter = P;
}
inline void Register_Callback_F8NavigationStateTypeSetBikeFlightPath(TF8NavigationStateTypeSetBikeFlightPath P)
{
	Generated_F8NavigationStateTypeSetBikeFlightPath = P;
}
inline void Register_Callback_F8NavigationStateTypeDestroy(TF8NavigationStateTypeDestroy P)
{
	Generated_F8NavigationStateTypeDestroy = P;
}
inline void Register_Callback_F8MainFormProxyGetCameraMoveMode(TF8MainFormProxyGetCameraMoveMode P)
{
	Generated_F8MainFormProxyGetCameraMoveMode = P;
}
inline void Register_Callback_F8MainFormProxySetCameraMoveMode(TF8MainFormProxySetCameraMoveMode P)
{
	Generated_F8MainFormProxySetCameraMoveMode = P;
}
inline void Register_Callback_F8MainFormProxyGetMainCamera(TF8MainFormProxyGetMainCamera P)
{
	Generated_F8MainFormProxyGetMainCamera = P;
}
inline void Register_Callback_F8MainFormProxyGetMainSimulationScreen(TF8MainFormProxyGetMainSimulationScreen P)
{
	Generated_F8MainFormProxyGetMainSimulationScreen = P;
}
inline void Register_Callback_F8MainFormProxyGetNavigationMode(TF8MainFormProxyGetNavigationMode P)
{
	Generated_F8MainFormProxyGetNavigationMode = P;
}
inline void Register_Callback_F8MainFormProxyGetInitialNavigationState(TF8MainFormProxyGetInitialNavigationState P)
{
	Generated_F8MainFormProxyGetInitialNavigationState = P;
}
inline void Register_Callback_F8MainFormProxySetNavigationState(TF8MainFormProxySetNavigationState P)
{
	Generated_F8MainFormProxySetNavigationState = P;
}
inline void Register_Callback_F8MainFormProxyGetMainOpenGL(TF8MainFormProxyGetMainOpenGL P)
{
	Generated_F8MainFormProxyGetMainOpenGL = P;
}
inline void Register_Callback_F8MainFormProxyGetMainRibbonMenu(TF8MainFormProxyGetMainRibbonMenu P)
{
	Generated_F8MainFormProxyGetMainRibbonMenu = P;
}
inline void Register_Callback_F8MainFormProxyGetWindowHandle(TF8MainFormProxyGetWindowHandle P)
{
	Generated_F8MainFormProxyGetWindowHandle = P;
}
inline void DoCb_MainFormNavigationModeChangeCallback(Cb_MainFormNavigationModeChangeMapperClass *object)
{
	object->DoCb_MainFormNavigationModeChangeCallback();
}
inline void Register_Callback_F8MainFormProxyRegisterEventNavigationModeChange(TF8MainFormProxyRegisterEventNavigationModeChange P)
{
	Generated_F8MainFormProxyRegisterEventNavigationModeChange = P;
}
inline void DoCb_MainFormMoveModeChangeCallback(Cb_MainFormMoveModeChangeMapperClass *object)
{
	object->DoCb_MainFormMoveModeChangeCallback();
}
inline void Register_Callback_F8MainFormProxyRegisterEventMoveModeChange(TF8MainFormProxyRegisterEventMoveModeChange P)
{
	Generated_F8MainFormProxyRegisterEventMoveModeChange = P;
}
inline void DoCb_MainFormModelClickCallback(Cb_MainFormModelClickMapperClass *object, void* instance,F8ModelSelectionEnum& command)
{
	object->DoCb_MainFormModelClickCallback(std::make_shared<F8ObjectInstanceProxy_Class>(instance),command);
}
inline void Register_Callback_F8MainFormProxyRegisterEventModelClick(TF8MainFormProxyRegisterEventModelClick P)
{
	Generated_F8MainFormProxyRegisterEventModelClick = P;
}
inline void DoCb_MainFormJoystickMoveCallback(Cb_MainFormJoystickMoveMapperClass *object, int X,int Y,int Z,int rX,int rY,int rZ,int throttle,int clutch)
{
	object->DoCb_MainFormJoystickMoveCallback(X,Y,Z,rX,rY,rZ,throttle,clutch);
}
inline void Register_Callback_F8MainFormProxyRegisterEventJoystickMove(TF8MainFormProxyRegisterEventJoystickMove P)
{
	Generated_F8MainFormProxyRegisterEventJoystickMove = P;
}
inline void DoCb_MainFormJoystickButtonDownCallback(Cb_MainFormJoystickButtonDownMapperClass *object, int button)
{
	object->DoCb_MainFormJoystickButtonDownCallback(button);
}
inline void Register_Callback_F8MainFormProxyRegisterEventJoystickButtonDown(TF8MainFormProxyRegisterEventJoystickButtonDown P)
{
	Generated_F8MainFormProxyRegisterEventJoystickButtonDown = P;
}
inline void DoCb_MainFormJoystickButtonUpCallback(Cb_MainFormJoystickButtonUpMapperClass *object, int button)
{
	object->DoCb_MainFormJoystickButtonUpCallback(button);
}
inline void Register_Callback_F8MainFormProxyRegisterEventJoystickButtonUp(TF8MainFormProxyRegisterEventJoystickButtonUp P)
{
	Generated_F8MainFormProxyRegisterEventJoystickButtonUp = P;
}
inline void DoCb_MainFormJoystickHatCallback(Cb_MainFormJoystickHatMapperClass *object, unsigned angle)
{
	object->DoCb_MainFormJoystickHatCallback(angle);
}
inline void Register_Callback_F8MainFormProxyRegisterEventJoystickHat(TF8MainFormProxyRegisterEventJoystickHat P)
{
	Generated_F8MainFormProxyRegisterEventJoystickHat = P;
}
inline void DoCb_MainFormKeyUpCallback(Cb_MainFormKeyUpMapperClass *object, unsigned short& Key,F8ShiftState Shift)
{
	object->DoCb_MainFormKeyUpCallback(Key,Shift);
}
inline void Register_Callback_F8MainFormProxyRegisterEventKeyUp(TF8MainFormProxyRegisterEventKeyUp P)
{
	Generated_F8MainFormProxyRegisterEventKeyUp = P;
}
inline void DoCb_MainFormKeyDownCallback(Cb_MainFormKeyDownMapperClass *object, unsigned short& Key,F8ShiftState Shift)
{
	object->DoCb_MainFormKeyDownCallback(Key,Shift);
}
inline void Register_Callback_F8MainFormProxyRegisterEventKeyDown(TF8MainFormProxyRegisterEventKeyDown P)
{
	Generated_F8MainFormProxyRegisterEventKeyDown = P;
}
inline void Register_Callback_F8MainFormProxyUnregisterEventNavigationModeChange(TF8MainFormProxyUnregisterEventNavigationModeChange P)
{
	Generated_F8MainFormProxyUnregisterEventNavigationModeChange = P;
}
inline void Register_Callback_F8MainFormProxyUnregisterEventMoveModeChange(TF8MainFormProxyUnregisterEventMoveModeChange P)
{
	Generated_F8MainFormProxyUnregisterEventMoveModeChange = P;
}
inline void Register_Callback_F8MainFormProxyUnregisterEventModelClick(TF8MainFormProxyUnregisterEventModelClick P)
{
	Generated_F8MainFormProxyUnregisterEventModelClick = P;
}
inline void Register_Callback_F8MainFormProxyUnregisterEventJoystickMove(TF8MainFormProxyUnregisterEventJoystickMove P)
{
	Generated_F8MainFormProxyUnregisterEventJoystickMove = P;
}
inline void Register_Callback_F8MainFormProxyUnregisterEventJoystickButtonDown(TF8MainFormProxyUnregisterEventJoystickButtonDown P)
{
	Generated_F8MainFormProxyUnregisterEventJoystickButtonDown = P;
}
inline void Register_Callback_F8MainFormProxyUnregisterEventJoystickButtonUp(TF8MainFormProxyUnregisterEventJoystickButtonUp P)
{
	Generated_F8MainFormProxyUnregisterEventJoystickButtonUp = P;
}
inline void Register_Callback_F8MainFormProxyUnregisterEventJoystickHat(TF8MainFormProxyUnregisterEventJoystickHat P)
{
	Generated_F8MainFormProxyUnregisterEventJoystickHat = P;
}
inline void Register_Callback_F8MainFormProxyUnregisterEventKeyUp(TF8MainFormProxyUnregisterEventKeyUp P)
{
	Generated_F8MainFormProxyUnregisterEventKeyUp = P;
}
inline void Register_Callback_F8MainFormProxyUnregisterEventKeyDown(TF8MainFormProxyUnregisterEventKeyDown P)
{
	Generated_F8MainFormProxyUnregisterEventKeyDown = P;
}
inline void Register_Callback_F8MainFormProxyDestroy(TF8MainFormProxyDestroy P)
{
	Generated_F8MainFormProxyDestroy = P;
}
inline void Register_Callback_F8GazeTrackingPluginProxyGetCurrentGazeData(TF8GazeTrackingPluginProxyGetCurrentGazeData P)
{
	Generated_F8GazeTrackingPluginProxyGetCurrentGazeData = P;
}
inline void Register_Callback_F8GazeTrackingPluginProxyPushGazeData(TF8GazeTrackingPluginProxyPushGazeData P)
{
	Generated_F8GazeTrackingPluginProxyPushGazeData = P;
}
inline void DoCb_GazeTrackingPluginGazeDataUpdatedCallback(Cb_GazeTrackingPluginGazeDataUpdatedMapperClass *object)
{
	object->DoCb_GazeTrackingPluginGazeDataUpdatedCallback();
}
inline void Register_Callback_F8GazeTrackingPluginProxyRegisterCallbackGazeDataUpdated(TF8GazeTrackingPluginProxyRegisterCallbackGazeDataUpdated P)
{
	Generated_F8GazeTrackingPluginProxyRegisterCallbackGazeDataUpdated = P;
}
inline void Register_Callback_F8GazeTrackingPluginProxyUnregisterCallbackGazeDataUpdated(TF8GazeTrackingPluginProxyUnregisterCallbackGazeDataUpdated P)
{
	Generated_F8GazeTrackingPluginProxyUnregisterCallbackGazeDataUpdated = P;
}
inline void Register_Callback_F8GazeTrackingPluginProxyDestroy(TF8GazeTrackingPluginProxyDestroy P)
{
	Generated_F8GazeTrackingPluginProxyDestroy = P;
}
inline void Register_Callback_F8ApplicationServicesGetSimulationCore(TF8ApplicationServicesGetSimulationCore P)
{
	Generated_F8ApplicationServicesGetSimulationCore = P;
}
inline void Register_Callback_F8ApplicationServicesGetGazeTrackingPlugin(TF8ApplicationServicesGetGazeTrackingPlugin P)
{
	Generated_F8ApplicationServicesGetGazeTrackingPlugin = P;
}
inline void Register_Callback_F8ApplicationServicesGetProject(TF8ApplicationServicesGetProject P)
{
	Generated_F8ApplicationServicesGetProject = P;
}
inline void Register_Callback_F8ApplicationServicesGetMainForm(TF8ApplicationServicesGetMainForm P)
{
	Generated_F8ApplicationServicesGetMainForm = P;
}
inline void Register_Callback_F8ApplicationServicesGetCoordinateConverter(TF8ApplicationServicesGetCoordinateConverter P)
{
	Generated_F8ApplicationServicesGetCoordinateConverter = P;
}
inline void Register_Callback_F8ApplicationServicesGetWorkingDirectory(TF8ApplicationServicesGetWorkingDirectory P)
{
	Generated_F8ApplicationServicesGetWorkingDirectory = P;
}
inline void Register_Callback_F8ApplicationServicesGetUserDirectory(TF8ApplicationServicesGetUserDirectory P)
{
	Generated_F8ApplicationServicesGetUserDirectory = P;
}
inline void Register_Callback_F8ApplicationServicesGetHomeDirectory(TF8ApplicationServicesGetHomeDirectory P)
{
	Generated_F8ApplicationServicesGetHomeDirectory = P;
}
inline void Register_Callback_F8ApplicationServicesProcessMessages(TF8ApplicationServicesProcessMessages P)
{
	Generated_F8ApplicationServicesProcessMessages = P;
}
inline void DoCb_ApplicationPluginAbleMenusCallback(Cb_ApplicationPluginAbleMenusMapperClass *object, bool enable)
{
	object->DoCb_ApplicationPluginAbleMenusCallback(enable);
}
inline void Register_Callback_F8ApplicationServicesRegisterCallbackPluginAbleMenus(TF8ApplicationServicesRegisterCallbackPluginAbleMenus P)
{
	Generated_F8ApplicationServicesRegisterCallbackPluginAbleMenus = P;
}
inline void Register_Callback_F8ApplicationServicesUnregisterCallbackPluginAbleMenus(TF8ApplicationServicesUnregisterCallbackPluginAbleMenus P)
{
	Generated_F8ApplicationServicesUnregisterCallbackPluginAbleMenus = P;
}
inline void DoCb_ApplicationOnErrorOrWarningCallback(Cb_ApplicationOnErrorOrWarningMapperClass *object, F8ApplicationErrorTypeEnum errorType,unsigned short errorCode,const wchar_t* errorMessage)
{
	object->DoCb_ApplicationOnErrorOrWarningCallback(errorType,errorCode,errorMessage);
}
inline void Register_Callback_F8ApplicationServicesRegisterCallbackOnErrorOrWarning(TF8ApplicationServicesRegisterCallbackOnErrorOrWarning P)
{
	Generated_F8ApplicationServicesRegisterCallbackOnErrorOrWarning = P;
}
inline void Register_Callback_F8ApplicationServicesUnregisterCallbackOnErrorOrWarning(TF8ApplicationServicesUnregisterCallbackOnErrorOrWarning P)
{
	Generated_F8ApplicationServicesUnregisterCallbackOnErrorOrWarning = P;
}
inline void DoCb_ApplicationNewProjectCallback(Cb_ApplicationNewProjectMapperClass *object)
{
	object->DoCb_ApplicationNewProjectCallback();
}
inline void Register_Callback_F8ApplicationServicesRegisterCallbackNewProject(TF8ApplicationServicesRegisterCallbackNewProject P)
{
	Generated_F8ApplicationServicesRegisterCallbackNewProject = P;
}
inline void Register_Callback_F8ApplicationServicesUnregisterCallbackNewProject(TF8ApplicationServicesUnregisterCallbackNewProject P)
{
	Generated_F8ApplicationServicesUnregisterCallbackNewProject = P;
}
inline void DoCb_ApplicationBeforeSaveProjectCallback(Cb_ApplicationBeforeSaveProjectMapperClass *object, const wchar_t* name)
{
	object->DoCb_ApplicationBeforeSaveProjectCallback(name);
}
inline void Register_Callback_F8ApplicationServicesRegisterCallbackBeforeSaveProject(TF8ApplicationServicesRegisterCallbackBeforeSaveProject P)
{
	Generated_F8ApplicationServicesRegisterCallbackBeforeSaveProject = P;
}
inline void Register_Callback_F8ApplicationServicesUnregisterCallbackBeforeSaveProject(TF8ApplicationServicesUnregisterCallbackBeforeSaveProject P)
{
	Generated_F8ApplicationServicesUnregisterCallbackBeforeSaveProject = P;
}
inline void DoCb_ApplicationAfterSaveProjectCallback(Cb_ApplicationAfterSaveProjectMapperClass *object)
{
	object->DoCb_ApplicationAfterSaveProjectCallback();
}
inline void Register_Callback_F8ApplicationServicesRegisterCallbackAfterSaveProject(TF8ApplicationServicesRegisterCallbackAfterSaveProject P)
{
	Generated_F8ApplicationServicesRegisterCallbackAfterSaveProject = P;
}
inline void Register_Callback_F8ApplicationServicesUnregisterCallbackAfterSaveProject(TF8ApplicationServicesUnregisterCallbackAfterSaveProject P)
{
	Generated_F8ApplicationServicesUnregisterCallbackAfterSaveProject = P;
}
inline void DoCb_ApplicationCloseProjectQueryCallback(Cb_ApplicationCloseProjectQueryMapperClass *object, bool& Allow)
{
	object->DoCb_ApplicationCloseProjectQueryCallback(Allow);
}
inline void Register_Callback_F8ApplicationServicesRegisterCallbackCloseProjectQuery(TF8ApplicationServicesRegisterCallbackCloseProjectQuery P)
{
	Generated_F8ApplicationServicesRegisterCallbackCloseProjectQuery = P;
}
inline void Register_Callback_F8ApplicationServicesUnregisterCallbackCloseProjectQuery(TF8ApplicationServicesUnregisterCallbackCloseProjectQuery P)
{
	Generated_F8ApplicationServicesUnregisterCallbackCloseProjectQuery = P;
}
inline void DoCb_ApplicationBeforeDestroyProjectCallback(Cb_ApplicationBeforeDestroyProjectMapperClass *object)
{
	object->DoCb_ApplicationBeforeDestroyProjectCallback();
}
inline void Register_Callback_F8ApplicationServicesRegisterCallbackBeforeDestroyProject(TF8ApplicationServicesRegisterCallbackBeforeDestroyProject P)
{
	Generated_F8ApplicationServicesRegisterCallbackBeforeDestroyProject = P;
}
inline void Register_Callback_F8ApplicationServicesUnregisterCallbackBeforeDestroyProject(TF8ApplicationServicesUnregisterCallbackBeforeDestroyProject P)
{
	Generated_F8ApplicationServicesUnregisterCallbackBeforeDestroyProject = P;
}
inline void DoCb_ApplicationAfterLoadProjectCallback(Cb_ApplicationAfterLoadProjectMapperClass *object)
{
	object->DoCb_ApplicationAfterLoadProjectCallback();
}
inline void Register_Callback_F8ApplicationServicesRegisterCallbackAfterLoadProject(TF8ApplicationServicesRegisterCallbackAfterLoadProject P)
{
	Generated_F8ApplicationServicesRegisterCallbackAfterLoadProject = P;
}
inline void Register_Callback_F8ApplicationServicesUnregisterCallbackAfterLoadProject(TF8ApplicationServicesUnregisterCallbackAfterLoadProject P)
{
	Generated_F8ApplicationServicesUnregisterCallbackAfterLoadProject = P;
}
inline void Register_Callback_F8ApplicationServicesDestroy(TF8ApplicationServicesDestroy P)
{
	Generated_F8ApplicationServicesDestroy = P;
}
inline void Register_Callback_F8ProxyBaseDestroy(TF8ProxyBaseDestroy P)
{
	Generated_F8ProxyBaseDestroy = P;
}
inline bool Assigned(F8ProxyBase proxy)
{
	return (proxy->GetObj() != NULL);
}

#endif	// F8API_H
