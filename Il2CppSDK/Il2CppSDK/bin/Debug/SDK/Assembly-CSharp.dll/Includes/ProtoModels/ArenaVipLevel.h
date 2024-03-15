#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaVipLevel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaVipLevel"));
	}

	 static MessageParser1<ProtoModels::ArenaVipLevel*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaVipLevel*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& id_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& LevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& level_() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> static R& VipPointsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& vipPoints_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& VipBonusesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::ArenaVipBonus*>*& _repeated_vipBonuses_codec() {
		return *(FieldCodec1<ProtoModels::ArenaVipBonus*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::ArenaVipBonus*>*& vipBonuses_() {
		return *(RepeatedField1<ProtoModels::ArenaVipBonus*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& LinkToProductNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& linkToProductName_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::ArenaVipLevel*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaVipLevel*>* (*)(void *))(Il2CppBase() + 0x28674F8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x286755C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaVipLevel*))(Il2CppBase() + 0x286767C))(this);
	}
	template <typename R = ProtoModels::ArenaVipLevel*> R Clone() {
		return ((R (*)(ArenaVipLevel*))(Il2CppBase() + 0x2867820))(this);
	}
	template <typename R = int32_t> R get_Id() {
		return ((R (*)(ArenaVipLevel*))(Il2CppBase() + 0x286787C))(this);
	}
	template <typename R = void> R set_Id(int32_t value) {
		return ((R (*)(ArenaVipLevel*, int32_t))(Il2CppBase() + 0x2867884))(this, value);
	}
	template <typename R = int32_t> R get_Level() {
		return ((R (*)(ArenaVipLevel*))(Il2CppBase() + 0x286788C))(this);
	}
	template <typename R = void> R set_Level(int32_t value) {
		return ((R (*)(ArenaVipLevel*, int32_t))(Il2CppBase() + 0x2867894))(this, value);
	}
	template <typename R = int32_t> R get_VipPoints() {
		return ((R (*)(ArenaVipLevel*))(Il2CppBase() + 0x286789C))(this);
	}
	template <typename R = void> R set_VipPoints(int32_t value) {
		return ((R (*)(ArenaVipLevel*, int32_t))(Il2CppBase() + 0x28678A4))(this, value);
	}
	 RepeatedField1<ProtoModels::ArenaVipBonus*>* get_VipBonuses() {
		return ((RepeatedField1<ProtoModels::ArenaVipBonus*>* (*)(ArenaVipLevel*))(Il2CppBase() + 0x28678AC))(this);
	}
	template <typename R = Il2CppString*> R get_LinkToProductName() {
		return ((R (*)(ArenaVipLevel*))(Il2CppBase() + 0x28678B4))(this);
	}
	template <typename R = void> R set_LinkToProductName(Il2CppString* value) {
		return ((R (*)(ArenaVipLevel*, Il2CppString*))(Il2CppBase() + 0x28678BC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaVipLevel*, Il2CppObject*))(Il2CppBase() + 0x286793C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaVipLevel* other) {
		return ((R (*)(ArenaVipLevel*, ProtoModels::ArenaVipLevel*))(Il2CppBase() + 0x28679AC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaVipLevel*))(Il2CppBase() + 0x2867A7C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaVipLevel*))(Il2CppBase() + 0x2867B44))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaVipLevel*, uintptr_t))(Il2CppBase() + 0x2867BA8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaVipLevel*))(Il2CppBase() + 0x2867D10))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaVipLevel* other) {
		return ((R (*)(ArenaVipLevel*, ProtoModels::ArenaVipLevel*))(Il2CppBase() + 0x2867EBC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaVipLevel*, uintptr_t))(Il2CppBase() + 0x2867F70))(this, input);
	}

};

}
