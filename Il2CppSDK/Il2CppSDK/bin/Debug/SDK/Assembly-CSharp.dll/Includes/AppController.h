#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AppController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AppController"));
	}

	template <typename T = Emulation*> T& _emulation() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = UIWindowsManager*> T& _windowsManager() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = NotificationsManager*> T& _notificationsManager() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = PlatformManager*> T& _platformManager() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = ChatManager*> T& _chatManager() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = StateMachine*> T& _stateMachine() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = ClientAnalyticsManager*> T& Analytics() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = ICommonLogger*> static T& Logger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ClientDataContexts*> T& DataContexts() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = ClientSharedContexts*> T& SharedContexts() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = GameLoader*> T& GameLoader() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = LoadingProgressBar*> T& ProgressBar() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = LogManager*> T& LogManager() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Action1float>*> T& OnUpdate() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Action1int32_t>*> static T& OnQualityChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& OnRegionChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& OnWorldStateEntered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> T& OnStartLoadingFromStep() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> static T& IsGameLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = bool> static T& IsGameLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21);
	}
	template <typename T = bool> static T& IsGameLoadingFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22);
	}
	template <typename T = ILoaderStep*> T& _currentStep() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& _startLoadingTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _loadingPriority() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& isApplicationQuit() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> static T& _noInternetCheckDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& _noInternetRepeatCheckDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& _noInternetCheckMaxCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& _noInternetCheckCount() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& _loaderCoroutine() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = ErrorMessageWindow*> T& _noInternetWindow() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& pauseReason() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& focusReason() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& quitReason() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& _reasonNoInternet() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Params*> T& ArenaParams() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Params*> T& MapParams() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppString*> T& EmulatedLoginId() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& ToLocalHost() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> static T& IsEmulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x23);
	}
	template <typename T = float> T& _nextShowNoInternetConnectionMessage() {
		return *(T*)((uintptr_t)this + 0x11C);
	}

	template <typename T = ClientAnalyticsManager*> T get_Analytics() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x188ED28))(this);
	}
	template <typename T = void> T set_Analytics(ClientAnalyticsManager* value) {
		return ((T (*)(AppController*, ClientAnalyticsManager*))(Il2CppBase() + 0x188ED30))(this, value);
	}
	template <typename T = ICommonLogger*> static T get_Logger() {
		return ((T (*)(void *))(Il2CppBase() + 0x188ED38))(0);
	}
	template <typename T = void> static T set_Logger(ICommonLogger* value) {
		return ((T (*)(void *, ICommonLogger*))(Il2CppBase() + 0x188ED84))(0, value);
	}
	template <typename T = ClientDataContexts*> T get_DataContexts() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x188EDD8))(this);
	}
	template <typename T = void> T set_DataContexts(ClientDataContexts* value) {
		return ((T (*)(AppController*, ClientDataContexts*))(Il2CppBase() + 0x188EDE0))(this, value);
	}
	template <typename T = ClientSharedContexts*> T get_SharedContexts() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x188EDE8))(this);
	}
	template <typename T = void> T set_SharedContexts(ClientSharedContexts* value) {
		return ((T (*)(AppController*, ClientSharedContexts*))(Il2CppBase() + 0x188EDF0))(this, value);
	}
	template <typename T = GameLoader*> T get_GameLoader() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x188EDF8))(this);
	}
	template <typename T = void> T set_GameLoader(GameLoader* value) {
		return ((T (*)(AppController*, GameLoader*))(Il2CppBase() + 0x188EE00))(this, value);
	}
	template <typename T = LoadingProgressBar*> T get_ProgressBar() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x188EE08))(this);
	}
	template <typename T = void> T set_ProgressBar(LoadingProgressBar* value) {
		return ((T (*)(AppController*, LoadingProgressBar*))(Il2CppBase() + 0x188EE10))(this, value);
	}
	template <typename T = ChatManager*> T get_ChatManager() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x188EE18))(this);
	}
	template <typename T = LogManager*> T get_LogManager() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x188EE20))(this);
	}
	template <typename T = void> T set_LogManager(LogManager* value) {
		return ((T (*)(AppController*, LogManager*))(Il2CppBase() + 0x188EE28))(this, value);
	}
	template <typename T = void> T add_OnUpdate(Action1float>* value) {
		return ((T (*)(AppController*, Action1float>*))(Il2CppBase() + 0x188EE30))(this, value);
	}
	template <typename T = void> T remove_OnUpdate(Action1float>* value) {
		return ((T (*)(AppController*, Action1float>*))(Il2CppBase() + 0x188EED0))(this, value);
	}
	template <typename T = void> T add_OnStartLoadingFromStep(uintptr_t value) {
		return ((T (*)(AppController*, uintptr_t))(Il2CppBase() + 0x188EF70))(this, value);
	}
	template <typename T = void> T remove_OnStartLoadingFromStep(uintptr_t value) {
		return ((T (*)(AppController*, uintptr_t))(Il2CppBase() + 0x188F010))(this, value);
	}
	template <typename T = bool> static T get_IsGameLoading() {
		return ((T (*)(void *))(Il2CppBase() + 0x188F0B0))(0);
	}
	template <typename T = void> static T set_IsGameLoading(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x188F0FC))(0, value);
	}
	template <typename T = bool> static T get_IsGameLoaded() {
		return ((T (*)(void *))(Il2CppBase() + 0x188F150))(0);
	}
	template <typename T = void> static T set_IsGameLoaded(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x188F19C))(0, value);
	}
	template <typename T = bool> static T get_IsGameLoadingFailed() {
		return ((T (*)(void *))(Il2CppBase() + 0x188F1F0))(0);
	}
	template <typename T = void> static T set_IsGameLoadingFailed(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x188F23C))(0, value);
	}
	template <typename T = Il2CppString*> static T get_LoginId() {
		return ((T (*)(void *))(Il2CppBase() + 0x188F290))(0);
	}
	template <typename T = void> static T set_LoginId(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x188F2E8))(0, value);
	}
	template <typename T = Il2CppString*> static T get_HuaweiId() {
		return ((T (*)(void *))(Il2CppBase() + 0x188F338))(0);
	}
	template <typename T = void> static T set_HuaweiId(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x188F398))(0, value);
	}
	template <typename T = bool> static T get_IsEmulator() {
		return ((T (*)(void *))(Il2CppBase() + 0x188F3E8))(0);
	}
	template <typename T = void> static T set_IsEmulator(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x188F434))(0, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x188F488))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x188F66C))(this);
	}
	template <typename T = void> T GameStart() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x188F890))(this);
	}
	template <typename T = uintptr_t> T StartGameLoad(uintptr_t OnInitGameLoader) {
		return ((T (*)(AppController*, uintptr_t))(Il2CppBase() + 0x188FA38))(this, OnInitGameLoader);
	}
	template <typename T = void> T LoadingFromStep() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T StartLoadingFromStep() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T PrepareToStartLoading() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x18900E4))(this);
	}
	template <typename T = uintptr_t> T OnLoadingFinishCrt() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x1890468))(this);
	}
	template <typename T = void> T SetNoFatalQuit(Il2CppString* reason, int32_t value) {
		return ((T (*)(AppController*, Il2CppString*, int32_t))(Il2CppBase() + 0x18904E0))(this, reason, value);
	}
	template <typename T = void> T OnApplicationPause(bool pause) {
		return ((T (*)(AppController*, bool))(Il2CppBase() + 0x189063C))(this, pause);
	}
	template <typename T = void> T OnApplicationFocus(bool focus) {
		return ((T (*)(AppController*, bool))(Il2CppBase() + 0x189093C))(this, focus);
	}
	template <typename T = void> T OnApplicationQuit() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x189095C))(this);
	}
	template <typename T = void> T ShowStartScreenIfNeed() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x1890EF0))(this);
	}
	template <typename T = void> T EmulateArena() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x188FACC))(this);
	}
	template <typename T = void> T EmulateMap() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x188FDE8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x1891148))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x18918A8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x18918DC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x18909D4))(this);
	}
	template <typename T = void> T Relogin() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x18919C4))(this);
	}
	template <typename T = void> static T QuitGame(Il2CppString* openUrl) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1891A54))(0, openUrl);
	}
	template <typename T = void> T GameStartb__88_0() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x1891D6C))(this);
	}
	template <typename T = void> T GameStartb__88_1() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x18922D0))(this);
	}
	template <typename T = void> T GameStartb__88_2() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x1892434))(this);
	}
	template <typename T = void> T LoadingFromStepb__90_0() {
		return ((T (*)(AppController*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ShowStartScreenIfNeedb__98_0(IUIWindow* w) {
		return ((T (*)(AppController*, IUIWindow*))(Il2CppBase() + 0x1892598))(this, w);
	}
	template <typename T = void> T Updateb__101_0(int32_t result) {
		return ((T (*)(AppController*, int32_t))(Il2CppBase() + 0x18925A4))(this, result);
	}

};

