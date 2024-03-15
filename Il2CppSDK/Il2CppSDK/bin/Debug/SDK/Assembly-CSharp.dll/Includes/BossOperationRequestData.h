#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossOperationRequestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossOperationRequestData"));
	}

	template <typename R = BossActions*> R& BossAction() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& BossName() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppArray<int32_t>*> R& Ids() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BossOperationRequestData*, uintptr_t))(Il2CppBase() + 0x16CCC38))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BossOperationRequestData*, uintptr_t))(Il2CppBase() + 0x16CCC9C))(this, reader);
	}

};

