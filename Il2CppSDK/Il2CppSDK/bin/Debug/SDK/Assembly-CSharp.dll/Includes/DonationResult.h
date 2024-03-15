#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DonationResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DonationResult"));
	}

	template <typename R = PlayerClassProgress> R& ProgressType() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& BaseAddPoints() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = bool> R& SuperProc() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& ProcPoints() {
		return *(R*)((uintptr_t)this + 0xC);
	}
	template <typename R = int32_t> R& NewPoints() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DonationResult*, uintptr_t))(Il2CppBase() + 0x1302C20))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(DonationResult*, uintptr_t))(Il2CppBase() + 0x1302C94))(this, reader);
	}

};

