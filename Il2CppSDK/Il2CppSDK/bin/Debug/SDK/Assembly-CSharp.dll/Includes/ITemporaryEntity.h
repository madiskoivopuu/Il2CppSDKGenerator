#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITemporaryEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITemporaryEntity"));
	}


	template <typename T = TemporaryComponent*> T get_temporary() {
		return ((T (*)(ITemporaryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTemporary() {
		return ((T (*)(ITemporaryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTemporary(int64_t newStartTime, int64_t newEndTime, int64_t newOBTStartTime, int64_t newOBTEndTime, int64_t newQAStartTime, int64_t newQAEndTime, CyclicTime* newCyclic) {
		return ((T (*)(ITemporaryEntity*, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, CyclicTime*))(Il2CppBase() + 0x0))(this, newStartTime, newEndTime, newOBTStartTime, newOBTEndTime, newQAStartTime, newQAEndTime, newCyclic);
	}
	template <typename T = void> T ReplaceTemporary(int64_t newStartTime, int64_t newEndTime, int64_t newOBTStartTime, int64_t newOBTEndTime, int64_t newQAStartTime, int64_t newQAEndTime, CyclicTime* newCyclic) {
		return ((T (*)(ITemporaryEntity*, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, CyclicTime*))(Il2CppBase() + 0x0))(this, newStartTime, newEndTime, newOBTStartTime, newOBTEndTime, newQAStartTime, newQAEndTime, newCyclic);
	}
	template <typename T = void> T RemoveTemporary() {
		return ((T (*)(ITemporaryEntity*))(Il2CppBase() + 0x0))(this);
	}

};

