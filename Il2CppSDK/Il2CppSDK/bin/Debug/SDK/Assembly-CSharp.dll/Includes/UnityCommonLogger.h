#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ICommonLogger" 

class UnityCommonLogger: ICommonLogger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityCommonLogger"));
	}

	template <typename T = uintptr_t> T& Logs() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Logs() {
		return ((T (*)(UnityCommonLogger*))(Il2CppBase() + 0x1538374))(this);
	}
	template <typename T = void> T set_Logs(uintptr_t value) {
		return ((T (*)(UnityCommonLogger*, uintptr_t))(Il2CppBase() + 0x153837C))(this, value);
	}
	template <typename T = void> T Println(int64_t worldID, Il2CppString* msg, Il2CppString* tag, uintptr_t level, int64_t userID, bool reliable, Il2CppDictionary<Il2CppString*, uintptr_t>* payload) {
		return ((T (*)(UnityCommonLogger*, int64_t, Il2CppString*, Il2CppString*, uintptr_t, int64_t, bool, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1538384))(this, worldID, msg, tag, level, userID, reliable, payload);
	}

};

}
