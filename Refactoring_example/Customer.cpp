#include "Customer.h"

string Customer::statement() {
	double totalAmount = 0;
	int frequentRenterPoints = 0;
	string result = "������ " + getName() + "\n";

	for (auto& each : _rentals) {
		double thisAmount = each.getCharge();

		//frequentRenterPoints += each.get();

		// ���������� �������� �����
		frequentRenterPoints +=each.renterPoints();

		// ����� ����������� ��� ������� �������
		result += "\t" + each.getMovie().getTitle() + "\t" +
			to_string(thisAmount) + "\n";
		totalAmount += thisAmount;
	}

	// ���������� �����������
	result += "����� �������������: " +
		to_string(totalAmount) + "\n";
	result += "�� ���������� " + to_string(frequentRenterPoints) +
		" �������� �����";
	return result;
}



double Customer::getTotalChange()

{
	double totalAmount = 0;
	for (auto& each : _rentals) {
		double thisAmount = each.getCharge();
		totalAmount += thisAmount;

	}
	return totalAmount;
}