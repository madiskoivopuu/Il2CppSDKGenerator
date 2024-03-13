#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIWindowsManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowsManager"));
	}

	template <typename T = UIHotKeysManager*> T& _hotKeys() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _windows() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<UIWindow*>*> T& _windowsPool() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _layers() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _closing() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Action1IUIWindow*>*> T& ShowWindowEvent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Action1IUIWindow*>*> T& CloseWindowEvent() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& OnCloseLoadingWindowWithBack() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppDictionary<int32_t, IUIWindow*>*> T& CurrentWindows() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _fullScreenBlockCounter() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _lastId() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& _inited() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = UIHotKeysManager*> T get_HotKeys() {
		return ((T (*)(UIWindowsManager*))(Il2CppBase() + 0x153363C))(this);
	}
	template <typename T = void> T add_ShowWindowEvent(Action1IUIWindow*>* value) {
		return ((T (*)(UIWindowsManager*, Action1IUIWindow*>*))(Il2CppBase() + 0x1533644))(this, value);
	}
	template <typename T = void> T remove_ShowWindowEvent(Action1IUIWindow*>* value) {
		return ((T (*)(UIWindowsManager*, Action1IUIWindow*>*))(Il2CppBase() + 0x15336E4))(this, value);
	}
	template <typename T = void> T add_CloseWindowEvent(Action1IUIWindow*>* value) {
		return ((T (*)(UIWindowsManager*, Action1IUIWindow*>*))(Il2CppBase() + 0x1533784))(this, value);
	}
	template <typename T = void> T remove_CloseWindowEvent(Action1IUIWindow*>* value) {
		return ((T (*)(UIWindowsManager*, Action1IUIWindow*>*))(Il2CppBase() + 0x1533824))(this, value);
	}
	template <typename T = Il2CppDictionary<int32_t, IUIWindow*>*> T get_CurrentWindows() {
		return ((T (*)(UIWindowsManager*))(Il2CppBase() + 0x15338C4))(this);
	}
	template <typename T = bool> T IsShowing(UIWindowType* windowType) {
		return ((T (*)(UIWindowsManager*, UIWindowType*))(Il2CppBase() + 0x15338CC))(this, windowType);
	}
	template <typename T = bool> T get_FullScreenBlock() {
		return ((T (*)(UIWindowsManager*))(Il2CppBase() + 0x1533BB8))(this);
	}
	template <typename T = int32_t> T GetNextId() {
		return ((T (*)(UIWindowsManager*))(Il2CppBase() + 0x1533BC8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UIWindowsManager*))(Il2CppBase() + 0x1533BDC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowsManager*))(Il2CppBase() + 0x1533FEC))(this);
	}
	template <typename T = uintptr_t> T Start() {
		return ((T (*)(UIWindowsManager*))(Il2CppBase() + 0x1533FF0))(this);
	}
	template <typename T = IUIWindowsLayer*> T GetLayer(UIWindowsLayerType* type) {
		return ((T (*)(UIWindowsManager*, UIWindowsLayerType*))(Il2CppBase() + 0x1534068))(this, type);
	}
	template <typename T = IEnumerable1IUIWindowsLayer*>*> T GetLayers() {
		return ((T (*)(UIWindowsManager*))(Il2CppBase() + 0x15340A4))(this);
	}
	template <typename T = void> T CreateLayers() {
		return ((T (*)(UIWindowsManager*))(Il2CppBase() + 0x1533CC0))(this);
	}
	template <typename T = void> T OnShowWindow(IUIWindow* window) {
		return ((T (*)(UIWindowsManager*, IUIWindow*))(Il2CppBase() + 0x1534214))(this, window);
	}
	template <typename T = void> T OnCloseWindow(IUIWindow* window) {
		return ((T (*)(UIWindowsManager*, IUIWindow*))(Il2CppBase() + 0x1534434))(this, window);
	}
	template <typename T = uintptr_t> T CreateLayerPivot(Il2CppString* name) {
		return ((T (*)(UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x15340AC))(this, name);
	}
	template <typename T = IUIWindow*> T CreateWindow(IUIWindowContext* context, uintptr_t pivot) {
		return ((T (*)(UIWindowsManager*, IUIWindowContext*, uintptr_t))(Il2CppBase() + 0x152DF4C))(this, context, pivot);
	}
	template <typename T = UIWindow*> T GetFromPool(uintptr_t contextType) {
		return ((T (*)(UIWindowsManager*, uintptr_t))(Il2CppBase() + 0x15345C4))(this, contextType);
	}
	template <typename T = void> T FreeWindow(IUIWindow* window) {
		return ((T (*)(UIWindowsManager*, IUIWindow*))(Il2CppBase() + 0x152E810))(this, window);
	}
	template <typename T = IUIWindow*> T ShowWindow(IUIWindowContext* context) {
		return ((T (*)(UIWindowsManager*, IUIWindowContext*))(Il2CppBase() + 0x1534744))(this, context);
	}
	template <typename T = IUIWindow*> T GetWindow(UIWindowsLayerType* layerType, UIWindowType* windowType) {
		return ((T (*)(UIWindowsManager*, UIWindowsLayerType*, UIWindowType*))(Il2CppBase() + 0x15348A8))(this, layerType, windowType);
	}
	template <typename T = bool> T CloseWindow(UIWindowsLayerType* layerType, UIWindowType* windowType) {
		return ((T (*)(UIWindowsManager*, UIWindowsLayerType*, UIWindowType*))(Il2CppBase() + 0x1534984))(this, layerType, windowType);
	}
	template <typename T = bool> T CloseWindow_1(int32_t id) {
		return ((T (*)(UIWindowsManager*, int32_t))(Il2CppBase() + 0x1534D78))(this, id);
	}
	template <typename T = IUIWindow*> T GetWindow_1(int32_t id) {
		return ((T (*)(UIWindowsManager*, int32_t))(Il2CppBase() + 0x1534E44))(this, id);
	}
	template <typename T = void> T Close(Il2CppArray<uintptr_t>* ignoreLayers) {
		return ((T (*)(UIWindowsManager*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1534EBC))(this, ignoreLayers);
	}
	template <typename T = void> T UpdateInput(float deltaTime) {
		return ((T (*)(UIWindowsManager*, float))(Il2CppBase() + 0x15350D0))(this, deltaTime);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(UIWindowsManager*, float))(Il2CppBase() + 0x15351D4))(this, deltaTime);
	}

};

