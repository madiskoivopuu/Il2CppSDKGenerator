#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuilderEntityView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuilderEntityView"));
	}

	template <typename R = uintptr_t> R& _checkBackground() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _checkMark() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = ResourceView*> R& _resourceViewPrefab() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _amountInInventory() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _resourceRoot() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = TooltipTrigger*> R& _tooltipTrigger() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = BuilderWindow*> R& _builderWindow() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	 Il2CppList<ResourceView*>*& _resourceViews() {
		return *(Il2CppList<ResourceView*>**)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppString*> R& _blueprint() {
		return *(R*)((uintptr_t)this + 0x60);
	}

	template <typename R = GameDataEntity*> R get_BuildEntity() {
		return ((R (*)(BuilderEntityView*))(Il2CppBase() + 0x15A8964))(this);
	}
	template <typename R = bool> R get_IsBuildCompleetItem() {
		return ((R (*)(BuilderEntityView*))(Il2CppBase() + 0x15A89E4))(this);
	}
	template <typename R = void> R Bind(BuilderWindow* window, GameDataEntity* buildEntity, TooltipView* tooltipView) {
		return ((R (*)(BuilderEntityView*, BuilderWindow*, GameDataEntity*, TooltipView*))(Il2CppBase() + 0x15A8450))(this, window, buildEntity, tooltipView);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(BuilderEntityView*, float))(Il2CppBase() + 0x15A89F8))(this, deltaTime);
	}
	template <typename R = void> R Deselect() {
		return ((R (*)(BuilderEntityView*))(Il2CppBase() + 0x15A8EA4))(this);
	}
	template <typename R = void> R Select() {
		return ((R (*)(BuilderEntityView*))(Il2CppBase() + 0x15A8F08))(this);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(BuilderEntityView*, uintptr_t))(Il2CppBase() + 0x15A8F6C))(this, eventData);
	}

};

