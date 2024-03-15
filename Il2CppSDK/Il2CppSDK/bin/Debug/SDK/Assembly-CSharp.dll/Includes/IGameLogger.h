#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGameLogger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGameLogger"));
	}


	template <typename R = void> R WriteAccount(int64_t worldId, int64_t userId, bool isGlobaMap, int32_t evt, Il2CppString* desc, Il2CppArray<KeyValuePair2<Il2CppString*, int32_t>*>* items) {
		return ((R (*)(IGameLogger*, int64_t, int64_t, bool, int32_t, Il2CppString*, Il2CppArray<KeyValuePair2<Il2CppString*, int32_t>*>*))(Il2CppBase() + 0x0))(this, worldId, userId, isGlobaMap, evt, desc, items);
	}
	template <typename R = void> R WriteWorld(int64_t worldId, int64_t userId, bool isGlobaMap, int32_t evt, Il2CppString* desc, Il2CppArray<KeyValuePair2<Il2CppString*, int32_t>*>* items) {
		return ((R (*)(IGameLogger*, int64_t, int64_t, bool, int32_t, Il2CppString*, Il2CppArray<KeyValuePair2<Il2CppString*, int32_t>*>*))(Il2CppBase() + 0x0))(this, worldId, userId, isGlobaMap, evt, desc, items);
	}
	template <typename R = void> R RemoveFile(int64_t worldId) {
		return ((R (*)(IGameLogger*, int64_t))(Il2CppBase() + 0x0))(this, worldId);
	}
	template <typename R = void> R RemoveFile_1(int64_t worldId, int64_t userId, bool isGlobaMap) {
		return ((R (*)(IGameLogger*, int64_t, int64_t, bool))(Il2CppBase() + 0x0))(this, worldId, userId, isGlobaMap);
	}
	template <typename R = void> R RemoveAll() {
		return ((R (*)(IGameLogger*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Upload(Il2CppString* coordAddress, int64_t serverID, Il2CppArray<uint8_t>* token) {
		return ((R (*)(IGameLogger*, Il2CppString*, int64_t, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x0))(this, coordAddress, serverID, token);
	}

};

