#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 

class PvPContext : public BaseReplicatedContext1<PvPEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PvPContext"));
	}

	template <typename T = Il2CppString*> static T& Id() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(PvPContext*))(Il2CppBase() + 0x11BC688))(this);
	}
	template <typename T = Commands*> T get_EntityCommand() {
		return ((T (*)(PvPContext*))(Il2CppBase() + 0x11BC690))(this);
	}
	template <typename T = Commands*> T get_ComponentCommand() {
		return ((T (*)(PvPContext*))(Il2CppBase() + 0x11BC698))(this);
	}
	template <typename T = PvPEntity*> T GetEntityWithId(int64_t id) {
		return ((T (*)(PvPContext*, int64_t))(Il2CppBase() + 0x11BCB4C))(this, id);
	}
	template <typename T = PvPEntity*> T get_Item(int64_t id) {
		return ((T (*)(PvPContext*, int64_t))(Il2CppBase() + 0x11BCC28))(this, id);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(PvPContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x11BCC2C))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(PvPContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x11BCD34))(this, reader, entity);
	}
	template <typename T = PvPEntity*> T get_avatarEntity() {
		return ((T (*)(PvPContext*))(Il2CppBase() + 0x11BCF24))(this);
	}
	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(PvPContext*))(Il2CppBase() + 0x11BD17C))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(PvPContext*, bool))(Il2CppBase() + 0x11BD198))(this, value);
	}

};

