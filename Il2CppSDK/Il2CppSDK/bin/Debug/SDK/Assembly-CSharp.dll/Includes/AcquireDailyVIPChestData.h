#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AcquireDailyVIPChestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AcquireDailyVIPChestData"));
	}

	template <typename R = int64_t> R& StoreDataId() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(AcquireDailyVIPChestData*, uintptr_t))(Il2CppBase() + 0x18E73C0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(AcquireDailyVIPChestData*, uintptr_t))(Il2CppBase() + 0x18E7404))(this, reader);
	}

};

