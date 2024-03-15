#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITemporaryEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITemporaryEntity"));
	}


	template <typename R = TemporaryComponent*> R get_temporary() {
		return ((R (*)(ITemporaryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTemporary() {
		return ((R (*)(ITemporaryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTemporary(int64_t newStartTime, int64_t newEndTime, int64_t newOBTStartTime, int64_t newOBTEndTime, int64_t newQAStartTime, int64_t newQAEndTime, CyclicTime* newCyclic) {
		return ((R (*)(ITemporaryEntity*, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, CyclicTime*))(Il2CppBase() + 0x0))(this, newStartTime, newEndTime, newOBTStartTime, newOBTEndTime, newQAStartTime, newQAEndTime, newCyclic);
	}
	template <typename R = void> R ReplaceTemporary(int64_t newStartTime, int64_t newEndTime, int64_t newOBTStartTime, int64_t newOBTEndTime, int64_t newQAStartTime, int64_t newQAEndTime, CyclicTime* newCyclic) {
		return ((R (*)(ITemporaryEntity*, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, CyclicTime*))(Il2CppBase() + 0x0))(this, newStartTime, newEndTime, newOBTStartTime, newOBTEndTime, newQAStartTime, newQAEndTime, newCyclic);
	}
	template <typename R = void> R RemoveTemporary() {
		return ((R (*)(ITemporaryEntity*))(Il2CppBase() + 0x0))(this);
	}

};

