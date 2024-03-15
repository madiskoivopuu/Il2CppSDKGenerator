#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaVipLevels
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaVipLevels"));
	}

	 static MessageParser1<ProtoModels::ArenaVipLevels*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaVipLevels*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& VipLevelsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::ArenaVipLevel*>*& _repeated_vipLevels_codec() {
		return *(FieldCodec1<ProtoModels::ArenaVipLevel*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::ArenaVipLevel*>*& vipLevels_() {
		return *(RepeatedField1<ProtoModels::ArenaVipLevel*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& VipDefaultsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaVipDefaults*> R& vipDefaults_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::ArenaVipLevels*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaVipLevels*>* (*)(void *))(Il2CppBase() + 0x28682A8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x286830C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaVipLevels*))(Il2CppBase() + 0x286842C))(this);
	}
	template <typename R = ProtoModels::ArenaVipLevels*> R Clone() {
		return ((R (*)(ArenaVipLevels*))(Il2CppBase() + 0x28685A8))(this);
	}
	 RepeatedField1<ProtoModels::ArenaVipLevel*>* get_VipLevels() {
		return ((RepeatedField1<ProtoModels::ArenaVipLevel*>* (*)(ArenaVipLevels*))(Il2CppBase() + 0x2868604))(this);
	}
	template <typename R = ProtoModels::ArenaVipDefaults*> R get_VipDefaults() {
		return ((R (*)(ArenaVipLevels*))(Il2CppBase() + 0x286860C))(this);
	}
	template <typename R = void> R set_VipDefaults(ProtoModels::ArenaVipDefaults* value) {
		return ((R (*)(ArenaVipLevels*, ProtoModels::ArenaVipDefaults*))(Il2CppBase() + 0x2868614))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaVipLevels*, Il2CppObject*))(Il2CppBase() + 0x286861C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaVipLevels* other) {
		return ((R (*)(ArenaVipLevels*, ProtoModels::ArenaVipLevels*))(Il2CppBase() + 0x286868C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaVipLevels*))(Il2CppBase() + 0x286872C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaVipLevels*))(Il2CppBase() + 0x2868784))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaVipLevels*, uintptr_t))(Il2CppBase() + 0x28687E8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaVipLevels*))(Il2CppBase() + 0x28688C4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaVipLevels* other) {
		return ((R (*)(ArenaVipLevels*, ProtoModels::ArenaVipLevels*))(Il2CppBase() + 0x28689B0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaVipLevels*, uintptr_t))(Il2CppBase() + 0x2868A98))(this, input);
	}

};

}
