#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindow"));
	}

	template <typename R = bool> R& _fullScreen() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _rectTransform() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = TooltipView*> R& _tooltipPrefab() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = TooltipView*> R& TooltipView() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& WindowId() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& Shown() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = IUIWindowsLayer*> R& Layer() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 Action1IUIWindow*>*& Closed() {
		return *(Action1IUIWindow*>**)((uintptr_t)this + 0x48);
	}
	 Action1IUIWindow*>*& Showed() {
		return *(Action1IUIWindow*>**)((uintptr_t)this + 0x50);
	}
	 Action1float>*& OnInput() {
		return *(Action1float>**)((uintptr_t)this + 0x58);
	}
	 Action1float>*& OnDraw() {
		return *(Action1float>**)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> R& _name() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	template <typename R = TooltipView*> R get_TooltipView() {
		return ((R (*)(UIWindow*))(Il2CppBase() + 0x153285C))(this);
	}
	template <typename R = void> R set_TooltipView(TooltipView* value) {
		return ((R (*)(UIWindow*, TooltipView*))(Il2CppBase() + 0x1532864))(this, value);
	}
	template <typename R = bool> R get_FullScreen() {
		return ((R (*)(UIWindow*))(Il2CppBase() + 0x153286C))(this);
	}
	template <typename R = int32_t> R get_WindowId() {
		return ((R (*)(UIWindow*))(Il2CppBase() + 0x1532874))(this);
	}
	template <typename R = void> R set_WindowId(int32_t value) {
		return ((R (*)(UIWindow*, int32_t))(Il2CppBase() + 0x153287C))(this, value);
	}
	template <typename R = uintptr_t> R get_ContextType() {
		return ((R (*)(UIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uintptr_t> R get_RectTransform() {
		return ((R (*)(UIWindow*))(Il2CppBase() + 0x1532884))(this);
	}
	template <typename R = IUIWindowContext*> R IUIWindow_get_Context() {
		return ((R (*)(UIWindow*))(Il2CppBase() + 0x153288C))(this);
	}
	template <typename R = IUIWindowContext*> R GetContext() {
		return ((R (*)(UIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_Shown() {
		return ((R (*)(UIWindow*))(Il2CppBase() + 0x153289C))(this);
	}
	template <typename R = void> R set_Shown(bool value) {
		return ((R (*)(UIWindow*, bool))(Il2CppBase() + 0x15328A4))(this, value);
	}
	template <typename R = UIWindowsManager*> R get_Manager() {
		return ((R (*)(UIWindow*))(Il2CppBase() + 0x15328B0))(this);
	}
	template <typename R = IUIWindowsLayer*> R get_Layer() {
		return ((R (*)(UIWindow*))(Il2CppBase() + 0x153296C))(this);
	}
	template <typename R = void> R set_Layer(IUIWindowsLayer* value) {
		return ((R (*)(UIWindow*, IUIWindowsLayer*))(Il2CppBase() + 0x1532974))(this, value);
	}
	template <typename R = void> R add_Closed(Action1IUIWindow*>* value) {
		return ((R (*)(UIWindow*, Action1IUIWindow*>*))(Il2CppBase() + 0x153297C))(this, value);
	}
	template <typename R = void> R remove_Closed(Action1IUIWindow*>* value) {
		return ((R (*)(UIWindow*, Action1IUIWindow*>*))(Il2CppBase() + 0x1532A1C))(this, value);
	}
	template <typename R = void> R add_Showed(Action1IUIWindow*>* value) {
		return ((R (*)(UIWindow*, Action1IUIWindow*>*))(Il2CppBase() + 0x1532ABC))(this, value);
	}
	template <typename R = void> R remove_Showed(Action1IUIWindow*>* value) {
		return ((R (*)(UIWindow*, Action1IUIWindow*>*))(Il2CppBase() + 0x1532B5C))(this, value);
	}
	template <typename R = void> R add_OnInput(Action1float>* value) {
		return ((R (*)(UIWindow*, Action1float>*))(Il2CppBase() + 0x1532BFC))(this, value);
	}
	template <typename R = void> R remove_OnInput(Action1float>* value) {
		return ((R (*)(UIWindow*, Action1float>*))(Il2CppBase() + 0x1532C9C))(this, value);
	}
	template <typename R = void> R add_OnDraw(Action1float>* value) {
		return ((R (*)(UIWindow*, Action1float>*))(Il2CppBase() + 0x1532D3C))(this, value);
	}
	template <typename R = void> R remove_OnDraw(Action1float>* value) {
		return ((R (*)(UIWindow*, Action1float>*))(Il2CppBase() + 0x1532DDC))(this, value);
	}
	template <typename R = void> R Init(int32_t id) {
		return ((R (*)(UIWindow*, int32_t))(Il2CppBase() + 0x1532E7C))(this, id);
	}
	template <typename R = void> R Show(IUIWindowsLayer* layer, IUIWindowContext* context) {
		return ((R (*)(UIWindow*, IUIWindowsLayer*, IUIWindowContext*))(Il2CppBase() + 0x1532E84))(this, layer, context);
	}
	template <typename R = void> R InitTooltipView() {
		return ((R (*)(UIWindow*))(Il2CppBase() + 0x1532F78))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(UIWindow*))(Il2CppBase() + 0x1533138))(this);
	}
	template <typename R = void> R Close() {
		return ((R (*)(UIWindow*))(Il2CppBase() + 0x153313C))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(UIWindow*))(Il2CppBase() + 0x1533200))(this);
	}
	template <typename R = void> R BackOrClose() {
		return ((R (*)(UIWindow*))(Il2CppBase() + 0x1533204))(this);
	}
	template <typename R = void> R UpdateInput(float deltaTime) {
		return ((R (*)(UIWindow*, float))(Il2CppBase() + 0x153327C))(this, deltaTime);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(UIWindow*, float))(Il2CppBase() + 0x1533358))(this, deltaTime);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(UIWindow*, float))(Il2CppBase() + 0x15333C8))(this, deltaTime);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(UIWindow*, float))(Il2CppBase() + 0x15334A4))(this, deltaTime);
	}

};

