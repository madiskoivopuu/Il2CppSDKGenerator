#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MasterAccountInfoType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MasterAccountInfoType"));
	}

	 static MessageParser1<ProtoModels::MasterAccountInfoType*>*& _parser() {
		return *(MessageParser1<ProtoModels::MasterAccountInfoType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& BattleTagFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& battleTag_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& LevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& level_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& RegionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& region_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& CustomizationFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<Il2CppString*>*& _repeated_customization_codec() {
		return *(FieldCodec1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<Il2CppString*>*& customization_() {
		return *(RepeatedField1<Il2CppString*>**)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& GenderFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& gender_() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	 static MessageParser1<ProtoModels::MasterAccountInfoType*>* get_Parser() {
		return ((MessageParser1<ProtoModels::MasterAccountInfoType*>* (*)(void *))(Il2CppBase() + 0x12CBC48))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x12CBCAC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CBDCC))(this);
	}
	template <typename R = ProtoModels::MasterAccountInfoType*> R Clone() {
		return ((R (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CBFB8))(this);
	}
	template <typename R = Il2CppString*> R get_BattleTag() {
		return ((R (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CC014))(this);
	}
	template <typename R = void> R set_BattleTag(Il2CppString* value) {
		return ((R (*)(MasterAccountInfoType*, Il2CppString*))(Il2CppBase() + 0x12CC01C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CC09C))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(MasterAccountInfoType*, Il2CppString*))(Il2CppBase() + 0x12CC0A4))(this, value);
	}
	template <typename R = int32_t> R get_Level() {
		return ((R (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CC124))(this);
	}
	template <typename R = void> R set_Level(int32_t value) {
		return ((R (*)(MasterAccountInfoType*, int32_t))(Il2CppBase() + 0x12CC12C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Region() {
		return ((R (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CC134))(this);
	}
	template <typename R = void> R set_Region(Il2CppString* value) {
		return ((R (*)(MasterAccountInfoType*, Il2CppString*))(Il2CppBase() + 0x12CC13C))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CC1BC))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(MasterAccountInfoType*, int64_t))(Il2CppBase() + 0x12CC1C4))(this, value);
	}
	 RepeatedField1<Il2CppString*>* get_Customization() {
		return ((RepeatedField1<Il2CppString*>* (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CC1CC))(this);
	}
	template <typename R = int32_t> R get_Gender() {
		return ((R (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CC1D4))(this);
	}
	template <typename R = void> R set_Gender(int32_t value) {
		return ((R (*)(MasterAccountInfoType*, int32_t))(Il2CppBase() + 0x12CC1DC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(MasterAccountInfoType*, Il2CppObject*))(Il2CppBase() + 0x12CC1E4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::MasterAccountInfoType* other) {
		return ((R (*)(MasterAccountInfoType*, ProtoModels::MasterAccountInfoType*))(Il2CppBase() + 0x12CC254))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CC348))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CC450))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(MasterAccountInfoType*, uintptr_t))(Il2CppBase() + 0x12CC4B4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(MasterAccountInfoType*))(Il2CppBase() + 0x12CC684))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::MasterAccountInfoType* other) {
		return ((R (*)(MasterAccountInfoType*, ProtoModels::MasterAccountInfoType*))(Il2CppBase() + 0x12CC8B8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(MasterAccountInfoType*, uintptr_t))(Il2CppBase() + 0x12CC990))(this, input);
	}

};

}
