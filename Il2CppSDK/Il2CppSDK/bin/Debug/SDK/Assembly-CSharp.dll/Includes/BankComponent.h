#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BankComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BankComponent"));
	}

	template <typename T = int32_t> T& BaseSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& SizePerGrade() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T GetUnlockGrade(int32_t index) {
		return ((T (*)(BankComponent*, int32_t))(Il2CppBase() + 0xFBB674))(this, index);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(BankComponent*, uintptr_t))(Il2CppBase() + 0xFBB728))(this, target);
	}
	template <typename T = int32_t> T GetSize(int32_t grade) {
		return ((T (*)(BankComponent*, int32_t))(Il2CppBase() + 0xFBB7C4))(this, grade);
	}

};

}
