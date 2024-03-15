#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PayloadCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PayloadCallback"));
	}

	template <typename R = GooglePlayGamesBasicApiNearby::IMessageListener*> R& mListener() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R onPayloadReceived(Il2CppString* endpointId, uintptr_t payload) {
		return ((R (*)(PayloadCallback*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1143938))(this, endpointId, payload);
	}

};

