#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PayloadCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PayloadCallback"));
	}

	template <typename T = uintptr_t> T& mListener() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T onPayloadReceived(Il2CppString* endpointId, uintptr_t payload) {
		return ((T (*)(PayloadCallback*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1143938))(this, endpointId, payload);
	}

};

}
