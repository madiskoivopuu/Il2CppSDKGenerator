#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaVipLevel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaVipLevel"));
	}

	template <typename T = MessageParser1ArenaVipLevel*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IdFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& id_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& LevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& level_() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& VipPointsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& vipPoints_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& VipBonusesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ArenaVipBonus*>*> static T& _repeated_vipBonuses_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1ArenaVipBonus*>*> T& vipBonuses_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& LinkToProductNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& linkToProductName_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1ArenaVipLevel*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x28674F8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x286755C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaVipLevel*))(Il2CppBase() + 0x286767C))(this);
	}
	template <typename T = ArenaVipLevel*> T Clone() {
		return ((T (*)(ArenaVipLevel*))(Il2CppBase() + 0x2867820))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(ArenaVipLevel*))(Il2CppBase() + 0x286787C))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(ArenaVipLevel*, int32_t))(Il2CppBase() + 0x2867884))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(ArenaVipLevel*))(Il2CppBase() + 0x286788C))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(ArenaVipLevel*, int32_t))(Il2CppBase() + 0x2867894))(this, value);
	}
	template <typename T = int32_t> T get_VipPoints() {
		return ((T (*)(ArenaVipLevel*))(Il2CppBase() + 0x286789C))(this);
	}
	template <typename T = void> T set_VipPoints(int32_t value) {
		return ((T (*)(ArenaVipLevel*, int32_t))(Il2CppBase() + 0x28678A4))(this, value);
	}
	template <typename T = RepeatedField1ArenaVipBonus*>*> T get_VipBonuses() {
		return ((T (*)(ArenaVipLevel*))(Il2CppBase() + 0x28678AC))(this);
	}
	template <typename T = Il2CppString*> T get_LinkToProductName() {
		return ((T (*)(ArenaVipLevel*))(Il2CppBase() + 0x28678B4))(this);
	}
	template <typename T = void> T set_LinkToProductName(Il2CppString* value) {
		return ((T (*)(ArenaVipLevel*, Il2CppString*))(Il2CppBase() + 0x28678BC))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaVipLevel*, Il2CppObject*))(Il2CppBase() + 0x286793C))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaVipLevel* other) {
		return ((T (*)(ArenaVipLevel*, ArenaVipLevel*))(Il2CppBase() + 0x28679AC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaVipLevel*))(Il2CppBase() + 0x2867A7C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaVipLevel*))(Il2CppBase() + 0x2867B44))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaVipLevel*, uintptr_t))(Il2CppBase() + 0x2867BA8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaVipLevel*))(Il2CppBase() + 0x2867D10))(this);
	}
	template <typename T = void> T MergeFrom(ArenaVipLevel* other) {
		return ((T (*)(ArenaVipLevel*, ArenaVipLevel*))(Il2CppBase() + 0x2867EBC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaVipLevel*, uintptr_t))(Il2CppBase() + 0x2867F70))(this, input);
	}

};

}
