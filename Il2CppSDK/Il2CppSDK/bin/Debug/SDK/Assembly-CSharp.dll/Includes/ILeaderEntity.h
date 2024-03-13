#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILeaderEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILeaderEntity"));
	}


	template <typename T = LeaderComponent*> T get_leader() {
		return ((T (*)(ILeaderEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasLeader() {
		return ((T (*)(ILeaderEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddLeader(int64_t newId) {
		return ((T (*)(ILeaderEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceLeader(int64_t newId) {
		return ((T (*)(ILeaderEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveLeader() {
		return ((T (*)(ILeaderEntity*))(Il2CppBase() + 0x0))(this);
	}

};

