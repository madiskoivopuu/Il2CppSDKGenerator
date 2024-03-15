#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class LogRandomGroupRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "LogRandomGroupRequest"));
	}

	 static MessageParser1ProtoModels::LogRandomGroupRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::LogRandomGroupRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ItemStatsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static CodecIl2CppString*, int32_t>*& _map_itemStats_codec() {
		return *(CodecIl2CppString*, int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 MapField2Il2CppString*, int32_t>*& itemStats_() {
		return *(MapField2Il2CppString*, int32_t>**)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& MobKillDetailsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::StatMobKillDetail*>*& _repeated_mobKillDetails_codec() {
		return *(FieldCodec1ProtoModels::StatMobKillDetail*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1ProtoModels::StatMobKillDetail*>*& mobKillDetails_() {
		return *(RepeatedField1ProtoModels::StatMobKillDetail*>**)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::LogRandomGroupRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::LogRandomGroupRequest*>* (*)(void *))(Il2CppBase() + 0x172656C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x17265D0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(LogRandomGroupRequest*))(Il2CppBase() + 0x17266F0))(this);
	}
	template <typename R = ProtoModels::LogRandomGroupRequest*> R Clone() {
		return ((R (*)(LogRandomGroupRequest*))(Il2CppBase() + 0x17268D8))(this);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(LogRandomGroupRequest*))(Il2CppBase() + 0x1726934))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(LogRandomGroupRequest*, int64_t))(Il2CppBase() + 0x172693C))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(LogRandomGroupRequest*))(Il2CppBase() + 0x1726944))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(LogRandomGroupRequest*, int64_t))(Il2CppBase() + 0x172694C))(this, value);
	}
	 MapField2Il2CppString*, int32_t>* get_ItemStats() {
		return ((MapField2Il2CppString*, int32_t>* (*)(LogRandomGroupRequest*))(Il2CppBase() + 0x1726954))(this);
	}
	 RepeatedField1ProtoModels::StatMobKillDetail*>* get_MobKillDetails() {
		return ((RepeatedField1ProtoModels::StatMobKillDetail*>* (*)(LogRandomGroupRequest*))(Il2CppBase() + 0x172695C))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(LogRandomGroupRequest*, Il2CppObject*))(Il2CppBase() + 0x1726964))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::LogRandomGroupRequest* other) {
		return ((R (*)(LogRandomGroupRequest*, ProtoModels::LogRandomGroupRequest*))(Il2CppBase() + 0x17269D4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(LogRandomGroupRequest*))(Il2CppBase() + 0x1726AAC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(LogRandomGroupRequest*))(Il2CppBase() + 0x1726B4C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(LogRandomGroupRequest*, uintptr_t))(Il2CppBase() + 0x1726BB0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(LogRandomGroupRequest*))(Il2CppBase() + 0x1726CDC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::LogRandomGroupRequest* other) {
		return ((R (*)(LogRandomGroupRequest*, ProtoModels::LogRandomGroupRequest*))(Il2CppBase() + 0x1726E3C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(LogRandomGroupRequest*, uintptr_t))(Il2CppBase() + 0x1726EF4))(this, input);
	}

};

}
