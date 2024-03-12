#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class LogRandomGroupRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "LogRandomGroupRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ItemStatsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _map_itemStats_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& itemStats_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& MobKillDetailsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_mobKillDetails_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> T& mobKillDetails_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x172656C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x17265D0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(LogRandomGroupRequest*))(Il2CppBase() + 0x17266F0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(LogRandomGroupRequest*))(Il2CppBase() + 0x17268D8))(this);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(LogRandomGroupRequest*))(Il2CppBase() + 0x1726934))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(LogRandomGroupRequest*, int64_t))(Il2CppBase() + 0x172693C))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(LogRandomGroupRequest*))(Il2CppBase() + 0x1726944))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(LogRandomGroupRequest*, int64_t))(Il2CppBase() + 0x172694C))(this, value);
	}
	template <typename T = void*> T get_ItemStats() {
		return ((T (*)(LogRandomGroupRequest*))(Il2CppBase() + 0x1726954))(this);
	}
	template <typename T = void*> T get_MobKillDetails() {
		return ((T (*)(LogRandomGroupRequest*))(Il2CppBase() + 0x172695C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(LogRandomGroupRequest*, uintptr_t))(Il2CppBase() + 0x1726964))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(LogRandomGroupRequest*, uintptr_t))(Il2CppBase() + 0x17269D4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(LogRandomGroupRequest*))(Il2CppBase() + 0x1726AAC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LogRandomGroupRequest*))(Il2CppBase() + 0x1726B4C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(LogRandomGroupRequest*, uintptr_t))(Il2CppBase() + 0x1726BB0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(LogRandomGroupRequest*))(Il2CppBase() + 0x1726CDC))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(LogRandomGroupRequest*, uintptr_t))(Il2CppBase() + 0x1726E3C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(LogRandomGroupRequest*, uintptr_t))(Il2CppBase() + 0x1726EF4))(this, input);
	}

};

}
