#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindow"));
	}

	template <typename T = bool> T& _fullScreen() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _rectTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = TooltipView*> T& _tooltipPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = TooltipView*> T& TooltipView() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& WindowId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& Shown() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = IUIWindowsLayer*> T& Layer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Action1IUIWindow*>*> T& Closed() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Action1IUIWindow*>*> T& Showed() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Action1float>*> T& OnInput() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Action1float>*> T& OnDraw() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = TooltipView*> T get_TooltipView() {
		return ((T (*)(UIWindow*))(Il2CppBase() + 0x153285C))(this);
	}
	template <typename T = void> T set_TooltipView(TooltipView* value) {
		return ((T (*)(UIWindow*, TooltipView*))(Il2CppBase() + 0x1532864))(this, value);
	}
	template <typename T = bool> T get_FullScreen() {
		return ((T (*)(UIWindow*))(Il2CppBase() + 0x153286C))(this);
	}
	template <typename T = int32_t> T get_WindowId() {
		return ((T (*)(UIWindow*))(Il2CppBase() + 0x1532874))(this);
	}
	template <typename T = void> T set_WindowId(int32_t value) {
		return ((T (*)(UIWindow*, int32_t))(Il2CppBase() + 0x153287C))(this, value);
	}
	template <typename T = uintptr_t> T get_ContextType() {
		return ((T (*)(UIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_RectTransform() {
		return ((T (*)(UIWindow*))(Il2CppBase() + 0x1532884))(this);
	}
	template <typename T = IUIWindowContext*> T IUIWindow_get_Context() {
		return ((T (*)(UIWindow*))(Il2CppBase() + 0x153288C))(this);
	}
	template <typename T = IUIWindowContext*> T GetContext() {
		return ((T (*)(UIWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_Shown() {
		return ((T (*)(UIWindow*))(Il2CppBase() + 0x153289C))(this);
	}
	template <typename T = void> T set_Shown(bool value) {
		return ((T (*)(UIWindow*, bool))(Il2CppBase() + 0x15328A4))(this, value);
	}
	template <typename T = UIWindowsManager*> T get_Manager() {
		return ((T (*)(UIWindow*))(Il2CppBase() + 0x15328B0))(this);
	}
	template <typename T = IUIWindowsLayer*> T get_Layer() {
		return ((T (*)(UIWindow*))(Il2CppBase() + 0x153296C))(this);
	}
	template <typename T = void> T set_Layer(IUIWindowsLayer* value) {
		return ((T (*)(UIWindow*, IUIWindowsLayer*))(Il2CppBase() + 0x1532974))(this, value);
	}
	template <typename T = void> T add_Closed(Action1IUIWindow*>* value) {
		return ((T (*)(UIWindow*, Action1IUIWindow*>*))(Il2CppBase() + 0x153297C))(this, value);
	}
	template <typename T = void> T remove_Closed(Action1IUIWindow*>* value) {
		return ((T (*)(UIWindow*, Action1IUIWindow*>*))(Il2CppBase() + 0x1532A1C))(this, value);
	}
	template <typename T = void> T add_Showed(Action1IUIWindow*>* value) {
		return ((T (*)(UIWindow*, Action1IUIWindow*>*))(Il2CppBase() + 0x1532ABC))(this, value);
	}
	template <typename T = void> T remove_Showed(Action1IUIWindow*>* value) {
		return ((T (*)(UIWindow*, Action1IUIWindow*>*))(Il2CppBase() + 0x1532B5C))(this, value);
	}
	template <typename T = void> T add_OnInput(Action1float>* value) {
		return ((T (*)(UIWindow*, Action1float>*))(Il2CppBase() + 0x1532BFC))(this, value);
	}
	template <typename T = void> T remove_OnInput(Action1float>* value) {
		return ((T (*)(UIWindow*, Action1float>*))(Il2CppBase() + 0x1532C9C))(this, value);
	}
	template <typename T = void> T add_OnDraw(Action1float>* value) {
		return ((T (*)(UIWindow*, Action1float>*))(Il2CppBase() + 0x1532D3C))(this, value);
	}
	template <typename T = void> T remove_OnDraw(Action1float>* value) {
		return ((T (*)(UIWindow*, Action1float>*))(Il2CppBase() + 0x1532DDC))(this, value);
	}
	template <typename T = void> T Init(int32_t id) {
		return ((T (*)(UIWindow*, int32_t))(Il2CppBase() + 0x1532E7C))(this, id);
	}
	template <typename T = void> T Show(IUIWindowsLayer* layer, IUIWindowContext* context) {
		return ((T (*)(UIWindow*, IUIWindowsLayer*, IUIWindowContext*))(Il2CppBase() + 0x1532E84))(this, layer, context);
	}
	template <typename T = void> T InitTooltipView() {
		return ((T (*)(UIWindow*))(Il2CppBase() + 0x1532F78))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(UIWindow*))(Il2CppBase() + 0x1533138))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(UIWindow*))(Il2CppBase() + 0x153313C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(UIWindow*))(Il2CppBase() + 0x1533200))(this);
	}
	template <typename T = void> T BackOrClose() {
		return ((T (*)(UIWindow*))(Il2CppBase() + 0x1533204))(this);
	}
	template <typename T = void> T UpdateInput(float deltaTime) {
		return ((T (*)(UIWindow*, float))(Il2CppBase() + 0x153327C))(this, deltaTime);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(UIWindow*, float))(Il2CppBase() + 0x1533358))(this, deltaTime);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(UIWindow*, float))(Il2CppBase() + 0x15333C8))(this, deltaTime);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(UIWindow*, float))(Il2CppBase() + 0x15334A4))(this, deltaTime);
	}

};

