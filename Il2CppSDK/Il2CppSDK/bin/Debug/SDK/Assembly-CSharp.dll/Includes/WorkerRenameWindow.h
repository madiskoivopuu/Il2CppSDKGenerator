#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class WorkerRenameWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorkerRenameWindow"));
	}

	template <typename T = uintptr_t> T& ApplyBtn() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& ApplyIcon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& CaptionText() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& MessageText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& InputField() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WorkerRenameWindow*))(Il2CppBase() + 0x112FEA8))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(WorkerRenameWindow*))(Il2CppBase() + 0x112FF94))(this);
	}
	template <typename T = void> T OnApplyClick() {
		return ((T (*)(WorkerRenameWindow*))(Il2CppBase() + 0x113037C))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(WorkerRenameWindow*, float))(Il2CppBase() + 0x1130BFC))(this, deltaTime);
	}
	template <typename T = void> T OnWorkerRenamed() {
		return ((T (*)(WorkerRenameWindow*))(Il2CppBase() + 0x1130D54))(this);
	}
	template <typename T = void> T OnCloseClick() {
		return ((T (*)(WorkerRenameWindow*))(Il2CppBase() + 0x1130E2C))(this);
	}
	template <typename T = Il2CppString*> static T OnApplyClickg__getLocalizedNameError|9_0(uintptr_t ne) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x11307EC))(0, ne);
	}

};

}
