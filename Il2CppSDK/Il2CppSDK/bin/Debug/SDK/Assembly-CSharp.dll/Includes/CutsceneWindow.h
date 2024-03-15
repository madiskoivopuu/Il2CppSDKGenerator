#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class CutsceneWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CutsceneWindow"));
	}

	template <typename R = uintptr_t> R& _closeBtn() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _loading() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = float> R& _loadingTime() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = float> R& _unloadingTime() {
		return *(R*)((uintptr_t)this + 0x8C);
	}
	template <typename R = bool> R& _load() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = CutsceneController*> R& _controller() {
		return *(R*)((uintptr_t)this + 0x98);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(CutsceneWindow*))(Il2CppBase() + 0x163EB84))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(CutsceneWindow*))(Il2CppBase() + 0x163EC20))(this);
	}
	template <typename R = uintptr_t> R Loading() {
		return ((R (*)(CutsceneWindow*))(Il2CppBase() + 0x163EC58))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(CutsceneWindow*, float))(Il2CppBase() + 0x163ECD0))(this, deltaTime);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(CutsceneWindow*, float))(Il2CppBase() + 0x163EE94))(this, deltaTime);
	}
	template <typename R = void> R SetupPlayer(HideHelper* player) {
		return ((R (*)(CutsceneWindow*, HideHelper*))(Il2CppBase() + 0x163EFA0))(this, player);
	}
	template <typename R = void> R SetupCloseButton(uintptr_t canvas) {
		return ((R (*)(CutsceneWindow*, uintptr_t))(Il2CppBase() + 0x163F360))(this, canvas);
	}
	template <typename R = void> R CloseCutscene() {
		return ((R (*)(CutsceneWindow*))(Il2CppBase() + 0x163EF28))(this);
	}
	template <typename R = uintptr_t> R Unloading() {
		return ((R (*)(CutsceneWindow*))(Il2CppBase() + 0x163EE1C))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(CutsceneWindow*))(Il2CppBase() + 0x163F424))(this);
	}

};

