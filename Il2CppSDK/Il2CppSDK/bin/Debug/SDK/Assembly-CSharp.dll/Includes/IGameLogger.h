#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGameLogger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGameLogger"));
	}


	template <typename T = void> T WriteAccount(int64_t worldId, int64_t userId, bool isGlobaMap, int32_t evt, Il2CppString* desc, Il2CppArray<uintptr_t>* items) {
		return ((T (*)(IGameLogger*, int64_t, int64_t, bool, int32_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, worldId, userId, isGlobaMap, evt, desc, items);
	}
	template <typename T = void> T WriteWorld(int64_t worldId, int64_t userId, bool isGlobaMap, int32_t evt, Il2CppString* desc, Il2CppArray<uintptr_t>* items) {
		return ((T (*)(IGameLogger*, int64_t, int64_t, bool, int32_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, worldId, userId, isGlobaMap, evt, desc, items);
	}
	template <typename T = void> T RemoveFile(int64_t worldId) {
		return ((T (*)(IGameLogger*, int64_t))(Il2CppBase() + 0x0))(this, worldId);
	}
	template <typename T = void> T RemoveFile_1(int64_t worldId, int64_t userId, bool isGlobaMap) {
		return ((T (*)(IGameLogger*, int64_t, int64_t, bool))(Il2CppBase() + 0x0))(this, worldId, userId, isGlobaMap);
	}
	template <typename T = void> T RemoveAll() {
		return ((T (*)(IGameLogger*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Upload(Il2CppString* coordAddress, int64_t serverID, Il2CppArray<uintptr_t>* token) {
		return ((T (*)(IGameLogger*, Il2CppString*, int64_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, coordAddress, serverID, token);
	}

};

}
