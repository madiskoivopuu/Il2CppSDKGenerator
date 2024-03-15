#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserProductProgressData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserProductProgressData"));
	}

	 static MessageParser1ProtoModels::UserProductProgressData*>*& _parser() {
		return *(MessageParser1ProtoModels::UserProductProgressData*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& BaseFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::UserProductProgressDataItem*> R& base_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& AditionalFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::UserProductProgressDataItem*>*& _repeated_aditional_codec() {
		return *(FieldCodec1ProtoModels::UserProductProgressDataItem*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::UserProductProgressDataItem*>*& aditional_() {
		return *(RepeatedField1ProtoModels::UserProductProgressDataItem*>**)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::UserProductProgressData*>* get_Parser() {
		return ((MessageParser1ProtoModels::UserProductProgressData*>* (*)(void *))(Il2CppBase() + 0x247104C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x24710B0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserProductProgressData*))(Il2CppBase() + 0x24711D0))(this);
	}
	template <typename R = ProtoModels::UserProductProgressData*> R Clone() {
		return ((R (*)(UserProductProgressData*))(Il2CppBase() + 0x24713B0))(this);
	}
	template <typename R = ProtoModels::UserProductProgressDataItem*> R get_Base() {
		return ((R (*)(UserProductProgressData*))(Il2CppBase() + 0x247140C))(this);
	}
	template <typename R = void> R set_Base(ProtoModels::UserProductProgressDataItem* value) {
		return ((R (*)(UserProductProgressData*, ProtoModels::UserProductProgressDataItem*))(Il2CppBase() + 0x2471414))(this, value);
	}
	 RepeatedField1ProtoModels::UserProductProgressDataItem*>* get_Aditional() {
		return ((RepeatedField1ProtoModels::UserProductProgressDataItem*>* (*)(UserProductProgressData*))(Il2CppBase() + 0x247141C))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserProductProgressData*, Il2CppObject*))(Il2CppBase() + 0x2471424))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserProductProgressData* other) {
		return ((R (*)(UserProductProgressData*, ProtoModels::UserProductProgressData*))(Il2CppBase() + 0x2471494))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserProductProgressData*))(Il2CppBase() + 0x2471534))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserProductProgressData*))(Il2CppBase() + 0x247158C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserProductProgressData*, uintptr_t))(Il2CppBase() + 0x24715F0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserProductProgressData*))(Il2CppBase() + 0x24716BC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserProductProgressData* other) {
		return ((R (*)(UserProductProgressData*, ProtoModels::UserProductProgressData*))(Il2CppBase() + 0x24717A0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserProductProgressData*, uintptr_t))(Il2CppBase() + 0x2471918))(this, input);
	}

};

}
