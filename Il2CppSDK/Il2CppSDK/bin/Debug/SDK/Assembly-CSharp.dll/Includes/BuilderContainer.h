#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuilderContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuilderContainer"));
	}

	 Il2CppList<BuilderEntityView*>*& BuilderEntityViews() {
		return *(Il2CppList<BuilderEntityView*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = BuilderEntityView*> R& ItemPrefab() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& NoFurnitureText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = BuilderWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R Bind(BuilderWindow* window, TooltipView* tooltipView) {
		return ((R (*)(BuilderContainer*, BuilderWindow*, TooltipView*))(Il2CppBase() + 0x15A7FD4))(this, window, tooltipView);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(BuilderContainer*, float))(Il2CppBase() + 0x15A87A4))(this, deltaTime);
	}

};

