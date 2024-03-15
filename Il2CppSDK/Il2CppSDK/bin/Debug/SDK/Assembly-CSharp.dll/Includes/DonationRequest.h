#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DonationRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DonationRequest"));
	}

	template <typename R = Il2CppString*> R& ClassName() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = PlayerClassProgress> R& ProgressType() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppArray<int32_t>*> R& Ids() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DonationRequest*, uintptr_t))(Il2CppBase() + 0x1302A7C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(DonationRequest*, uintptr_t))(Il2CppBase() + 0x1302AE0))(this, reader);
	}

};

