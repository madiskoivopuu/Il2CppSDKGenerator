#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIWindowsManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowsManager"));
	}

	template <typename R = UIHotKeysManager*> R& _hotKeys() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<UIWindow*>*> R& _windows() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Il2CppList<UIWindow*>*& _windowsPool() {
		return *(Il2CppList<UIWindow*>**)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<IUIWindowsLayer*>*> R& _layers() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& _closing() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 Action1IUIWindow*>*& ShowWindowEvent() {
		return *(Action1IUIWindow*>**)((uintptr_t)this + 0x40);
	}
	 Action1IUIWindow*>*& CloseWindowEvent() {
		return *(Action1IUIWindow*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& OnCloseLoadingWindowWithBack() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	 Il2CppDictionary<int32_t, IUIWindow*>*& CurrentWindows() {
		return *(Il2CppDictionary<int32_t, IUIWindow*>**)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> R& _fullScreenBlockCounter() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> R& _lastId() {
		return *(R*)((uintptr_t)this + 0x64);
	}
	template <typename R = bool> R& _inited() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	template <typename R = UIHotKeysManager*> R get_HotKeys() {
		return ((R (*)(UIWindowsManager*))(Il2CppBase() + 0x153363C))(this);
	}
	template <typename R = void> R add_ShowWindowEvent(Action1IUIWindow*>* value) {
		return ((R (*)(UIWindowsManager*, Action1IUIWindow*>*))(Il2CppBase() + 0x1533644))(this, value);
	}
	template <typename R = void> R remove_ShowWindowEvent(Action1IUIWindow*>* value) {
		return ((R (*)(UIWindowsManager*, Action1IUIWindow*>*))(Il2CppBase() + 0x15336E4))(this, value);
	}
	template <typename R = void> R add_CloseWindowEvent(Action1IUIWindow*>* value) {
		return ((R (*)(UIWindowsManager*, Action1IUIWindow*>*))(Il2CppBase() + 0x1533784))(this, value);
	}
	template <typename R = void> R remove_CloseWindowEvent(Action1IUIWindow*>* value) {
		return ((R (*)(UIWindowsManager*, Action1IUIWindow*>*))(Il2CppBase() + 0x1533824))(this, value);
	}
	 Il2CppDictionary<int32_t, IUIWindow*>* get_CurrentWindows() {
		return ((Il2CppDictionary<int32_t, IUIWindow*>* (*)(UIWindowsManager*))(Il2CppBase() + 0x15338C4))(this);
	}
	template <typename R = bool> R IsShowing(UIWindowType* windowType) {
		return ((R (*)(UIWindowsManager*, UIWindowType*))(Il2CppBase() + 0x15338CC))(this, windowType);
	}
	template <typename R = bool> R get_FullScreenBlock() {
		return ((R (*)(UIWindowsManager*))(Il2CppBase() + 0x1533BB8))(this);
	}
	template <typename R = int32_t> R GetNextId() {
		return ((R (*)(UIWindowsManager*))(Il2CppBase() + 0x1533BC8))(this);
	}
	template <typename R = void> R Init() {
		return ((R (*)(UIWindowsManager*))(Il2CppBase() + 0x1533BDC))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(UIWindowsManager*))(Il2CppBase() + 0x1533FEC))(this);
	}
	template <typename R = uintptr_t> R Start() {
		return ((R (*)(UIWindowsManager*))(Il2CppBase() + 0x1533FF0))(this);
	}
	template <typename R = IUIWindowsLayer*> R GetLayer(UIWindowsLayerType* type) {
		return ((R (*)(UIWindowsManager*, UIWindowsLayerType*))(Il2CppBase() + 0x1534068))(this, type);
	}
	 IEnumerable1IUIWindowsLayer*>* GetLayers() {
		return ((IEnumerable1IUIWindowsLayer*>* (*)(UIWindowsManager*))(Il2CppBase() + 0x15340A4))(this);
	}
	template <typename R = void> R CreateLayers() {
		return ((R (*)(UIWindowsManager*))(Il2CppBase() + 0x1533CC0))(this);
	}
	template <typename R = void> R OnShowWindow(IUIWindow* window) {
		return ((R (*)(UIWindowsManager*, IUIWindow*))(Il2CppBase() + 0x1534214))(this, window);
	}
	template <typename R = void> R OnCloseWindow(IUIWindow* window) {
		return ((R (*)(UIWindowsManager*, IUIWindow*))(Il2CppBase() + 0x1534434))(this, window);
	}
	template <typename R = uintptr_t> R CreateLayerPivot(Il2CppString* name) {
		return ((R (*)(UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x15340AC))(this, name);
	}
	template <typename R = IUIWindow*> R CreateWindow(IUIWindowContext* context, uintptr_t pivot) {
		return ((R (*)(UIWindowsManager*, IUIWindowContext*, uintptr_t))(Il2CppBase() + 0x152DF4C))(this, context, pivot);
	}
	template <typename R = UIWindow*> R GetFromPool(uintptr_t contextType) {
		return ((R (*)(UIWindowsManager*, uintptr_t))(Il2CppBase() + 0x15345C4))(this, contextType);
	}
	template <typename R = void> R FreeWindow(IUIWindow* window) {
		return ((R (*)(UIWindowsManager*, IUIWindow*))(Il2CppBase() + 0x152E810))(this, window);
	}
	template <typename R = IUIWindow*> R ShowWindow(IUIWindowContext* context) {
		return ((R (*)(UIWindowsManager*, IUIWindowContext*))(Il2CppBase() + 0x1534744))(this, context);
	}
	template <typename R = IUIWindow*> R GetWindow(UIWindowsLayerType* layerType, UIWindowType* windowType) {
		return ((R (*)(UIWindowsManager*, UIWindowsLayerType*, UIWindowType*))(Il2CppBase() + 0x15348A8))(this, layerType, windowType);
	}
	template <typename R = bool> R CloseWindow(UIWindowsLayerType* layerType, UIWindowType* windowType) {
		return ((R (*)(UIWindowsManager*, UIWindowsLayerType*, UIWindowType*))(Il2CppBase() + 0x1534984))(this, layerType, windowType);
	}
	template <typename R = bool> R CloseWindow_1(int32_t id) {
		return ((R (*)(UIWindowsManager*, int32_t))(Il2CppBase() + 0x1534D78))(this, id);
	}
	template <typename R = IUIWindow*> R GetWindow_1(int32_t id) {
		return ((R (*)(UIWindowsManager*, int32_t))(Il2CppBase() + 0x1534E44))(this, id);
	}
	template <typename R = void> R Close(Il2CppArray<UIWindowsLayerType*>* ignoreLayers) {
		return ((R (*)(UIWindowsManager*, Il2CppArray<UIWindowsLayerType*>*))(Il2CppBase() + 0x1534EBC))(this, ignoreLayers);
	}
	template <typename R = void> R UpdateInput(float deltaTime) {
		return ((R (*)(UIWindowsManager*, float))(Il2CppBase() + 0x15350D0))(this, deltaTime);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(UIWindowsManager*, float))(Il2CppBase() + 0x15351D4))(this, deltaTime);
	}

};

