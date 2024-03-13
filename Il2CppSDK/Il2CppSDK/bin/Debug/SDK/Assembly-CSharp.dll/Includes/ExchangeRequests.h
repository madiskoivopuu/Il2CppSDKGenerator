#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExchangeRequests
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExchangeRequests"));
	}

	template <typename T = ExchangeType*> T& Type() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Ids() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& RewardSlotId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Resources() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ExchangeRequests*, uintptr_t))(Il2CppBase() + 0x1794D0C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ExchangeRequests*, uintptr_t))(Il2CppBase() + 0x1794E24))(this, reader);
	}

};

