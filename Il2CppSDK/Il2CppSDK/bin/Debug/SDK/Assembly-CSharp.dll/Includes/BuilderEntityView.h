#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuilderEntityView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuilderEntityView"));
	}

	template <typename T = uintptr_t> T& _checkBackground() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _checkMark() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = ResourceView*> T& _resourceViewPrefab() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _amountInInventory() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _resourceRoot() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = TooltipTrigger*> T& _tooltipTrigger() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = BuilderWindow*> T& _builderWindow() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<ResourceView*>*> T& _resourceViews() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& _blueprint() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = GameDataEntity*> T get_BuildEntity() {
		return ((T (*)(BuilderEntityView*))(Il2CppBase() + 0x15A8964))(this);
	}
	template <typename T = bool> T get_IsBuildCompleetItem() {
		return ((T (*)(BuilderEntityView*))(Il2CppBase() + 0x15A89E4))(this);
	}
	template <typename T = void> T Bind(BuilderWindow* window, GameDataEntity* buildEntity, TooltipView* tooltipView) {
		return ((T (*)(BuilderEntityView*, BuilderWindow*, GameDataEntity*, TooltipView*))(Il2CppBase() + 0x15A8450))(this, window, buildEntity, tooltipView);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(BuilderEntityView*, float))(Il2CppBase() + 0x15A89F8))(this, deltaTime);
	}
	template <typename T = void> T Deselect() {
		return ((T (*)(BuilderEntityView*))(Il2CppBase() + 0x15A8EA4))(this);
	}
	template <typename T = void> T Select() {
		return ((T (*)(BuilderEntityView*))(Il2CppBase() + 0x15A8F08))(this);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(BuilderEntityView*, uintptr_t))(Il2CppBase() + 0x15A8F6C))(this, eventData);
	}

};

