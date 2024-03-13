#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AdvancedCheats {

class RandomGroupTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "RandomGroupTest"));
	}

	template <typename T = uintptr_t> T& nameInputField() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& countInputField() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& testButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = RecyclableScrollRect*> T& recyclableScrollRect() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = AdvancedCheatsWindow*> T& window() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<Data*>*> T& randomGroupTestResult() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = DataContext*> T get_Context() {
		return ((T (*)(RandomGroupTest*))(Il2CppBase() + 0x1717C0C))(this);
	}
	template <typename T = uintptr_t> T get_OnInitialize() {
		return ((T (*)(RandomGroupTest*))(Il2CppBase() + 0x1717C58))(this);
	}
	template <typename T = int32_t> T GetItemCount() {
		return ((T (*)(RandomGroupTest*))(Il2CppBase() + 0x1717C60))(this);
	}
	template <typename T = void> T SetCell(ICell* cell, int32_t index) {
		return ((T (*)(RandomGroupTest*, ICell*, int32_t))(Il2CppBase() + 0x1717C68))(this, cell, index);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RandomGroupTest*))(Il2CppBase() + 0x1717C6C))(this);
	}
	template <typename T = void> T Intialize(AdvancedCheatsWindow* window) {
		return ((T (*)(RandomGroupTest*, AdvancedCheatsWindow*))(Il2CppBase() + 0x1717D0C))(this, window);
	}
	template <typename T = void> T Intializeb__13_0() {
		return ((T (*)(RandomGroupTest*))(Il2CppBase() + 0x1717DC8))(this);
	}

};

}
