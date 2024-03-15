#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AdvancedCheats {

class RandomGroupTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "RandomGroupTest"));
	}

	template <typename R = uintptr_t> R& nameInputField() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& countInputField() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& testButton() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = PolyAndCodeUI::RecyclableScrollRect*> R& recyclableScrollRect() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = AdvancedCheats::AdvancedCheatsWindow*> R& window() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 Il2CppList<Data*>*& randomGroupTestResult() {
		return *(Il2CppList<Data*>**)((uintptr_t)this + 0x40);
	}

	template <typename R = DataContext*> R get_Context() {
		return ((R (*)(RandomGroupTest*))(Il2CppBase() + 0x1717C0C))(this);
	}
	template <typename R = uintptr_t> R get_OnInitialize() {
		return ((R (*)(RandomGroupTest*))(Il2CppBase() + 0x1717C58))(this);
	}
	template <typename R = int32_t> R GetItemCount() {
		return ((R (*)(RandomGroupTest*))(Il2CppBase() + 0x1717C60))(this);
	}
	template <typename R = void> R SetCell(PolyAndCodeUI::ICell* cell, int32_t index) {
		return ((R (*)(RandomGroupTest*, PolyAndCodeUI::ICell*, int32_t))(Il2CppBase() + 0x1717C68))(this, cell, index);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(RandomGroupTest*))(Il2CppBase() + 0x1717C6C))(this);
	}
	template <typename R = void> R Intialize(AdvancedCheats::AdvancedCheatsWindow* window) {
		return ((R (*)(RandomGroupTest*, AdvancedCheats::AdvancedCheatsWindow*))(Il2CppBase() + 0x1717D0C))(this, window);
	}
	template <typename R = void> R Intializeb__13_0() {
		return ((R (*)(RandomGroupTest*))(Il2CppBase() + 0x1717DC8))(this);
	}

};

}
