#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExchangeRequests
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExchangeRequests"));
	}

	template <typename R = ExchangeType> R& Type() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<int32_t>*> R& Ids() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& RewardSlotId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Resource>*> R& Resources() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ExchangeRequests*, uintptr_t))(Il2CppBase() + 0x1794D0C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ExchangeRequests*, uintptr_t))(Il2CppBase() + 0x1794E24))(this, reader);
	}

};

