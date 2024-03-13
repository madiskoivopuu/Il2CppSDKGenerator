#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetAllBPrewardsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GetAllBPrewardsData"));
	}

	template <typename T = CurrencyType*> T& CurrencyType() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(GetAllBPrewardsData*, uintptr_t))(Il2CppBase() + 0x176FA58))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(GetAllBPrewardsData*, uintptr_t))(Il2CppBase() + 0x176FA9C))(this, reader);
	}

};

