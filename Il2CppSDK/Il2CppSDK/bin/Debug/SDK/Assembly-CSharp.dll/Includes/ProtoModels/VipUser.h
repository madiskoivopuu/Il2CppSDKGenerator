#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class VipUser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "VipUser"));
	}

	 static MessageParser1<ProtoModels::VipUser*>*& _parser() {
		return *(MessageParser1<ProtoModels::VipUser*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& LevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& level_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& VipBonusesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::VipUserBonus*>*& _repeated_vipBonuses_codec() {
		return *(FieldCodec1<ProtoModels::VipUserBonus*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::VipUserBonus*>*& vipBonuses_() {
		return *(RepeatedField1<ProtoModels::VipUserBonus*>**)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::VipUser*>* get_Parser() {
		return ((MessageParser1<ProtoModels::VipUser*>* (*)(void *))(Il2CppBase() + 0x15CF5DC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x15CF640))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(VipUser*))(Il2CppBase() + 0x15CF760))(this);
	}
	template <typename R = ProtoModels::VipUser*> R Clone() {
		return ((R (*)(VipUser*))(Il2CppBase() + 0x15CF8C0))(this);
	}
	template <typename R = int32_t> R get_Level() {
		return ((R (*)(VipUser*))(Il2CppBase() + 0x15CF91C))(this);
	}
	template <typename R = void> R set_Level(int32_t value) {
		return ((R (*)(VipUser*, int32_t))(Il2CppBase() + 0x15CF924))(this, value);
	}
	 RepeatedField1<ProtoModels::VipUserBonus*>* get_VipBonuses() {
		return ((RepeatedField1<ProtoModels::VipUserBonus*>* (*)(VipUser*))(Il2CppBase() + 0x15CF92C))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(VipUser*, Il2CppObject*))(Il2CppBase() + 0x15CF934))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::VipUser* other) {
		return ((R (*)(VipUser*, ProtoModels::VipUser*))(Il2CppBase() + 0x15CF9A4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(VipUser*))(Il2CppBase() + 0x15CFA40))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(VipUser*))(Il2CppBase() + 0x15CFAA8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(VipUser*, uintptr_t))(Il2CppBase() + 0x15CFB0C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(VipUser*))(Il2CppBase() + 0x15CFBD8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::VipUser* other) {
		return ((R (*)(VipUser*, ProtoModels::VipUser*))(Il2CppBase() + 0x15CFCBC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(VipUser*, uintptr_t))(Il2CppBase() + 0x15CFD40))(this, input);
	}

};

}
