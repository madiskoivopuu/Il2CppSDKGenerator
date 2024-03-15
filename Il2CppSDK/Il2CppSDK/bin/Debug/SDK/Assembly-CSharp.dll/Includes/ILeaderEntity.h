#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILeaderEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILeaderEntity"));
	}


	template <typename R = LeaderComponent*> R get_leader() {
		return ((R (*)(ILeaderEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasLeader() {
		return ((R (*)(ILeaderEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddLeader(int64_t newId) {
		return ((R (*)(ILeaderEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceLeader(int64_t newId) {
		return ((R (*)(ILeaderEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveLeader() {
		return ((R (*)(ILeaderEntity*))(Il2CppBase() + 0x0))(this);
	}

};

