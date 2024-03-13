#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuilderContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuilderContainer"));
	}

	template <typename T = Il2CppList<BuilderEntityView*>*> T& BuilderEntityViews() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = BuilderEntityView*> T& ItemPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& NoFurnitureText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = BuilderWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Bind(BuilderWindow* window, TooltipView* tooltipView) {
		return ((T (*)(BuilderContainer*, BuilderWindow*, TooltipView*))(Il2CppBase() + 0x15A7FD4))(this, window, tooltipView);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(BuilderContainer*, float))(Il2CppBase() + 0x15A87A4))(this, deltaTime);
	}

};

