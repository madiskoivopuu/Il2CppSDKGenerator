#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class WorkerRenameWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorkerRenameWindow"));
	}

	template <typename R = uintptr_t> R& ApplyBtn() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& ApplyIcon() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& CloseBtn() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& CaptionText() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& MessageText() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& InputField() {
		return *(R*)((uintptr_t)this + 0xA0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(WorkerRenameWindow*))(Il2CppBase() + 0x112FEA8))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(WorkerRenameWindow*))(Il2CppBase() + 0x112FF94))(this);
	}
	template <typename R = void> R OnApplyClick() {
		return ((R (*)(WorkerRenameWindow*))(Il2CppBase() + 0x113037C))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(WorkerRenameWindow*, float))(Il2CppBase() + 0x1130BFC))(this, deltaTime);
	}
	template <typename R = void> R OnWorkerRenamed() {
		return ((R (*)(WorkerRenameWindow*))(Il2CppBase() + 0x1130D54))(this);
	}
	template <typename R = void> R OnCloseClick() {
		return ((R (*)(WorkerRenameWindow*))(Il2CppBase() + 0x1130E2C))(this);
	}
	template <typename R = Il2CppString*> static R OnApplyClickg__getLocalizedNameError|9_0(NameError ne) {
		return ((R (*)(void *, NameError))(Il2CppBase() + 0x11307EC))(0, ne);
	}

};

