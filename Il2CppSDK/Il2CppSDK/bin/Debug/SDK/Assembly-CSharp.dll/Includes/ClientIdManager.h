#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientIdManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientIdManager"));
	}

	template <typename R = int32_t> R& _lastId() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = int32_t> R CreateNewId() {
		return ((R (*)(ClientIdManager*))(Il2CppBase() + 0xE18B14))(this);
	}
	template <typename R = void> R Reset(int32_t startId) {
		return ((R (*)(ClientIdManager*, int32_t))(Il2CppBase() + 0xE18B28))(this, startId);
	}

};

