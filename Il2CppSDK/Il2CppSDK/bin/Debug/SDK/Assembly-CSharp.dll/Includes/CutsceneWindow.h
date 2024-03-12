#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class CutsceneWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CutsceneWindow"));
	}

	template <typename T = uintptr_t> T& _closeBtn() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _loading() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& _loadingTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& _unloadingTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& _load() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _controller() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CutsceneWindow*))(Il2CppBase() + 0x163EB84))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(CutsceneWindow*))(Il2CppBase() + 0x163EC20))(this);
	}
	template <typename T = uintptr_t> T Loading() {
		return ((T (*)(CutsceneWindow*))(Il2CppBase() + 0x163EC58))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(CutsceneWindow*, float))(Il2CppBase() + 0x163ECD0))(this, deltaTime);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(CutsceneWindow*, float))(Il2CppBase() + 0x163EE94))(this, deltaTime);
	}
	template <typename T = void> T SetupPlayer(uintptr_t player) {
		return ((T (*)(CutsceneWindow*, uintptr_t))(Il2CppBase() + 0x163EFA0))(this, player);
	}
	template <typename T = void> T SetupCloseButton(uintptr_t canvas) {
		return ((T (*)(CutsceneWindow*, uintptr_t))(Il2CppBase() + 0x163F360))(this, canvas);
	}
	template <typename T = void> T CloseCutscene() {
		return ((T (*)(CutsceneWindow*))(Il2CppBase() + 0x163EF28))(this);
	}
	template <typename T = uintptr_t> T Unloading() {
		return ((T (*)(CutsceneWindow*))(Il2CppBase() + 0x163EE1C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(CutsceneWindow*))(Il2CppBase() + 0x163F424))(this);
	}

};

}
