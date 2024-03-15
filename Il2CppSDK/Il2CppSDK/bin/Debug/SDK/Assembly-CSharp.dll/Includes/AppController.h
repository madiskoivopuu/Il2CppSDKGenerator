#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AppController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AppController"));
	}

	template <typename R = Emulation*> R& _emulation() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = UIWindowsManager*> R& _windowsManager() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = NotificationsManager*> R& _notificationsManager() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = PlatformManager*> R& _platformManager() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = ChatManager*> R& _chatManager() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = StateMachine*> R& _stateMachine() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = ClientAnalyticsManager*> R& Analytics() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = ICommonLogger*> static R& Logger() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ClientDataContexts*> R& DataContexts() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = ClientSharedContexts*> R& SharedContexts() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = GameLoader*> R& GameLoader() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = LoadingProgressBar*> R& ProgressBar() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = LogManager*> R& LogManager() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	 Action1float>*& OnUpdate() {
		return *(Action1float>**)((uintptr_t)this + 0x78);
	}
	 static Action1int32_t>*& OnQualityChanged() {
		return *(Action1int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = uintptr_t> static R& OnRegionChanged() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = uintptr_t> static R& OnWorldStateEntered() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = uintptr_t> R& OnStartLoadingFromStep() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = bool> static R& IsGameLoading() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = bool> static R& IsGameLoaded() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x21);
	}
	template <typename R = bool> static R& IsGameLoadingFailed() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x22);
	}
	template <typename R = ILoaderStep*> R& _currentStep() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = float> R& _startLoadingTime() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _loadingPriority() {
		return *(R*)((uintptr_t)this + 0x94);
	}
	template <typename R = bool> R& isApplicationQuit() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = float> static R& _noInternetCheckDelay() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& _noInternetRepeatCheckDelay() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& _noInternetCheckMaxCount() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& _noInternetCheckCount() {
		return *(R*)((uintptr_t)this + 0x9C);
	}
	template <typename R = uintptr_t> R& _loaderCoroutine() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = ErrorMessageWindow*> R& _noInternetWindow() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = Il2CppString*> R& pauseReason() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = Il2CppString*> R& focusReason() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = Il2CppString*> R& quitReason() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = Il2CppString*> R& _reasonNoInternet() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = Params*> R& ArenaParams() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = Params*> R& MapParams() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = Il2CppString*> R& EmulatedLoginId() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = bool> R& ToLocalHost() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = bool> static R& IsEmulator() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x23);
	}
	template <typename R = float> R& _nextShowNoInternetConnectionMessage() {
		return *(R*)((uintptr_t)this + 0x11C);
	}

	template <typename R = ClientAnalyticsManager*> R get_Analytics() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x188ED28))(this);
	}
	template <typename R = void> R set_Analytics(ClientAnalyticsManager* value) {
		return ((R (*)(AppController*, ClientAnalyticsManager*))(Il2CppBase() + 0x188ED30))(this, value);
	}
	template <typename R = ICommonLogger*> static R get_Logger() {
		return ((R (*)(void *))(Il2CppBase() + 0x188ED38))(0);
	}
	template <typename R = void> static R set_Logger(ICommonLogger* value) {
		return ((R (*)(void *, ICommonLogger*))(Il2CppBase() + 0x188ED84))(0, value);
	}
	template <typename R = ClientDataContexts*> R get_DataContexts() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x188EDD8))(this);
	}
	template <typename R = void> R set_DataContexts(ClientDataContexts* value) {
		return ((R (*)(AppController*, ClientDataContexts*))(Il2CppBase() + 0x188EDE0))(this, value);
	}
	template <typename R = ClientSharedContexts*> R get_SharedContexts() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x188EDE8))(this);
	}
	template <typename R = void> R set_SharedContexts(ClientSharedContexts* value) {
		return ((R (*)(AppController*, ClientSharedContexts*))(Il2CppBase() + 0x188EDF0))(this, value);
	}
	template <typename R = GameLoader*> R get_GameLoader() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x188EDF8))(this);
	}
	template <typename R = void> R set_GameLoader(GameLoader* value) {
		return ((R (*)(AppController*, GameLoader*))(Il2CppBase() + 0x188EE00))(this, value);
	}
	template <typename R = LoadingProgressBar*> R get_ProgressBar() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x188EE08))(this);
	}
	template <typename R = void> R set_ProgressBar(LoadingProgressBar* value) {
		return ((R (*)(AppController*, LoadingProgressBar*))(Il2CppBase() + 0x188EE10))(this, value);
	}
	template <typename R = ChatManager*> R get_ChatManager() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x188EE18))(this);
	}
	template <typename R = LogManager*> R get_LogManager() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x188EE20))(this);
	}
	template <typename R = void> R set_LogManager(LogManager* value) {
		return ((R (*)(AppController*, LogManager*))(Il2CppBase() + 0x188EE28))(this, value);
	}
	template <typename R = void> R add_OnUpdate(Action1float>* value) {
		return ((R (*)(AppController*, Action1float>*))(Il2CppBase() + 0x188EE30))(this, value);
	}
	template <typename R = void> R remove_OnUpdate(Action1float>* value) {
		return ((R (*)(AppController*, Action1float>*))(Il2CppBase() + 0x188EED0))(this, value);
	}
	template <typename R = void> R add_OnStartLoadingFromStep(uintptr_t value) {
		return ((R (*)(AppController*, uintptr_t))(Il2CppBase() + 0x188EF70))(this, value);
	}
	template <typename R = void> R remove_OnStartLoadingFromStep(uintptr_t value) {
		return ((R (*)(AppController*, uintptr_t))(Il2CppBase() + 0x188F010))(this, value);
	}
	template <typename R = bool> static R get_IsGameLoading() {
		return ((R (*)(void *))(Il2CppBase() + 0x188F0B0))(0);
	}
	template <typename R = void> static R set_IsGameLoading(bool value) {
		return ((R (*)(void *, bool))(Il2CppBase() + 0x188F0FC))(0, value);
	}
	template <typename R = bool> static R get_IsGameLoaded() {
		return ((R (*)(void *))(Il2CppBase() + 0x188F150))(0);
	}
	template <typename R = void> static R set_IsGameLoaded(bool value) {
		return ((R (*)(void *, bool))(Il2CppBase() + 0x188F19C))(0, value);
	}
	template <typename R = bool> static R get_IsGameLoadingFailed() {
		return ((R (*)(void *))(Il2CppBase() + 0x188F1F0))(0);
	}
	template <typename R = void> static R set_IsGameLoadingFailed(bool value) {
		return ((R (*)(void *, bool))(Il2CppBase() + 0x188F23C))(0, value);
	}
	template <typename R = Il2CppString*> static R get_LoginId() {
		return ((R (*)(void *))(Il2CppBase() + 0x188F290))(0);
	}
	template <typename R = void> static R set_LoginId(Il2CppString* value) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x188F2E8))(0, value);
	}
	template <typename R = Il2CppString*> static R get_HuaweiId() {
		return ((R (*)(void *))(Il2CppBase() + 0x188F338))(0);
	}
	template <typename R = void> static R set_HuaweiId(Il2CppString* value) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x188F398))(0, value);
	}
	template <typename R = bool> static R get_IsEmulator() {
		return ((R (*)(void *))(Il2CppBase() + 0x188F3E8))(0);
	}
	template <typename R = void> static R set_IsEmulator(bool value) {
		return ((R (*)(void *, bool))(Il2CppBase() + 0x188F434))(0, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x188F488))(this);
	}
	template <typename R = void> R Start() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x188F66C))(this);
	}
	template <typename R = void> R GameStart() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x188F890))(this);
	}
	template <typename R = uintptr_t> R StartGameLoad(uintptr_t OnInitGameLoader) {
		return ((R (*)(AppController*, uintptr_t))(Il2CppBase() + 0x188FA38))(this, OnInitGameLoader);
	}
	template <typename R = void> R LoadingFromStep() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uintptr_t> R StartLoadingFromStep() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R PrepareToStartLoading() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x18900E4))(this);
	}
	template <typename R = uintptr_t> R OnLoadingFinishCrt() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x1890468))(this);
	}
	template <typename R = void> R SetNoFatalQuit(Il2CppString* reason, int32_t value) {
		return ((R (*)(AppController*, Il2CppString*, int32_t))(Il2CppBase() + 0x18904E0))(this, reason, value);
	}
	template <typename R = void> R OnApplicationPause(bool pause) {
		return ((R (*)(AppController*, bool))(Il2CppBase() + 0x189063C))(this, pause);
	}
	template <typename R = void> R OnApplicationFocus(bool focus) {
		return ((R (*)(AppController*, bool))(Il2CppBase() + 0x189093C))(this, focus);
	}
	template <typename R = void> R OnApplicationQuit() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x189095C))(this);
	}
	template <typename R = void> R ShowStartScreenIfNeed() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x1890EF0))(this);
	}
	template <typename R = void> R EmulateArena() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x188FACC))(this);
	}
	template <typename R = void> R EmulateMap() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x188FDE8))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x1891148))(this);
	}
	template <typename R = void> R LateUpdate() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x18918A8))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x18918DC))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x18909D4))(this);
	}
	template <typename R = void> R Relogin() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x18919C4))(this);
	}
	template <typename R = void> static R QuitGame(Il2CppString* openUrl) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x1891A54))(0, openUrl);
	}
	template <typename R = void> R GameStartb__88_0() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x1891D6C))(this);
	}
	template <typename R = void> R GameStartb__88_1() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x18922D0))(this);
	}
	template <typename R = void> R GameStartb__88_2() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x1892434))(this);
	}
	template <typename R = void> R LoadingFromStepb__90_0() {
		return ((R (*)(AppController*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R ShowStartScreenIfNeedb__98_0(IUIWindow* w) {
		return ((R (*)(AppController*, IUIWindow*))(Il2CppBase() + 0x1892598))(this, w);
	}
	template <typename R = void> R Updateb__101_0(int32_t result) {
		return ((R (*)(AppController*, int32_t))(Il2CppBase() + 0x18925A4))(this, result);
	}

};

