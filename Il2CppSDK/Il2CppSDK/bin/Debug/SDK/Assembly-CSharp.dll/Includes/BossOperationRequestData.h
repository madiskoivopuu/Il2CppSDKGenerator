#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossOperationRequestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossOperationRequestData"));
	}

	template <typename T = uintptr_t> T& BossAction() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& BossName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Ids() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BossOperationRequestData*, uintptr_t))(Il2CppBase() + 0x16CCC38))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BossOperationRequestData*, uintptr_t))(Il2CppBase() + 0x16CCC9C))(this, reader);
	}

};

}
