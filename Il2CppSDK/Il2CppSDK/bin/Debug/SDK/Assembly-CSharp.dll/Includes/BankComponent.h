#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BankComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BankComponent"));
	}

	template <typename R = int32_t> R& BaseSize() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& SizePerGrade() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = int32_t> R GetUnlockGrade(int32_t index) {
		return ((R (*)(BankComponent*, int32_t))(Il2CppBase() + 0xFBB674))(this, index);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BankComponent*, Il2CppObject*))(Il2CppBase() + 0xFBB728))(this, target);
	}
	template <typename R = int32_t> R GetSize(int32_t grade) {
		return ((R (*)(BankComponent*, int32_t))(Il2CppBase() + 0xFBB7C4))(this, grade);
	}

};

