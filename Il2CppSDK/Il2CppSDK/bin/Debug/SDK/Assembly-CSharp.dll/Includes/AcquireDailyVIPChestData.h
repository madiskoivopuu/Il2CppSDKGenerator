#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AcquireDailyVIPChestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AcquireDailyVIPChestData"));
	}

	template <typename T = int64_t> T& StoreDataId() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AcquireDailyVIPChestData*, uintptr_t))(Il2CppBase() + 0x18E73C0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AcquireDailyVIPChestData*, uintptr_t))(Il2CppBase() + 0x18E7404))(this, reader);
	}

};

